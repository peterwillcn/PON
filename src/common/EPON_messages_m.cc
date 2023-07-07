//
// Generated file, do not edit! Created by opp_msgc 4.1 from common/EPON_messages.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "EPON_messages_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




Register_Class(SyncCode);

SyncCode::SyncCode(const char *name, int kind) : cPacket(name,kind)
{
    this->code_var = 0;
}

SyncCode::SyncCode(const SyncCode& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

SyncCode::~SyncCode()
{
}

SyncCode& SyncCode::operator=(const SyncCode& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->code_var = other.code_var;
    return *this;
}

void SyncCode::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->code_var);
}

void SyncCode::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->code_var);
}

char SyncCode::getCode() const
{
    return code_var;
}

void SyncCode::setCode(char code_var)
{
    this->code_var = code_var;
}

class SyncCodeDescriptor : public cClassDescriptor
{
  public:
    SyncCodeDescriptor();
    virtual ~SyncCodeDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(SyncCodeDescriptor);

SyncCodeDescriptor::SyncCodeDescriptor() : cClassDescriptor("SyncCode", "cPacket")
{
}

SyncCodeDescriptor::~SyncCodeDescriptor()
{
}

bool SyncCodeDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SyncCode *>(obj)!=NULL;
}

const char *SyncCodeDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SyncCodeDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SyncCodeDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *SyncCodeDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "code",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SyncCodeDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "code")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SyncCodeDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "char",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SyncCodeDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int SyncCodeDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SyncCode *pp = (SyncCode *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SyncCodeDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SyncCode *pp = (SyncCode *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCode());
        default: return "";
    }
}

bool SyncCodeDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SyncCode *pp = (SyncCode *)object; (void)pp;
    switch (field) {
        case 0: pp->setCode(string2long(value)); return true;
        default: return false;
    }
}

const char *SyncCodeDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *SyncCodeDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SyncCode *pp = (SyncCode *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(EtherFrameWithLLID);

EtherFrameWithLLID::EtherFrameWithLLID(const char *name, int kind) : cPacket(name,kind)
{
    this->llid_var = 0;
}

EtherFrameWithLLID::EtherFrameWithLLID(const EtherFrameWithLLID& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

EtherFrameWithLLID::~EtherFrameWithLLID()
{
}

EtherFrameWithLLID& EtherFrameWithLLID::operator=(const EtherFrameWithLLID& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->llid_var = other.llid_var;
    return *this;
}

void EtherFrameWithLLID::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->llid_var);
}

void EtherFrameWithLLID::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->llid_var);
}

uint16_t EtherFrameWithLLID::getLlid() const
{
    return llid_var;
}

void EtherFrameWithLLID::setLlid(uint16_t llid_var)
{
    this->llid_var = llid_var;
}

class EtherFrameWithLLIDDescriptor : public cClassDescriptor
{
  public:
    EtherFrameWithLLIDDescriptor();
    virtual ~EtherFrameWithLLIDDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(EtherFrameWithLLIDDescriptor);

EtherFrameWithLLIDDescriptor::EtherFrameWithLLIDDescriptor() : cClassDescriptor("EtherFrameWithLLID", "cPacket")
{
}

EtherFrameWithLLIDDescriptor::~EtherFrameWithLLIDDescriptor()
{
}

bool EtherFrameWithLLIDDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<EtherFrameWithLLID *>(obj)!=NULL;
}

const char *EtherFrameWithLLIDDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int EtherFrameWithLLIDDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int EtherFrameWithLLIDDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *EtherFrameWithLLIDDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "llid",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int EtherFrameWithLLIDDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='l' && strcmp(fieldName, "llid")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *EtherFrameWithLLIDDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint16_t",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *EtherFrameWithLLIDDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int EtherFrameWithLLIDDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    EtherFrameWithLLID *pp = (EtherFrameWithLLID *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string EtherFrameWithLLIDDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    EtherFrameWithLLID *pp = (EtherFrameWithLLID *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getLlid());
        default: return "";
    }
}

bool EtherFrameWithLLIDDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    EtherFrameWithLLID *pp = (EtherFrameWithLLID *)object; (void)pp;
    switch (field) {
        case 0: pp->setLlid(string2ulong(value)); return true;
        default: return false;
    }
}

const char *EtherFrameWithLLIDDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *EtherFrameWithLLIDDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    EtherFrameWithLLID *pp = (EtherFrameWithLLID *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

MPCP::MPCP() : EthernetIIFrame()
{
    this->opcode_var = 0;
    this->ts_var = 0;
}

MPCP::MPCP(const MPCP& other) : EthernetIIFrame()
{
    operator=(other);
}

MPCP::~MPCP()
{
}

MPCP& MPCP::operator=(const MPCP& other)
{
    if (this==&other) return *this;
    EthernetIIFrame::operator=(other);
    this->opcode_var = other.opcode_var;
    this->ts_var = other.ts_var;
    return *this;
}

void MPCP::parsimPack(cCommBuffer *b)
{
    doPacking(b,(EthernetIIFrame&)*this);
    doPacking(b,this->opcode_var);
    doPacking(b,this->ts_var);
}

void MPCP::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(EthernetIIFrame&)*this);
    doUnpacking(b,this->opcode_var);
    doUnpacking(b,this->ts_var);
}

uint16_t MPCP::getOpcode() const
{
    return opcode_var;
}

void MPCP::setOpcode(uint16_t opcode_var)
{
    this->opcode_var = opcode_var;
}

uint32_t MPCP::getTs() const
{
    return ts_var;
}

void MPCP::setTs(uint32_t ts_var)
{
    this->ts_var = ts_var;
}

class MPCPDescriptor : public cClassDescriptor
{
  public:
    MPCPDescriptor();
    virtual ~MPCPDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(MPCPDescriptor);

MPCPDescriptor::MPCPDescriptor() : cClassDescriptor("MPCP", "EthernetIIFrame")
{
}

MPCPDescriptor::~MPCPDescriptor()
{
}

bool MPCPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MPCP *>(obj)!=NULL;
}

const char *MPCPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MPCPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int MPCPDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *MPCPDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "opcode",
        "ts",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int MPCPDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "opcode")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "ts")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MPCPDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint16_t",
        "uint32_t",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *MPCPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int MPCPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MPCP *pp = (MPCP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MPCPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MPCP *pp = (MPCP *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getOpcode());
        case 1: return ulong2string(pp->getTs());
        default: return "";
    }
}

bool MPCPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MPCP *pp = (MPCP *)object; (void)pp;
    switch (field) {
        case 0: pp->setOpcode(string2ulong(value)); return true;
        case 1: pp->setTs(string2ulong(value)); return true;
        default: return false;
    }
}

const char *MPCPDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *MPCPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MPCP *pp = (MPCP *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

MPCPGate::MPCPGate() : MPCP()
{
    this->listLen_var = 0;
    startTime_arraysize = 0;
    this->startTime_var = 0;
    duration_arraysize = 0;
    this->duration_var = 0;
    this->slotsNum_var = 0;
    this->slotTime_var = 0;
}

MPCPGate::MPCPGate(const MPCPGate& other) : MPCP()
{
    startTime_arraysize = 0;
    this->startTime_var = 0;
    duration_arraysize = 0;
    this->duration_var = 0;
    operator=(other);
}

MPCPGate::~MPCPGate()
{
    delete [] startTime_var;
    delete [] duration_var;
}

MPCPGate& MPCPGate::operator=(const MPCPGate& other)
{
    if (this==&other) return *this;
    MPCP::operator=(other);
    this->listLen_var = other.listLen_var;
    delete [] this->startTime_var;
    this->startTime_var = (other.startTime_arraysize==0) ? NULL : new uint32_t[other.startTime_arraysize];
    startTime_arraysize = other.startTime_arraysize;
    for (unsigned int i=0; i<startTime_arraysize; i++)
        this->startTime_var[i] = other.startTime_var[i];
    delete [] this->duration_var;
    this->duration_var = (other.duration_arraysize==0) ? NULL : new uint32_t[other.duration_arraysize];
    duration_arraysize = other.duration_arraysize;
    for (unsigned int i=0; i<duration_arraysize; i++)
        this->duration_var[i] = other.duration_var[i];
    this->slotsNum_var = other.slotsNum_var;
    this->slotTime_var = other.slotTime_var;
    return *this;
}

void MPCPGate::parsimPack(cCommBuffer *b)
{
    doPacking(b,(MPCP&)*this);
    doPacking(b,this->listLen_var);
    b->pack(startTime_arraysize);
    doPacking(b,this->startTime_var,startTime_arraysize);
    b->pack(duration_arraysize);
    doPacking(b,this->duration_var,duration_arraysize);
    doPacking(b,this->slotsNum_var);
    doPacking(b,this->slotTime_var);
}

void MPCPGate::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(MPCP&)*this);
    doUnpacking(b,this->listLen_var);
    delete [] this->startTime_var;
    b->unpack(startTime_arraysize);
    if (startTime_arraysize==0) {
        this->startTime_var = 0;
    } else {
        this->startTime_var = new uint32_t[startTime_arraysize];
        doUnpacking(b,this->startTime_var,startTime_arraysize);
    }
    delete [] this->duration_var;
    b->unpack(duration_arraysize);
    if (duration_arraysize==0) {
        this->duration_var = 0;
    } else {
        this->duration_var = new uint32_t[duration_arraysize];
        doUnpacking(b,this->duration_var,duration_arraysize);
    }
    doUnpacking(b,this->slotsNum_var);
    doUnpacking(b,this->slotTime_var);
}

uint8_t MPCPGate::getListLen() const
{
    return listLen_var;
}

void MPCPGate::setListLen(uint8_t listLen_var)
{
    this->listLen_var = listLen_var;
}

void MPCPGate::setStartTimeArraySize(unsigned int size)
{
    uint32_t *startTime_var2 = (size==0) ? NULL : new uint32_t[size];
    unsigned int sz = startTime_arraysize < size ? startTime_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        startTime_var2[i] = this->startTime_var[i];
    for (unsigned int i=sz; i<size; i++)
        startTime_var2[i] = 0;
    startTime_arraysize = size;
    delete [] this->startTime_var;
    this->startTime_var = startTime_var2;
}

unsigned int MPCPGate::getStartTimeArraySize() const
{
    return startTime_arraysize;
}

uint32_t MPCPGate::getStartTime(unsigned int k) const
{
    if (k>=startTime_arraysize) throw cRuntimeError("Array of size %d indexed by %d", startTime_arraysize, k);
    return startTime_var[k];
}

void MPCPGate::setStartTime(unsigned int k, uint32_t startTime_var)
{
    if (k>=startTime_arraysize) throw cRuntimeError("Array of size %d indexed by %d", startTime_arraysize, k);
    this->startTime_var[k]=startTime_var;
}

void MPCPGate::setDurationArraySize(unsigned int size)
{
    uint32_t *duration_var2 = (size==0) ? NULL : new uint32_t[size];
    unsigned int sz = duration_arraysize < size ? duration_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        duration_var2[i] = this->duration_var[i];
    for (unsigned int i=sz; i<size; i++)
        duration_var2[i] = 0;
    duration_arraysize = size;
    delete [] this->duration_var;
    this->duration_var = duration_var2;
}

unsigned int MPCPGate::getDurationArraySize() const
{
    return duration_arraysize;
}

uint32_t MPCPGate::getDuration(unsigned int k) const
{
    if (k>=duration_arraysize) throw cRuntimeError("Array of size %d indexed by %d", duration_arraysize, k);
    return duration_var[k];
}

void MPCPGate::setDuration(unsigned int k, uint32_t duration_var)
{
    if (k>=duration_arraysize) throw cRuntimeError("Array of size %d indexed by %d", duration_arraysize, k);
    this->duration_var[k]=duration_var;
}

uint16_t MPCPGate::getSlotsNum() const
{
    return slotsNum_var;
}

void MPCPGate::setSlotsNum(uint16_t slotsNum_var)
{
    this->slotsNum_var = slotsNum_var;
}

uint16_t MPCPGate::getSlotTime() const
{
    return slotTime_var;
}

void MPCPGate::setSlotTime(uint16_t slotTime_var)
{
    this->slotTime_var = slotTime_var;
}

class MPCPGateDescriptor : public cClassDescriptor
{
  public:
    MPCPGateDescriptor();
    virtual ~MPCPGateDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(MPCPGateDescriptor);

MPCPGateDescriptor::MPCPGateDescriptor() : cClassDescriptor("MPCPGate", "MPCP")
{
}

MPCPGateDescriptor::~MPCPGateDescriptor()
{
}

bool MPCPGateDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MPCPGate *>(obj)!=NULL;
}

const char *MPCPGateDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MPCPGateDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int MPCPGateDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *MPCPGateDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "listLen",
        "startTime",
        "duration",
        "slotsNum",
        "slotTime",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int MPCPGateDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='l' && strcmp(fieldName, "listLen")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "startTime")==0) return base+1;
    if (fieldName[0]=='d' && strcmp(fieldName, "duration")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "slotsNum")==0) return base+3;
    if (fieldName[0]=='s' && strcmp(fieldName, "slotTime")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MPCPGateDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint8_t",
        "uint32_t",
        "uint32_t",
        "uint16_t",
        "uint16_t",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *MPCPGateDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int MPCPGateDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MPCPGate *pp = (MPCPGate *)object; (void)pp;
    switch (field) {
        case 1: return pp->getStartTimeArraySize();
        case 2: return pp->getDurationArraySize();
        default: return 0;
    }
}

std::string MPCPGateDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MPCPGate *pp = (MPCPGate *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getListLen());
        case 1: return ulong2string(pp->getStartTime(i));
        case 2: return ulong2string(pp->getDuration(i));
        case 3: return ulong2string(pp->getSlotsNum());
        case 4: return ulong2string(pp->getSlotTime());
        default: return "";
    }
}

bool MPCPGateDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MPCPGate *pp = (MPCPGate *)object; (void)pp;
    switch (field) {
        case 0: pp->setListLen(string2ulong(value)); return true;
        case 1: pp->setStartTime(i,string2ulong(value)); return true;
        case 2: pp->setDuration(i,string2ulong(value)); return true;
        case 3: pp->setSlotsNum(string2ulong(value)); return true;
        case 4: pp->setSlotTime(string2ulong(value)); return true;
        default: return false;
    }
}

const char *MPCPGateDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<5) ? fieldStructNames[field] : NULL;
}

void *MPCPGateDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MPCPGate *pp = (MPCPGate *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

MPCPReport::MPCPReport() : MPCP()
{
    this->bitMap_var = 0;
    qInfo_arraysize = 0;
    this->qInfo_var = 0;
}

MPCPReport::MPCPReport(const MPCPReport& other) : MPCP()
{
    qInfo_arraysize = 0;
    this->qInfo_var = 0;
    operator=(other);
}

MPCPReport::~MPCPReport()
{
    delete [] qInfo_var;
}

MPCPReport& MPCPReport::operator=(const MPCPReport& other)
{
    if (this==&other) return *this;
    MPCP::operator=(other);
    this->bitMap_var = other.bitMap_var;
    delete [] this->qInfo_var;
    this->qInfo_var = (other.qInfo_arraysize==0) ? NULL : new uint32_t[other.qInfo_arraysize];
    qInfo_arraysize = other.qInfo_arraysize;
    for (unsigned int i=0; i<qInfo_arraysize; i++)
        this->qInfo_var[i] = other.qInfo_var[i];
    return *this;
}

void MPCPReport::parsimPack(cCommBuffer *b)
{
    doPacking(b,(MPCP&)*this);
    doPacking(b,this->bitMap_var);
    b->pack(qInfo_arraysize);
    doPacking(b,this->qInfo_var,qInfo_arraysize);
}

void MPCPReport::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(MPCP&)*this);
    doUnpacking(b,this->bitMap_var);
    delete [] this->qInfo_var;
    b->unpack(qInfo_arraysize);
    if (qInfo_arraysize==0) {
        this->qInfo_var = 0;
    } else {
        this->qInfo_var = new uint32_t[qInfo_arraysize];
        doUnpacking(b,this->qInfo_var,qInfo_arraysize);
    }
}

uint8_t MPCPReport::getBitMap() const
{
    return bitMap_var;
}

void MPCPReport::setBitMap(uint8_t bitMap_var)
{
    this->bitMap_var = bitMap_var;
}

void MPCPReport::setQInfoArraySize(unsigned int size)
{
    uint32_t *qInfo_var2 = (size==0) ? NULL : new uint32_t[size];
    unsigned int sz = qInfo_arraysize < size ? qInfo_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        qInfo_var2[i] = this->qInfo_var[i];
    for (unsigned int i=sz; i<size; i++)
        qInfo_var2[i] = 0;
    qInfo_arraysize = size;
    delete [] this->qInfo_var;
    this->qInfo_var = qInfo_var2;
}

unsigned int MPCPReport::getQInfoArraySize() const
{
    return qInfo_arraysize;
}

uint32_t MPCPReport::getQInfo(unsigned int k) const
{
    if (k>=qInfo_arraysize) throw cRuntimeError("Array of size %d indexed by %d", qInfo_arraysize, k);
    return qInfo_var[k];
}

void MPCPReport::setQInfo(unsigned int k, uint32_t qInfo_var)
{
    if (k>=qInfo_arraysize) throw cRuntimeError("Array of size %d indexed by %d", qInfo_arraysize, k);
    this->qInfo_var[k]=qInfo_var;
}

class MPCPReportDescriptor : public cClassDescriptor
{
  public:
    MPCPReportDescriptor();
    virtual ~MPCPReportDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(MPCPReportDescriptor);

MPCPReportDescriptor::MPCPReportDescriptor() : cClassDescriptor("MPCPReport", "MPCP")
{
}

MPCPReportDescriptor::~MPCPReportDescriptor()
{
}

bool MPCPReportDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MPCPReport *>(obj)!=NULL;
}

const char *MPCPReportDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MPCPReportDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int MPCPReportDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *MPCPReportDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "bitMap",
        "qInfo",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int MPCPReportDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bitMap")==0) return base+0;
    if (fieldName[0]=='q' && strcmp(fieldName, "qInfo")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MPCPReportDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint8_t",
        "uint32_t",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *MPCPReportDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int MPCPReportDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MPCPReport *pp = (MPCPReport *)object; (void)pp;
    switch (field) {
        case 1: return pp->getQInfoArraySize();
        default: return 0;
    }
}

std::string MPCPReportDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MPCPReport *pp = (MPCPReport *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getBitMap());
        case 1: return ulong2string(pp->getQInfo(i));
        default: return "";
    }
}

bool MPCPReportDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MPCPReport *pp = (MPCPReport *)object; (void)pp;
    switch (field) {
        case 0: pp->setBitMap(string2ulong(value)); return true;
        case 1: pp->setQInfo(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *MPCPReportDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *MPCPReportDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MPCPReport *pp = (MPCPReport *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

MPCPRegReq::MPCPRegReq() : MPCP()
{
    this->ptpNumReq_var = 0;
}

MPCPRegReq::MPCPRegReq(const MPCPRegReq& other) : MPCP()
{
    operator=(other);
}

MPCPRegReq::~MPCPRegReq()
{
}

MPCPRegReq& MPCPRegReq::operator=(const MPCPRegReq& other)
{
    if (this==&other) return *this;
    MPCP::operator=(other);
    this->ptpNumReq_var = other.ptpNumReq_var;
    return *this;
}

void MPCPRegReq::parsimPack(cCommBuffer *b)
{
    doPacking(b,(MPCP&)*this);
    doPacking(b,this->ptpNumReq_var);
}

void MPCPRegReq::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(MPCP&)*this);
    doUnpacking(b,this->ptpNumReq_var);
}

uint8_t MPCPRegReq::getPtpNumReq() const
{
    return ptpNumReq_var;
}

void MPCPRegReq::setPtpNumReq(uint8_t ptpNumReq_var)
{
    this->ptpNumReq_var = ptpNumReq_var;
}

class MPCPRegReqDescriptor : public cClassDescriptor
{
  public:
    MPCPRegReqDescriptor();
    virtual ~MPCPRegReqDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(MPCPRegReqDescriptor);

MPCPRegReqDescriptor::MPCPRegReqDescriptor() : cClassDescriptor("MPCPRegReq", "MPCP")
{
}

MPCPRegReqDescriptor::~MPCPRegReqDescriptor()
{
}

bool MPCPRegReqDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MPCPRegReq *>(obj)!=NULL;
}

const char *MPCPRegReqDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MPCPRegReqDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int MPCPRegReqDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *MPCPRegReqDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "ptpNumReq",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int MPCPRegReqDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "ptpNumReq")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MPCPRegReqDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint8_t",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *MPCPRegReqDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int MPCPRegReqDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MPCPRegReq *pp = (MPCPRegReq *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MPCPRegReqDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MPCPRegReq *pp = (MPCPRegReq *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPtpNumReq());
        default: return "";
    }
}

bool MPCPRegReqDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MPCPRegReq *pp = (MPCPRegReq *)object; (void)pp;
    switch (field) {
        case 0: pp->setPtpNumReq(string2ulong(value)); return true;
        default: return false;
    }
}

const char *MPCPRegReqDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *MPCPRegReqDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MPCPRegReq *pp = (MPCPRegReq *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

MPCPRegister::MPCPRegister() : MPCP()
{
    this->ptpNumReg_var = 0;
    LLIDs_arraysize = 0;
    this->LLIDs_var = 0;
}

MPCPRegister::MPCPRegister(const MPCPRegister& other) : MPCP()
{
    LLIDs_arraysize = 0;
    this->LLIDs_var = 0;
    operator=(other);
}

MPCPRegister::~MPCPRegister()
{
    delete [] LLIDs_var;
}

MPCPRegister& MPCPRegister::operator=(const MPCPRegister& other)
{
    if (this==&other) return *this;
    MPCP::operator=(other);
    this->ptpNumReg_var = other.ptpNumReg_var;
    delete [] this->LLIDs_var;
    this->LLIDs_var = (other.LLIDs_arraysize==0) ? NULL : new uint16_t[other.LLIDs_arraysize];
    LLIDs_arraysize = other.LLIDs_arraysize;
    for (unsigned int i=0; i<LLIDs_arraysize; i++)
        this->LLIDs_var[i] = other.LLIDs_var[i];
    return *this;
}

void MPCPRegister::parsimPack(cCommBuffer *b)
{
    doPacking(b,(MPCP&)*this);
    doPacking(b,this->ptpNumReg_var);
    b->pack(LLIDs_arraysize);
    doPacking(b,this->LLIDs_var,LLIDs_arraysize);
}

void MPCPRegister::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(MPCP&)*this);
    doUnpacking(b,this->ptpNumReg_var);
    delete [] this->LLIDs_var;
    b->unpack(LLIDs_arraysize);
    if (LLIDs_arraysize==0) {
        this->LLIDs_var = 0;
    } else {
        this->LLIDs_var = new uint16_t[LLIDs_arraysize];
        doUnpacking(b,this->LLIDs_var,LLIDs_arraysize);
    }
}

uint8_t MPCPRegister::getPtpNumReg() const
{
    return ptpNumReg_var;
}

void MPCPRegister::setPtpNumReg(uint8_t ptpNumReg_var)
{
    this->ptpNumReg_var = ptpNumReg_var;
}

void MPCPRegister::setLLIDsArraySize(unsigned int size)
{
    uint16_t *LLIDs_var2 = (size==0) ? NULL : new uint16_t[size];
    unsigned int sz = LLIDs_arraysize < size ? LLIDs_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        LLIDs_var2[i] = this->LLIDs_var[i];
    for (unsigned int i=sz; i<size; i++)
        LLIDs_var2[i] = 0;
    LLIDs_arraysize = size;
    delete [] this->LLIDs_var;
    this->LLIDs_var = LLIDs_var2;
}

unsigned int MPCPRegister::getLLIDsArraySize() const
{
    return LLIDs_arraysize;
}

uint16_t MPCPRegister::getLLIDs(unsigned int k) const
{
    if (k>=LLIDs_arraysize) throw cRuntimeError("Array of size %d indexed by %d", LLIDs_arraysize, k);
    return LLIDs_var[k];
}

void MPCPRegister::setLLIDs(unsigned int k, uint16_t LLIDs_var)
{
    if (k>=LLIDs_arraysize) throw cRuntimeError("Array of size %d indexed by %d", LLIDs_arraysize, k);
    this->LLIDs_var[k]=LLIDs_var;
}

class MPCPRegisterDescriptor : public cClassDescriptor
{
  public:
    MPCPRegisterDescriptor();
    virtual ~MPCPRegisterDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(MPCPRegisterDescriptor);

MPCPRegisterDescriptor::MPCPRegisterDescriptor() : cClassDescriptor("MPCPRegister", "MPCP")
{
}

MPCPRegisterDescriptor::~MPCPRegisterDescriptor()
{
}

bool MPCPRegisterDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MPCPRegister *>(obj)!=NULL;
}

const char *MPCPRegisterDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MPCPRegisterDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int MPCPRegisterDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *MPCPRegisterDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "ptpNumReg",
        "LLIDs",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int MPCPRegisterDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "ptpNumReg")==0) return base+0;
    if (fieldName[0]=='L' && strcmp(fieldName, "LLIDs")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MPCPRegisterDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint8_t",
        "uint16_t",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *MPCPRegisterDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int MPCPRegisterDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MPCPRegister *pp = (MPCPRegister *)object; (void)pp;
    switch (field) {
        case 1: return pp->getLLIDsArraySize();
        default: return 0;
    }
}

std::string MPCPRegisterDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MPCPRegister *pp = (MPCPRegister *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPtpNumReg());
        case 1: return ulong2string(pp->getLLIDs(i));
        default: return "";
    }
}

bool MPCPRegisterDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MPCPRegister *pp = (MPCPRegister *)object; (void)pp;
    switch (field) {
        case 0: pp->setPtpNumReg(string2ulong(value)); return true;
        case 1: pp->setLLIDs(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *MPCPRegisterDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *MPCPRegisterDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MPCPRegister *pp = (MPCPRegister *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

MPCPRegAck::MPCPRegAck() : MPCP()
{
}

MPCPRegAck::MPCPRegAck(const MPCPRegAck& other) : MPCP()
{
    operator=(other);
}

MPCPRegAck::~MPCPRegAck()
{
}

MPCPRegAck& MPCPRegAck::operator=(const MPCPRegAck& other)
{
    if (this==&other) return *this;
    MPCP::operator=(other);
    return *this;
}

void MPCPRegAck::parsimPack(cCommBuffer *b)
{
    doPacking(b,(MPCP&)*this);
}

void MPCPRegAck::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(MPCP&)*this);
}

class MPCPRegAckDescriptor : public cClassDescriptor
{
  public:
    MPCPRegAckDescriptor();
    virtual ~MPCPRegAckDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(MPCPRegAckDescriptor);

MPCPRegAckDescriptor::MPCPRegAckDescriptor() : cClassDescriptor("MPCPRegAck", "MPCP")
{
}

MPCPRegAckDescriptor::~MPCPRegAckDescriptor()
{
}

bool MPCPRegAckDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MPCPRegAck *>(obj)!=NULL;
}

const char *MPCPRegAckDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MPCPRegAckDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int MPCPRegAckDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *MPCPRegAckDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int MPCPRegAckDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MPCPRegAckDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *MPCPRegAckDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int MPCPRegAckDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MPCPRegAck *pp = (MPCPRegAck *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MPCPRegAckDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MPCPRegAck *pp = (MPCPRegAck *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool MPCPRegAckDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MPCPRegAck *pp = (MPCPRegAck *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *MPCPRegAckDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *MPCPRegAckDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MPCPRegAck *pp = (MPCPRegAck *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


