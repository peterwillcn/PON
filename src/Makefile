#
# OMNeT++/OMNEST Makefile for libPON
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-so -O out -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/util/headerserializers/headers -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/networklayer/arp -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/transport/sctp -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/world -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/transport/contract -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/linklayer/mfcore -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/linklayer/ethernet -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/util -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/networklayer/ted -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/linklayer/ieee80211/mac -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/networklayer/common -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/networklayer/ipv6 -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/applications/pingapp -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/networklayer/ldp -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/transport/tcp -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/util/headerserializers -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/transport/udp -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/networklayer/rsvp_te -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/networklayer/ipv4 -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/networklayer/icmpv6 -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/base -I../../Vlans/src/linklayer -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/networklayer/contract -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/networklayer/manetrouting/base -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/networklayer/mpls -I/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/src/linklayer/contract -L../../Vlans/out/$(CONFIGNAME)/src -L/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2/out/$(CONFIGNAME)/src -L../out/$(CONFIGNAME) -lVlans -linet -KVLANS_PROJ=../../Vlans -KINETMANET_PROJ=/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2
#

# Name of target to be created (-o option)
TARGET = libPON$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I$(INETMANET_PROJ)/src/util/headerserializers/headers \
    -I$(INETMANET_PROJ)/src/networklayer/arp \
    -I$(INETMANET_PROJ)/src/transport/sctp \
    -I$(INETMANET_PROJ)/src/world \
    -I$(INETMANET_PROJ)/src/transport/contract \
    -I$(INETMANET_PROJ)/src/linklayer/mfcore \
    -I$(INETMANET_PROJ)/src/linklayer/ethernet \
    -I$(INETMANET_PROJ)/src/util \
    -I$(INETMANET_PROJ)/src/networklayer/ted \
    -I$(INETMANET_PROJ)/src/linklayer/ieee80211/mac \
    -I$(INETMANET_PROJ)/src/networklayer/common \
    -I$(INETMANET_PROJ)/src/networklayer/ipv6 \
    -I$(INETMANET_PROJ)/src/applications/pingapp \
    -I$(INETMANET_PROJ)/src/networklayer/ldp \
    -I$(INETMANET_PROJ)/src/transport/tcp \
    -I$(INETMANET_PROJ)/src/util/headerserializers \
    -I$(INETMANET_PROJ)/src/transport/udp \
    -I$(INETMANET_PROJ)/src/networklayer/rsvp_te \
    -I$(INETMANET_PROJ)/src/networklayer/ipv4 \
    -I$(INETMANET_PROJ)/src/networklayer/icmpv6 \
    -I$(INETMANET_PROJ)/src/base \
    -I../../Vlans/src/linklayer \
    -I$(INETMANET_PROJ)/src/networklayer/contract \
    -I$(INETMANET_PROJ)/src/networklayer/manetrouting/base \
    -I$(INETMANET_PROJ)/src/networklayer/mpls \
    -I$(INETMANET_PROJ)/src/linklayer/contract \
    -I. \
    -IOLT \
    -IONU \
    -Icommon

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L../../Vlans/out/$(CONFIGNAME)/src -L$(INETMANET_PROJ)/out/$(CONFIGNAME)/src -L../out/$(CONFIGNAME)  -lVlans -linet
LIBS += -Wl,-rpath,`abspath ../../Vlans/out/$(CONFIGNAME)/src` -Wl,-rpath,`abspath $(INETMANET_PROJ)/out/$(CONFIGNAME)/src` -Wl,-rpath,`abspath ../out/$(CONFIGNAME)`

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/PON_Splitter.o \
    $O/OLT/EPON_OLT_relayDefault.o \
    $O/OLT/EPON_OLT_vlanBridgeRelay.o \
    $O/OLT/OLTMacCtl_NP.o \
    $O/OLT/OLTQPerLLiDBase.o \
    $O/OLT/OLTQPerLLiDBase_P.o \
    $O/OLT/OLT_QPL_RR.o \
    $O/OLT/ONUTable.o \
    $O/OLT/ONUTableEntry.o \
    $O/ONU/EPON_ONU_relayDefault.o \
    $O/ONU/EPON_ONU_vlanBridgeRelay.o \
    $O/ONU/ONUMacCtlBase.o \
    $O/ONU/ONUMacCtl_NP.o \
    $O/ONU/ONUMacCtl_P.o \
    $O/ONU/ONUQPerLLiDBase.o \
    $O/ONU/ONU_QPL_RR.o \
    $O/common/CopyableQueueCVectors.o \
    $O/common/EPON_CtrlInfo.o \
    $O/common/EPON_mac.o \
    $O/common/MPCPTools.o \
    $O/common/ServiceConfig.o \
    $O/common/EPON_messages_m.o

# Message files
MSGFILES = \
    common/EPON_messages.msg

# Other makefile variables (-K)
VLANS_PROJ=../../Vlans
INETMANET_PROJ=/media/data/Linux/omnet/inetmanet-inetmanet-00f64c2

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppenvir$D $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS)  $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $(TARGET)

$(TARGET) : $O/$(TARGET)
	ln -s -f $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@mkdir -p $O
	$(SHLIB_LD) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(LIBS) $(OMNETPP_LIBS) $(LDFLAGS)
	-$(CHCON) -t textrel_shlib_t $O/$(TARGET) || echo "You can probably safely ignore the above message."

.PHONY:

.SUFFIXES: .cc

$O/%.o: %.cc
	@mkdir -p $(dir $@)
	$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	-rm -rf $O
	-rm -f PON PON.exe libPON.so libPON.a libPON.dll libPON.dylib
	-rm -f ./*_m.cc ./*_m.h
	-rm -f OLT/*_m.cc OLT/*_m.h
	-rm -f ONU/*_m.cc ONU/*_m.h
	-rm -f common/*_m.cc common/*_m.h

cleanall: clean
	-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc OLT/*.cc ONU/*.cc common/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/PON_Splitter.o: PON_Splitter.cc \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	PON_Splitter.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	common/MPCPTools.h \
	common/EPON_messages_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h
$O/OLT/ONUTableEntry.o: OLT/ONUTableEntry.cc \
	OLT/ONUTableEntry.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h
$O/OLT/OLTMacCtl_NP.o: OLT/OLTMacCtl_NP.cc \
	$(INETMANET_PROJ)/src/base/IPassiveQueue.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	OLT/OLTMacCtl_NP.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	common/MPCP_codes.h \
	common/MPCPTools.h \
	common/EPON_messages_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h
$O/OLT/OLTQPerLLiDBase_P.o: OLT/OLTQPerLLiDBase_P.cc \
	OLT/OLTQPerLLiDBase.h \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(VLANS_PROJ)/src/linklayer/EtherFrameVlans_m.h \
	OLT/ONUTableEntry.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	common/MPCPTools.h \
	common/CopyableQueueCVectors.h \
	$(VLANS_PROJ)/src/linklayer/MACVlanRelayUnitBase.h \
	common/ServiceConfig.h \
	OLT/OLTQPerLLiDBase_P.h \
	OLT/OLT_QPL_RR.h \
	OLT/ONUTable.h \
	$(INETMANET_PROJ)/src/base/IPassiveQueue.h \
	common/EPON_CtrlInfo.h \
	common/MPCP_codes.h \
	common/EPON_messages_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h
$O/OLT/OLT_QPL_RR.o: OLT/OLT_QPL_RR.cc \
	OLT/OLTQPerLLiDBase.h \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(VLANS_PROJ)/src/linklayer/EtherFrameVlans_m.h \
	OLT/ONUTableEntry.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	common/MPCPTools.h \
	common/CopyableQueueCVectors.h \
	$(VLANS_PROJ)/src/linklayer/MACVlanRelayUnitBase.h \
	common/ServiceConfig.h \
	OLT/OLT_QPL_RR.h \
	OLT/ONUTable.h \
	$(INETMANET_PROJ)/src/base/IPassiveQueue.h \
	common/EPON_CtrlInfo.h \
	common/MPCP_codes.h \
	common/EPON_messages_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h
$O/OLT/EPON_OLT_relayDefault.o: OLT/EPON_OLT_relayDefault.cc \
	OLT/ONUTable.h \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	common/EPON_CtrlInfo.h \
	$(VLANS_PROJ)/src/linklayer/EtherFrameVlans_m.h \
	OLT/ONUTableEntry.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(VLANS_PROJ)/src/linklayer/MACVlanRelayUnitBase.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h \
	common/ServiceConfig.h \
	OLT/EPON_OLT_relayDefault.h
$O/OLT/EPON_OLT_vlanBridgeRelay.o: OLT/EPON_OLT_vlanBridgeRelay.cc \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(VLANS_PROJ)/src/linklayer/EtherFrameVlans_m.h \
	OLT/EPON_OLT_vlanBridgeRelay.h \
	OLT/ONUTableEntry.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	$(VLANS_PROJ)/src/linklayer/MACVlanRelayUnitBase.h \
	common/ServiceConfig.h \
	OLT/EPON_OLT_relayDefault.h \
	OLT/ONUTable.h \
	common/EPON_CtrlInfo.h \
	common/EPON_messages_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h
$O/OLT/ONUTable.o: OLT/ONUTable.cc \
	OLT/ONUTable.h \
	OLT/ONUTableEntry.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h
$O/OLT/OLTQPerLLiDBase.o: OLT/OLTQPerLLiDBase.cc \
	OLT/OLTQPerLLiDBase.h \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(VLANS_PROJ)/src/linklayer/EtherFrameVlans_m.h \
	OLT/ONUTableEntry.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	common/MPCPTools.h \
	common/CopyableQueueCVectors.h \
	$(VLANS_PROJ)/src/linklayer/MACVlanRelayUnitBase.h \
	common/ServiceConfig.h \
	OLT/ONUTable.h \
	$(INETMANET_PROJ)/src/base/IPassiveQueue.h \
	common/EPON_CtrlInfo.h \
	common/MPCP_codes.h \
	common/EPON_messages_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h
$O/ONU/ONUMacCtl_NP.o: ONU/ONUMacCtl_NP.cc \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(VLANS_PROJ)/src/linklayer/EtherVlanDefs.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherMACBase.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	$(INETMANET_PROJ)/src/util/headerserializers/headers/ethernet.h \
	ONU/ONUMacCtl_NP.h \
	common/MPCPTools.h \
	$(INETMANET_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_PROJ)/src/base/IPassiveQueue.h \
	$(INETMANET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	common/EPON_CtrlInfo.h \
	common/EPON_mac.h \
	ONU/ONUMacCtlBase.h \
	$(INETMANET_PROJ)/src/linklayer/contract/TxNotifDetails.h \
	$(INETMANET_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_PROJ)/src/base/INotifiable.h \
	$(INETMANET_PROJ)/src/base/ModuleAccess.h \
	common/MPCP_codes.h \
	common/EPON_messages_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h
$O/ONU/EPON_ONU_vlanBridgeRelay.o: ONU/EPON_ONU_vlanBridgeRelay.cc \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	common/EPON_CtrlInfo.h \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(VLANS_PROJ)/src/linklayer/EtherFrameVlans_m.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	ONU/EPON_ONU_relayDefault.h \
	common/EPON_messages_m.h \
	$(VLANS_PROJ)/src/linklayer/MACVlanRelayUnitBase.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	ONU/EPON_ONU_vlanBridgeRelay.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h \
	common/ServiceConfig.h
$O/ONU/ONUMacCtlBase.o: ONU/ONUMacCtlBase.cc \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(VLANS_PROJ)/src/linklayer/EtherVlanDefs.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherMACBase.h \
	$(INETMANET_PROJ)/src/util/headerserializers/headers/ethernet.h \
	common/MPCPTools.h \
	$(INETMANET_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_PROJ)/src/base/IPassiveQueue.h \
	$(INETMANET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	common/EPON_mac.h \
	common/EPON_CtrlInfo.h \
	ONU/ONUMacCtlBase.h \
	$(INETMANET_PROJ)/src/linklayer/contract/TxNotifDetails.h \
	$(INETMANET_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_PROJ)/src/base/INotifiable.h \
	$(INETMANET_PROJ)/src/base/ModuleAccess.h \
	common/MPCP_codes.h \
	common/EPON_messages_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h
$O/ONU/ONUQPerLLiDBase.o: ONU/ONUQPerLLiDBase.cc \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherMACBase.h \
	ONU/ONUQPerLLiDBase.h \
	ONU/ONUMacCtl_NP.h \
	$(INETMANET_PROJ)/src/base/NotificationBoard.h \
	common/EPON_mac.h \
	$(INETMANET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	ONU/ONUMacCtlBase.h \
	$(INETMANET_PROJ)/src/linklayer/contract/TxNotifDetails.h \
	$(INETMANET_PROJ)/src/base/ModuleAccess.h \
	common/MPCP_codes.h \
	$(INETMANET_PROJ)/src/base/INotifiable.h \
	common/EPON_messages_m.h \
	$(INETMANET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(VLANS_PROJ)/src/linklayer/EtherVlanDefs.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	$(INETMANET_PROJ)/src/util/headerserializers/headers/ethernet.h \
	common/MPCPTools.h \
	common/CopyableQueueCVectors.h \
	common/ServiceConfig.h \
	$(INETMANET_PROJ)/src/base/IPassiveQueue.h \
	common/EPON_CtrlInfo.h \
	$(INETMANET_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h
$O/ONU/ONU_QPL_RR.o: ONU/ONU_QPL_RR.cc \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherMACBase.h \
	ONU/ONUQPerLLiDBase.h \
	ONU/ONUMacCtl_NP.h \
	$(INETMANET_PROJ)/src/base/NotificationBoard.h \
	common/EPON_mac.h \
	$(INETMANET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	ONU/ONUMacCtlBase.h \
	$(INETMANET_PROJ)/src/linklayer/contract/TxNotifDetails.h \
	common/MPCP_codes.h \
	$(INETMANET_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_PROJ)/src/base/INotifiable.h \
	common/EPON_messages_m.h \
	$(INETMANET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(VLANS_PROJ)/src/linklayer/EtherVlanDefs.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	$(INETMANET_PROJ)/src/util/headerserializers/headers/ethernet.h \
	common/CopyableQueueCVectors.h \
	common/MPCPTools.h \
	common/ServiceConfig.h \
	$(INETMANET_PROJ)/src/base/IPassiveQueue.h \
	common/EPON_CtrlInfo.h \
	$(INETMANET_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	ONU/ONU_QPL_RR.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h
$O/ONU/ONUMacCtl_P.o: ONU/ONUMacCtl_P.cc \
	ONU/ONUMacCtl_P.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherMACBase.h \
	ONU/ONUQPerLLiDBase.h \
	ONU/ONUMacCtl_NP.h \
	$(INETMANET_PROJ)/src/base/NotificationBoard.h \
	common/EPON_mac.h \
	$(INETMANET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	ONU/ONUMacCtlBase.h \
	$(INETMANET_PROJ)/src/linklayer/contract/TxNotifDetails.h \
	$(INETMANET_PROJ)/src/base/ModuleAccess.h \
	common/MPCP_codes.h \
	$(INETMANET_PROJ)/src/base/INotifiable.h \
	common/EPON_messages_m.h \
	$(INETMANET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(VLANS_PROJ)/src/linklayer/EtherVlanDefs.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	$(INETMANET_PROJ)/src/util/headerserializers/headers/ethernet.h \
	common/CopyableQueueCVectors.h \
	common/MPCPTools.h \
	common/ServiceConfig.h \
	$(INETMANET_PROJ)/src/base/IPassiveQueue.h \
	common/EPON_CtrlInfo.h \
	$(INETMANET_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h
$O/ONU/EPON_ONU_relayDefault.o: ONU/EPON_ONU_relayDefault.cc \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	common/EPON_CtrlInfo.h \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(VLANS_PROJ)/src/linklayer/EtherFrameVlans_m.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	common/EPON_messages_m.h \
	ONU/EPON_ONU_relayDefault.h \
	$(VLANS_PROJ)/src/linklayer/MACVlanRelayUnitBase.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h \
	common/ServiceConfig.h
$O/common/EPON_messages_m.o: common/EPON_messages_m.cc \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	common/EPON_messages_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h
$O/common/EPON_CtrlInfo.o: common/EPON_CtrlInfo.cc \
	common/EPON_CtrlInfo.h
$O/common/ServiceConfig.o: common/ServiceConfig.cc \
	common/ServiceConfig.h
$O/common/CopyableQueueCVectors.o: common/CopyableQueueCVectors.cc \
	common/CopyableQueueCVectors.h
$O/common/MPCPTools.o: common/MPCPTools.cc \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	common/MPCPTools.h \
	common/EPON_messages_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h
$O/common/EPON_mac.o: common/EPON_mac.cc \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(VLANS_PROJ)/src/linklayer/EtherVlanDefs.h \
	$(INETMANET_PROJ)/src/base/INETDefs.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/EtherMACBase.h \
	$(INETMANET_PROJ)/src/util/headerserializers/headers/ethernet.h \
	$(INETMANET_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_PROJ)/src/base/IPassiveQueue.h \
	common/EPON_mac.h \
	common/EPON_CtrlInfo.h \
	$(INETMANET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_PROJ)/src/linklayer/contract/TxNotifDetails.h \
	$(INETMANET_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_PROJ)/src/base/INotifiable.h \
	$(INETMANET_PROJ)/src/base/NotifierConsts.h \
	common/EPON_messages_m.h \
	$(INETMANET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_PROJ)/src/linklayer/ethernet/Ethernet.h

