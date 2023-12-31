//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

import inet.linklayer.ethernet.EtherMAC2;
import inet.linklayer.ethernet.EtherEncap;
import inet.networklayer.queue.OutputQueue;

package PON.ONU;
import PON.common.*;


//
// TODO auto-generated module
//
module ONU_Port
{
    parameters:
        string QMgmtUnit = default("ONU_QPL_RR");
        string MacCtlModule =  default("ONUMacCtl_NP");

        @display("i=block/ifcard;bgb=159,272");

    gates:
        input netwIn;
        output netwOut;
        inout phys;

    submodules:
        onuMacCtl: <MacCtlModule> like ONUMacCtl {
            @display("p=80,135");
        }
        epon_mac: EPON_mac {
            @display("p=80,216;i=block/rxtx");
            promiscuous = true;
        }
        onu_Q_mgmt: <QMgmtUnit> like ONU_Q_mgmt {
            @display("p=80,57");
        }
    connections:
        epon_mac.upperLayerOut --> onuMacCtl.lowerLayerIn;
        onuMacCtl.lowerLayerOut --> epon_mac.upperLayerIn;

        onu_Q_mgmt.lowerLayerOut --> onuMacCtl.upperLayerIn;
        onu_Q_mgmt.upperLayerOut --> netwOut;

        epon_mac.phys <--> phys;
        onuMacCtl.upperLayerOut --> onu_Q_mgmt.lowerLayerIn;
        netwIn --> onu_Q_mgmt.upperLayerIn;
}
