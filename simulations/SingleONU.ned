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

import inet.linklayer.ethernet.EtherHub;
import inet.nodes.ethernet.EtherHost2;
import ned.DatarateChannel;
import inet.nodes.ethernet.EtherHost;
import inet.linklayer.ethernet.EthernetInterface;
import inet.nodes.ethernet.EtherSwitch;

import PON.ONU.*;
import PON.OLT.*;
import PON.common.*;
import PON.*;

import inet.nodes.ethernet.EtherSwitch2;
import inet.mobility.ANSimMobility;
import inet.networklayer.ipv4.RoutingTable;
import inet.networklayer.ipv6.RoutingTable6;


network SingleONU
{
    types:
        channel GFX extends ned.DatarateChannel
        {
            datarate = 1Gbps;
        }
    submodules:
        pon_Splitter: PON_Splitter {
            @display("p=313,142");
        }
        epon_onu: EPON_ONU {
            @display("p=432,66");
        }
        host1: EtherHost {
            @display("p=538,66");
        }
        host2: EtherHost {
            @display("p=86,72");
        }
        epon_olt: EPON_OLT {
            @display("p=141,142");
        }
        serviceConfig: ServiceConfig {
            @display("p=261,48");
        }
    connections:

        // to splitter
        epon_olt.epon <--> GFX <--> pon_Splitter.portu;
        pon_Splitter.portg++ <--> GFX <--> epon_onu.epon;
        // Hosts
        epon_onu.ethg <--> DatarateChannel <--> host1.ethg;
        epon_olt.ethg <--> DatarateChannel <--> host2.ethg;

}
