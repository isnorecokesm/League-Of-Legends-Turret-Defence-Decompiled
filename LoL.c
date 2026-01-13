typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef int    wchar_t;
typedef unsigned short    word;
typedef struct LoL LoL, *PLoL;

struct LoL { // PlaceHolder Class Structure
};

typedef struct thread_state_hdr thread_state_hdr, *Pthread_state_hdr;

struct thread_state_hdr {
    dword flavor;
    dword count;
};

typedef struct Level Level, *PLevel;

struct Level { // PlaceHolder Class Structure
};

typedef dword Cache;

typedef dword Implementation;

typedef struct cfstringStruct cfstringStruct, *PcfstringStruct;

struct cfstringStruct {
    dword field0_0x0;
    dword field1_0x4;
    pointer field2_0x8;
    int field3_0xc;
};

typedef int __int32_t;

typedef longlong __int64_t;

typedef __int64_t __darwin_off_t;

typedef __int32_t __darwin_suseconds_t;

typedef long __darwin_time_t;

typedef ulong __darwin_size_t;

typedef struct __sFILEX __sFILEX, *P__sFILEX;

struct __sFILEX {
};

typedef __darwin_off_t fpos_t;

typedef struct __sbuf __sbuf, *P__sbuf;

struct __sbuf {
    uchar *_base;
    int _size;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct __sFILE FILE;

struct __sFILE {
    uchar *_p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void *_cookie;
    int (*_close)(void *);
    int (*_read)(void *, char *, int);
    fpos_t (*_seek)(void *, fpos_t, int);
    int (*_write)(void *, char *, int);
    struct __sbuf _ub;
    struct __sFILEX *_extra;
    int _ur;
    uchar _ubuf[3];
    uchar _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    fpos_t _offset;
};

typedef struct timeval timeval, *Ptimeval;

struct timeval {
    __darwin_time_t tv_sec;
    __darwin_suseconds_t tv_usec;
};

typedef struct method_list_t method_list_t, *Pmethod_list_t;

struct method_list_t {
    dword entsizeAndFlags;
    dword count;
};

typedef struct ivar_list_t ivar_list_t, *Pivar_list_t;

struct ivar_list_t {
    dword entsize;
    dword count;
};

typedef struct GUIComponent GUIComponent, *PGUIComponent;


// WARNING! conflicting data type names: /_objc2_/int - /int


// WARNING! conflicting data type names: /_objc2_/bool - /bool

typedef dword ID;

struct GUIComponent {
    int field0_0x0;
    bool field1_0x4;
    bool field2_0x8;
    bool field3_0xc;
    unsigned short field4_0x10;
    ID field5_0x12;
    ID field6_0x16;
    ID field7_0x1a;
    ID field8_0x1e;
    ID field9_0x22;
    int field10_0x26;
};

typedef struct method_list_t_19_ method_list_t_19_, *Pmethod_list_t_19_;

typedef struct method_t method_t, *Pmethod_t;

struct method_t {
    string *name;
    string *types;
    void *imp;
};

struct method_list_t_19_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
    struct method_t method16;
    struct method_t method17;
    struct method_t method18;
};

typedef struct class_t class_t, *Pclass_t;

typedef struct class_rw_t class_rw_t, *Pclass_rw_t;

typedef struct protocol_list_t protocol_list_t, *Pprotocol_list_t;

typedef struct objc_property_list objc_property_list, *Pobjc_property_list;

struct class_rw_t {
    dword flags;
    dword instanceStart;
    dword instanceSize;
    dword reserved;
    char *name;
    struct method_list_t *baseMethods;
    struct protocol_list_t *baseProtocols;
    struct ivar_list_t *ivars;
    dword weakIvarLayout;
    struct objc_property_list *baseProperties;
};

struct objc_property_list {
    dword entsize;
    dword count;
};

struct class_t {
    struct class_t *isa;
    struct class_t *superclass;
    Cache cache;
    Implementation vtable;
    struct class_rw_t *data;
};

struct protocol_list_t {
    dword count;
};

typedef struct CGPoint CGPoint, *PCGPoint;

struct CGPoint {
    float field0_0x0;
    float field1_0x4;
};

typedef struct protocol_t protocol_t, *Pprotocol_t;

struct protocol_t {
    dword isa;
    string *name;
    struct protocol_list_t *protocols;
    struct method_list_t *instanceMethods;
    struct method_list_t *classMethods;
    struct method_list_t *optionalInstanceMethods;
    struct method_list_t *optionalClassMethods;
    struct objc_property_list *instanceProperties;
    dword unknown0;
    dword unknown1;
};

typedef struct ivar_t ivar_t, *Pivar_t;

struct ivar_t {
    dword *offset;
    string *name;
    string *type;
    dword alignment;
    dword size;
};

typedef dword CLASS;

typedef struct CGRect CGRect, *PCGRect;

typedef struct CGSize CGSize, *PCGSize;

struct CGSize {
    float field0_0x0;
    float field1_0x4;
};

struct CGRect {
    struct CGPoint field0_0x0;
    struct CGSize field1_0x8;
};

typedef struct method_list_t_1_ method_list_t_1_, *Pmethod_list_t_1_;

struct method_list_t_1_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
};

typedef struct protocol_list_t_1_ protocol_list_t_1_, *Pprotocol_list_t_1_;

struct protocol_list_t_1_ {
    dword count;
    struct protocol_t *protocol0;
};

typedef struct objc_property_list_4_ objc_property_list_4_, *Pobjc_property_list_4_;

typedef struct objc_property objc_property, *Pobjc_property;

struct objc_property {
    char *name;
    char *name;
};

struct objc_property_list_4_ {
    dword entsize;
    dword count;
    struct objc_property property0;
    struct objc_property property1;
    struct objc_property property2;
    struct objc_property property3;
};

typedef struct method_list_t_5_ method_list_t_5_, *Pmethod_list_t_5_;

struct method_list_t_5_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
};

typedef struct method_list_t_3_ method_list_t_3_, *Pmethod_list_t_3_;

struct method_list_t_3_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
};

typedef struct ivar_list_t_3_ ivar_list_t_3_, *Pivar_list_t_3_;

struct ivar_list_t_3_ {
    dword entsize;
    dword count;
    struct ivar_t var0;
    struct ivar_t var1;
    struct ivar_t var2;
};

typedef struct method_list_t_7_ method_list_t_7_, *Pmethod_list_t_7_;

struct method_list_t_7_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
};


// WARNING! conflicting data type names: /_objc2_/short - /short

typedef struct method_list_t_16_ method_list_t_16_, *Pmethod_list_t_16_;

struct method_list_t_16_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
};

typedef struct _NSRange _NSRange, *P_NSRange;

struct _NSRange {
    unsigned int field0_0x0;
    unsigned int field1_0x4;
};

typedef struct method_list_t_4_ method_list_t_4_, *Pmethod_list_t_4_;

struct method_list_t_4_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
};

typedef struct ivar_list_t_2_ ivar_list_t_2_, *Pivar_list_t_2_;

struct ivar_list_t_2_ {
    dword entsize;
    dword count;
    struct ivar_t var0;
    struct ivar_t var1;
};

typedef dword SEL;

typedef struct ivar_list_t_8_ ivar_list_t_8_, *Pivar_list_t_8_;

struct ivar_list_t_8_ {
    dword entsize;
    dword count;
    struct ivar_t var0;
    struct ivar_t var1;
    struct ivar_t var2;
    struct ivar_t var3;
    struct ivar_t var4;
    struct ivar_t var5;
    struct ivar_t var6;
    struct ivar_t var7;
};

typedef struct objc_image_info objc_image_info, *Pobjc_image_info;

struct objc_image_info {
    dword version;
    dword flags;
};

typedef __darwin_size_t size_t;

typedef struct UIView UIView, *PUIView;

struct UIView { // PlaceHolder Structure
};

typedef struct Tower Tower, *PTower;

struct Tower { // PlaceHolder Structure
};

typedef dword SoundDesc;

typedef struct Creep Creep, *PCreep;

struct Creep { // PlaceHolder Structure
};

typedef dword CreepType;

typedef struct Bolt Bolt, *PBolt;

struct Bolt { // PlaceHolder Structure
};

typedef struct GameDelegate GameDelegate, *PGameDelegate;

struct GameDelegate { // PlaceHolder Structure
};

typedef struct ImageView ImageView, *PImageView;

struct ImageView { // PlaceHolder Structure
};

typedef struct Color Color, *PColor;

struct Color { // PlaceHolder Structure
};

typedef struct EAGLView EAGLView, *PEAGLView;

struct EAGLView { // PlaceHolder Structure
};

typedef struct UIEvent UIEvent, *PUIEvent;

struct UIEvent { // PlaceHolder Structure
};

typedef dword DeclAsset;

typedef dword TowerType;

typedef struct TowerInfo TowerInfo, *PTowerInfo;

struct TowerInfo { // PlaceHolder Structure
};

typedef dword GameState;

typedef struct GridCellInfo GridCellInfo, *PGridCellInfo;

struct GridCellInfo { // PlaceHolder Structure
};

typedef struct NSSet NSSet, *PNSSet;

struct NSSet { // PlaceHolder Structure
};

typedef struct Sprite Sprite, *PSprite;

struct Sprite { // PlaceHolder Structure
};

typedef struct XMLNode XMLNode, *PXMLNode;

struct XMLNode { // PlaceHolder Structure
};

typedef struct Touch Touch, *PTouch;

struct Touch { // PlaceHolder Structure
};

typedef struct FlushableHeap FlushableHeap, *PFlushableHeap;

struct FlushableHeap { // PlaceHolder Structure
};

typedef struct Texture Texture, *PTexture;

struct Texture { // PlaceHolder Structure
};

typedef struct Heap Heap, *PHeap;

struct Heap { // PlaceHolder Structure
};

typedef struct XMLDocument XMLDocument, *PXMLDocument;

struct XMLDocument { // PlaceHolder Structure
};

typedef struct StackHeap StackHeap, *PStackHeap;

struct StackHeap { // PlaceHolder Structure
};

typedef dword InputEvent;

typedef struct File File, *PFile;

struct File { // PlaceHolder Structure
};

typedef struct Vector2 Vector2, *PVector2;

struct Vector2 { // PlaceHolder Structure
};

typedef struct CS_CodeDirectory CS_CodeDirectory, *PCS_CodeDirectory;

struct CS_CodeDirectory {
    dword magic; // magic number (CSMAGIC_CODEDIRECTORY)
    dword length; // total length of CodeDirectory blob
    dword version; // compatibility version
    dword flags; // setup and mode flags
    dword hashOffset; // offset of hash slot element at index zero
    dword identOffset; // offset of identifier string
    dword nSpecialSlots; // number of special hash slots
    dword nCodeSlots; // number of ordinary (code) hash slots
    dword codeLimit; // limit to main image signature range
    byte hashSize; // size of each hash in bytes
    byte hashType; // type of hash (cdHashType* constants)
    byte platform; // platform identifier; zero if not platform binary
    byte pageSize; // log2(page size in bytes); 0 => infinite
    dword spare2; // unused (must be zero)
    dword scatterOffset; // offset of optional scatter vector
};

typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef struct lc_str lc_str, *Plc_str;

struct lc_str {
    dword offset;
};

typedef struct thread_command thread_command, *Pthread_command;

typedef struct ARM_THREAD_STATE ARM_THREAD_STATE, *PARM_THREAD_STATE;

struct ARM_THREAD_STATE {
    dword r0;
    dword r1;
    dword r2;
    dword r3;
    dword r4;
    dword r5;
    dword r6;
    dword r7;
    dword r8;
    dword r9;
    dword r10;
    dword r11;
    dword r12;
    dword sp;
    dword lr;
    dword pc;
    dword cpsr;
};

struct thread_command {
    dword cmd;
    dword cmdsize;
    struct thread_state_hdr threadStateHeader;
    struct ARM_THREAD_STATE threadState;
};

typedef struct CS_BlobIndex CS_BlobIndex, *PCS_BlobIndex;

struct CS_BlobIndex {
    dword type; // type of entry
    dword offset; // offset of entry
};

typedef struct section section, *Psection;

struct section {
    char sectname[16];
    char segname[16];
    dword addr;
    dword size;
    dword offset;
    dword align;
    dword reloff;
    dword nrelocs;
    dword flags;
    dword reserved1;
    dword reserved2;
};

typedef struct encryption_info_command encryption_info_command, *Pencryption_info_command;

struct encryption_info_command {
    dword cmd;
    dword cmdsize;
    dword cryptoff;
    dword cryptsize;
    dword cryptid;
};

typedef struct nlist nlist, *Pnlist;

struct nlist {
    dword n_strx;
    byte n_type;
    byte n_sect;
    word n_desc;
    dword n_value;
};

typedef struct segment_command segment_command, *Psegment_command;

struct segment_command {
    dword cmd;
    dword cmdsize;
    char segname[16];
    dword vmaddr;
    dword vmsize;
    dword fileoff;
    dword filesize;
    dword maxprot;
    dword initprot;
    dword nsects;
    dword flags;
};

typedef struct mach_header mach_header, *Pmach_header;

struct mach_header {
    dword magic;
    dword cputype;
    dword cpusubtype;
    dword filetype;
    dword ncmds;
    dword sizeofcmds;
    dword flags;
};

typedef struct dylinker_command dylinker_command, *Pdylinker_command;

struct dylinker_command {
    dword cmd;
    dword cmdsize;
    struct lc_str name;
};

typedef struct dylib dylib, *Pdylib;

struct dylib {
    struct lc_str name;
    dword timestamp;
    dword current_version;
    dword compatibility_version;
};

typedef struct dysymtab_command dysymtab_command, *Pdysymtab_command;

struct dysymtab_command {
    dword cmd;
    dword cmdsize;
    dword ilocalsym;
    dword nlocalsym;
    dword iextdefsym;
    dword nextdefsym;
    dword iundefsym;
    dword nundefsym;
    dword tocoff;
    dword ntoc;
    dword modtaboff;
    dword nmodtab;
    dword extrefsymoff;
    dword nextrefsyms;
    dword indirectsymoff;
    dword nindirectsyms;
    dword extreloff;
    dword nextrel;
    dword locreloff;
    dword nlocrel;
};

typedef struct CS_SuperBlob CS_SuperBlob, *PCS_SuperBlob;

struct CS_SuperBlob {
    dword magic; // magic number
    dword length; // total length of SuperBlob
    dword count; // number of index entries following
    struct CS_BlobIndex index[4]; // (count) entries
};

typedef struct dylib_command dylib_command, *Pdylib_command;

struct dylib_command {
    dword cmd;
    dword cmdsize;
    struct dylib dylib;
};

typedef struct symtab_command symtab_command, *Psymtab_command;

struct symtab_command {
    dword cmd;
    dword cmdsize;
    dword symoff;
    dword nsyms;
    dword stroff;
    dword strsize;
};

typedef struct linkedit_data_command linkedit_data_command, *Plinkedit_data_command;

struct linkedit_data_command {
    dword cmd;
    dword cmdsize;
    dword dataoff;
    dword datasize;
};

typedef struct CS_GenericBlob CS_GenericBlob, *PCS_GenericBlob;

struct CS_GenericBlob {
    dword magic; // magic number
    dword length; // total length of blob
};




// __static_initialization_and_destruction_0(int, int)

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 != 0xffff) {
    return;
  }
  DAT_00019d0d = 0;
  DAT_00019d29 = 0;
  Core::Input::m_Handlers = 0;
  DAT_00019d30 = 0;
  DAT_00019d34 = 0;
  DAT_00019d38 = 0;
  DAT_00019d3c = 0;
  DAT_00019d40 = 0;
  return;
}



// __static_initialization_and_destruction_0(int, int)

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 != 0xffff) {
    return;
  }
  Color::White._0_1_ = 0xff;
  Color::White._1_1_ = 0xff;
  Color::White._2_1_ = 0xff;
  Color::White._3_1_ = 0xff;
  Color::Gray._3_1_ = 0xff;
  Color::Black._0_1_ = 0;
  Color::Black._1_1_ = 0;
  Color::Black._2_1_ = 0;
  Color::Black._3_1_ = 0xff;
  Color::Gray._0_1_ = 0x80;
  Color::Gray._1_1_ = 0x80;
  Color::Gray._2_1_ = 0x80;
  Color::Red._0_1_ = 0xff;
  Color::Red._1_1_ = 0;
  Color::Red._2_1_ = 0;
  Color::Red._3_1_ = 0xff;
  Color::Blue._0_1_ = 0;
  Color::Blue._1_1_ = 0;
  Color::Blue._2_1_ = 0xff;
  Color::Blue._3_1_ = 0xff;
  Color::Green._0_1_ = 0;
  Color::Green._1_1_ = 0xff;
  Color::Green._2_1_ = 0;
  Color::Green._3_1_ = 0xff;
  Color::Yellow._0_1_ = 0xff;
  Color::Yellow._1_1_ = 0xff;
  Color::Yellow._2_1_ = 0;
  Color::Yellow._3_1_ = 0xff;
  Color::Pink._0_1_ = 0xff;
  Color::Pink._1_1_ = 0;
  Color::Pink._2_1_ = 0xff;
  Color::Pink._3_1_ = 0xff;
  return;
}



// __static_initialization_and_destruction_0(int, int)

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 != 0xffff) {
    return;
  }
  Core::Math::Vector2::_ZERO = 0;
  DAT_00019d68 = 0;
  Core::Math::Vector2::_ONE = 0x3f800000;
  DAT_00019d70 = 0x3f800000;
  return;
}



// Core::Heap::Heap()

void __thiscall Core::Heap::Heap(Heap *this)

{
  *(undefined ***)this = &PTR_Alloc_00018318;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[4] = (Heap)0x0;
  return;
}



// Core::FlushableHeap::FlushableHeap()

void __thiscall Core::FlushableHeap::FlushableHeap(FlushableHeap *this)

{
  Heap::Heap((Heap *)this);
  *(undefined ***)this = &PTR_Alloc_00018344;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}



// Core::StackHeap::StackHeap()

void __thiscall Core::StackHeap::StackHeap(StackHeap *this)

{
  Heap::Heap((Heap *)this);
  *(undefined ***)this = &PTR_Alloc_0001832c;
  *(undefined4 *)(this + 0x80) = 0;
  return;
}



// __static_initialization_and_destruction_0(int, int)

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  int in_r3;
  
  if (param_1 == 1) {
    in_r3 = 0xffff;
  }
  if (param_1 == 1 && param_2 == in_r3) {
    Core::FlushableHeap::FlushableHeap((FlushableHeap *)&Core::MemoryManager::m_Heap);
    Core::StackHeap::StackHeap((StackHeap *)&Core::MemoryManager::m_ScrapHeap);
    return;
  }
  return;
}



// __static_initialization_and_destruction_0(int, int)

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 != 0xffff) {
    return;
  }
  Level::m_LookAt = *(undefined4 *)PTR__ZERO_000180d0;
  DAT_00019e70 = *(undefined4 *)(PTR__ZERO_000180d0 + 4);
  Level::m_Bounds = Level::m_LookAt;
  DAT_00019e78 = DAT_00019e70;
  Level::m_GridStart = Level::m_LookAt;
  DAT_00019e80 = DAT_00019e70;
  return;
}



// Core::Sprite::Sprite()

void __thiscall Core::Sprite::Sprite(Sprite *this)

{
  *(undefined4 *)this = 0;
  *(undefined2 *)(this + 6) = 0;
  *(undefined2 *)(this + 4) = 0;
  *(undefined2 *)(this + 8) = 0;
  return;
}



// Core::Sprite::Sprite()

void __thiscall Core::Sprite::Sprite(Sprite *this)

{
  *(undefined4 *)this = 0;
  *(undefined2 *)(this + 6) = 0;
  *(undefined2 *)(this + 4) = 0;
  *(undefined2 *)(this + 8) = 0;
  return;
}



// __static_initialization_and_destruction_0(int, int)

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  Sprite *this;
  int in_r3;
  Sprite *this_00;
  
  if (param_1 == 1) {
    in_r3 = 0xffff;
  }
  if (param_1 == 1 && param_2 == in_r3) {
    this_00 = (Sprite *)&Creeps::m_Info;
    do {
      Core::Sprite::Sprite(this_00);
      this = this_00 + 0xc;
      this_00 = this_00 + 0x6c;
      Core::Sprite::Sprite(this);
    } while (this_00 != (Sprite *)&Creeps::m_Shadow);
    Core::Sprite::Sprite((Sprite *)&Creeps::m_Shadow);
    return;
  }
  return;
}



// TowerInfo::TowerInfo()

void __thiscall TowerInfo::TowerInfo(TowerInfo *this)

{
  Sprite *this_00;
  TowerInfo *pTVar1;
  
  pTVar1 = this + 0xf0;
  do {
    Core::Sprite::Sprite((Sprite *)(this + 8));
    this_00 = (Sprite *)(this + 0x14);
    this = this + 0x50;
    Core::Sprite::Sprite(this_00);
  } while (this != pTVar1);
  return;
}



// __static_initialization_and_destruction_0(int, int)

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  int in_r3;
  undefined2 *this;
  undefined2 *puVar1;
  
  if (param_1 == 1) {
    in_r3 = 0xffff;
  }
  if (param_1 == 1 && param_2 == in_r3) {
    this = &Towers::m_Info;
    do {
      puVar1 = this + 0x7a;
      TowerInfo::TowerInfo((TowerInfo *)this);
      this = puVar1;
    } while (puVar1 != (undefined2 *)&Projectiles::m_Suck);
    return;
  }
  return;
}



// __static_initialization_and_destruction_0(int, int)

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 != 0xffff) {
    return;
  }
  s_CreepOffset = 0;
  DAT_0001d03c = 0x41200000;
  s_TowerOffset = 0;
  DAT_0001d044 = 0x41f00000;
  s_FlyingCreepOffset = 0;
  DAT_0001d04c = 0x42000000;
  Core::Sprite::Sprite((Sprite *)&Projectiles::m_Suck);
  Core::Sprite::Sprite((Sprite *)&Projectiles::m_SuckSprite);
  Core::Sprite::Sprite((Sprite *)&Projectiles::m_Goo);
  Core::Sprite::Sprite((Sprite *)&Projectiles::m_ShockWave);
  Core::Sprite::Sprite((Sprite *)&Projectiles::m_Destruction);
  Core::Sprite::Sprite((Sprite *)&Projectiles::m_TowerFreeze);
  return;
}



void entry(void)

{
  int *piVar1;
  int iVar2;
  int param_5;
  
  piVar1 = (int *)(&stack0x00000004 + (param_5 + 1) * 4);
  do {
    iVar2 = *piVar1;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 0);
  (*(code *)PTR__main_0001803c)();
                    // WARNING: Could not recover jumptable at 0x00002a60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_00018040)();
  return;
}



// Function Stack Size: 0xc bytes

void GameDelegate::applicationWillTerminate_(ID param_1,SEL param_2,ID param_3)

{
  if (_s_Game == (int *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00002aa4. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*_s_Game + 4))();
  return;
}



// Function Stack Size: 0x8 bytes

void GameDelegate::Update(ID param_1,SEL param_2)

{
  undefined4 uVar1;
  
  if (_s_Game != (int *)0x0) {
    Core::Timer::Update();
    uVar1 = Core::Timer::Seconds();
    (**(code **)(*_s_Game + 0xc))(_s_Game,uVar1);
    (**(code **)(*_s_Game + 0x10))();
    _objc_msgSend(*(undefined4 *)(param_1 + glView),"SwapBuffer");
  }
  return;
}



// Function Stack Size: 0xc bytes

void GameDelegate::applicationDidFinishLaunching_(ID param_1,SEL param_2,ID param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  GameDelegate *local_168;
  char *local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 *local_154;
  undefined4 *local_150;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  GameDelegate *local_138;
  GameDelegate *local_134;
  char *local_130;
  char *local_12c;
  undefined4 local_128;
  char *local_124;
  char *local_120;
  undefined4 local_11c;
  undefined *local_118;
  char *local_114;
  char *local_110;
  char *local_10c;
  undefined4 *local_108;
  undefined auStack_104 [4];
  undefined4 local_100;
  undefined *local_ec;
  undefined *local_e8;
  undefined *local_e4;
  undefined *local_e0;
  GameDelegate **local_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
  GameDelegate *local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8 [3];
  GameDelegate *local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  GameDelegate *local_98;
  char *pcStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  GameDelegate *local_78;
  undefined4 uStack_74;
  undefined4 local_70 [20];
  
  local_e4 = &stack0xfffffff8;
  local_dc = &local_168;
  local_ec = PTR_00018044;
  local_e8 = &GCC_except_table0;
  local_e0 = &LAB_00002f70;
  local_138 = (GameDelegate *)param_1;
  __Unwind_SjLj_Register(auStack_104);
  local_100 = 0xffffffff;
  uVar2 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar2,"setStatusBarHidden:animated:",1,0);
  uVar2 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"mainScreen");
  local_150 = local_70;
  _objc_msgSend_stret(local_70,uVar2,"bounds");
  local_130 = "alloc";
  local_13c = window;
  local_134 = local_138;
  uVar2 = _objc_msgSend(&_OBJC_CLASS___UIWindow,"alloc");
  local_12c = "initWithFrame:";
  local_80 = *local_150;
  uStack_7c = local_150[1];
  local_168 = (GameDelegate *)local_150[2];
  local_164 = (char *)local_150[3];
  local_78 = local_168;
  uStack_74 = local_164;
  uVar2 = _objc_msgSend(uVar2,"initWithFrame:",local_80,uStack_7c);
  *(undefined4 *)(local_138 + local_13c) = uVar2;
  uVar2 = _objc_msgSend(&objc::class_t::ImageView,local_130);
  local_90 = 0;
  local_8c = 0;
  local_88 = 0x43f00000;
  local_84 = 0x43a00000;
  local_168 = (GameDelegate *)0x43f00000;
  local_164 = (char *)0x43a00000;
  uVar2 = _objc_msgSend(uVar2,local_12c,0,0);
  local_128 = _objc_msgSend(uVar2,"autorelease");
  local_154 = local_b8;
  _CGAffineTransformMakeRotation(local_b8,0x3fc90fdb);
  puVar1 = local_154;
  local_15c = 0x42a00000;
  local_158 = 0x42a00000;
  local_168 = local_ac;
  local_164 = (char *)local_a8;
  local_160 = uStack_a4;
  _CGAffineTransformTranslate(local_b8,*local_154,local_154[1],local_154[2]);
  local_d0 = *puVar1;
  uStack_cc = puVar1[1];
  local_168 = (GameDelegate *)puVar1[2];
  local_164 = (char *)puVar1[3];
  local_160 = puVar1[4];
  local_15c = puVar1[5];
  local_c8 = local_168;
  uStack_c4 = local_164;
  local_c0 = local_160;
  uStack_bc = local_15c;
  _objc_msgSend(local_128,"setTransform:",local_d0,uStack_cc);
  local_124 = "setBackgroundColor:";
  uVar2 = _objc_msgSend(&_OBJC_CLASS___UIColor,"clearColor");
  _objc_msgSend(local_128,local_124,uVar2);
  _objc_msgSend(local_128,"setOpaque:",0);
  _objc_msgSend(local_128,"setMultipleTouchEnabled:",1);
  local_140 = glView;
  uVar2 = _objc_msgSend(&objc::class_t::EAGLView,local_130);
  local_a0 = *local_150;
  uStack_9c = local_150[1];
  local_168 = (GameDelegate *)local_150[2];
  local_164 = (char *)local_150[3];
  local_160 = 0x8051;
  local_15c = 0;
  local_158 = 0;
  local_98 = local_168;
  pcStack_94 = local_164;
  uVar2 = _objc_msgSend(uVar2,"initWithFrame:pixelFormat:depthFormat:preserveBackbuffer:",local_a0,
                        uStack_9c);
  *(undefined4 *)(local_138 + local_140) = uVar2;
  local_120 = "addSubview:";
  _objc_msgSend(*(undefined4 *)(local_138 + window),"addSubview:",
                *(undefined4 *)(local_138 + glView));
  local_11c = local_128;
  _objc_msgSend(*(undefined4 *)(local_138 + window),local_120,local_128);
  _objc_msgSend(*(undefined4 *)(local_138 + window),"makeKeyAndVisible");
  local_118 = &_OBJC_CLASS___NSUserDefaults;
  local_114 = "standardUserDefaults";
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  local_110 = "stringForKey:";
  uVar2 = _objc_msgSend(uVar2,"stringForKey:",&cf_sound_enabled_preference);
  local_10c = "compare:";
  uVar3 = _objc_msgSend(uVar2,"compare:",&cf_1);
  local_144 = 1 - uVar3;
  if (1 < uVar3) {
    local_144 = 0;
  }
  uVar2 = _objc_msgSend(local_118,local_114);
  uVar2 = _objc_msgSend(uVar2,local_110,&cf_music_enabled_preference);
  uVar3 = _objc_msgSend(uVar2,local_10c,&cf_1);
  local_148 = 1 - uVar3;
  if (1 < uVar3) {
    local_148 = 0;
  }
  if ((local_148 != 0) || (local_144 != 0)) {
    local_100 = 0xffffffff;
    Sounds::Init(local_138);
    Sounds::Enabled(SUB41(local_144,0),SUB41(local_148,0));
    Sounds::Stream("Music/Theme.mp3");
  }
  local_100 = 0xffffffff;
  local_108 = (undefined4 *)operator_new(0x2d4);
  *local_108 = PTR_vtable_00018048 + 8;
  local_100 = 1;
  Core::FlushableHeap::FlushableHeap((FlushableHeap *)(local_108 + 0x67));
  Core::StackHeap::StackHeap((StackHeap *)(local_108 + 0x74));
  _s_Game = local_108;
  local_100 = 0xffffffff;
  _gettimeofday((timeval *)&_s_Timer,(void *)0x0);
  if (_s_Game != (undefined4 *)0x0) {
    (**(code **)*_s_Game)(_s_Game,*(undefined4 *)(local_134 + glView),local_11c);
    Core::Timer::Update();
    local_168 = local_138;
    local_164 = "Update";
    local_160 = 0;
    local_15c = 1;
    _objc_msgSend(&_OBJC_CLASS___NSTimer,
                  "scheduledTimerWithTimeInterval:target:selector:userInfo:repeats:",0x11111111,
                  0x3fa11111);
  }
  __Unwind_SjLj_Unregister(auStack_104);
  return;
}



// Function Stack Size: 0x8 bytes

void GameDelegate::dealloc(ID param_1,SEL param_2)

{
  ID local_18;
  class_t *local_14;
  
  if (_s_Game != (int *)0x0) {
    (**(code **)(*_s_Game + 8))();
    operator_delete(_s_Game);
  }
  _objc_msgSend(*(undefined4 *)(param_1 + window),"release");
  _objc_msgSend(*(undefined4 *)(param_1 + glView),"release");
  local_14 = &objc::class_t::GameDelegate;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_18,"dealloc");
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::Timer::Seconds()

float Core::Timer::Seconds(void)

{
  int in_r0;
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorSignedToFloat(*(undefined4 *)(in_r0 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  return fVar1 / 1000000.0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::Timer::Update()

void Core::Timer::Update(void)

{
  int *in_r0;
  int iVar1;
  timeval local_14;
  
  _gettimeofday(&local_14,(void *)0x0);
  in_r0[2] = local_14.tv_sec - *in_r0;
  iVar1 = local_14.tv_usec - in_r0[1];
  in_r0[3] = iVar1;
  if (iVar1 < 0) {
    in_r0[2] = (local_14.tv_sec - *in_r0) + -1;
    in_r0[3] = iVar1 + 1000000;
  }
  *in_r0 = local_14.tv_sec;
  in_r0[1] = local_14.tv_usec;
  return;
}



// LoL::BuildOrthoMatrix(float, float, float, float, float, float)

void __thiscall
LoL::BuildOrthoMatrix
          (LoL *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6)

{
  *(undefined4 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined4 *)(this + 0x264) = 0;
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x270) = 0;
  *(undefined4 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x278) = 0;
  *(undefined4 *)(this + 0x280) = 0;
  *(float *)(this + 0x254) = 2.0 / (param_3 - param_1);
  *(undefined4 *)(this + 0x290) = 0x3f800000;
  *(float *)(this + 0x268) = 2.0 / (param_2 - param_4);
  *(float *)(this + 0x27c) = 1.0 / (param_6 - param_5);
  *(float *)(this + 0x284) = (param_1 + param_3) / (param_1 - param_3);
  *(float *)(this + 0x288) = (param_2 + param_4) / (param_4 - param_2);
  *(float *)(this + 0x28c) = param_5 / (param_5 - param_6);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// LoL::HTMLLoaded()

void LoL::HTMLLoaded(void)

{
  int in_r0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_r0 + 0x188);
  if ((iVar2 != 4 && iVar2 != 8) && (iVar2 != 5)) {
    return;
  }
  iVar1 = *(int *)(in_r0 + 0x2c0);
  if (iVar1 != 0) {
    if (iVar2 != 5) {
      _objc_msgSend(*(undefined4 *)(in_r0 + 0x198),"bringSubviewToFront:");
      iVar1 = *(int *)(in_r0 + 0x2c0);
    }
    _objc_msgSend(iVar1,"setHidden:",0);
  }
  if (*(int *)(in_r0 + 0x2c4) == 0) {
    return;
  }
  _objc_msgSend(*(int *)(in_r0 + 0x2c4),"stopAnimating");
  _objc_msgSend(*(undefined4 *)(in_r0 + 0x2c4),"setHidden:",1);
  return;
}



// LoL::findButtonInView(UIView*)

UIView * __thiscall LoL::findButtonInView(LoL *this,UIView *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  UIView *pUVar4;
  int *piVar5;
  uint local_84;
  undefined auStack_80 [64];
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIButton,"class");
  uVar2 = _objc_msgSend(param_1,"isMemberOfClass:",uVar1);
  piVar5 = (int *)(uVar2 & 0xff);
  if (piVar5 == (int *)0x0) {
    iVar3 = _objc_msgSend(param_1,"subviews");
    if (iVar3 != 0) {
      uVar1 = _objc_msgSend(param_1,"subviews");
      iVar3 = _objc_msgSend(uVar1,"count");
      if (iVar3 != 0) {
        local_40 = piVar5;
        local_3c = piVar5;
        local_38 = piVar5;
        local_34 = piVar5;
        local_30 = piVar5;
        local_2c = piVar5;
        local_28 = piVar5;
        local_24 = piVar5;
        uVar1 = _objc_msgSend(param_1,"subviews");
        local_84 = _objc_msgSend(uVar1,"countByEnumeratingWithState:objects:count:",&local_40,
                                 auStack_80,0x10);
        if (local_84 != 0) {
          iVar3 = *local_38;
          do {
            uVar2 = 0;
            do {
              if (*local_38 != iVar3) {
                _objc_msgSend(param_1,"subviews");
                _objc_enumerationMutation();
              }
              pUVar4 = (UIView *)findButtonInView(this,(UIView *)local_3c[uVar2]);
              if (pUVar4 != (UIView *)0x0) {
                return pUVar4;
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 < local_84);
            local_84 = _objc_msgSend(uVar1,"countByEnumeratingWithState:objects:count:",&local_40,
                                     auStack_80,0x10);
            if (local_84 == 0) {
              return (UIView *)0x0;
            }
          } while( true );
        }
      }
    }
    param_1 = (UIView *)0x0;
  }
  return param_1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// LoL::Render()

void LoL::Render(void)

{
  int in_r0;
  
  _glDisable(0xb71);
  _glDisable(0xb44);
  _glShadeModel(&DAT_00001d01);
  _glColor4ub(0xff,0xff,0xff,0xff);
  _glMatrixMode(0x1701);
  _glLoadIdentity();
  _glRotatef(0xc2b40000,0,0,0x3f800000);
  _glMultMatrixf(in_r0 + 0x254);
  _glMatrixMode(0x1700);
  _glLoadIdentity();
  Level::Render();
  _glMatrixMode(0x1700);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// LoL::UpdateDragAvailability()

void LoL::UpdateDragAvailability(void)

{
  int in_r0;
  undefined uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar3 = in_r0;
  do {
    if (*(GUIComponent **)(iVar3 + 0x2b0) != (GUIComponent *)0x0) {
      uVar2 = *(uint *)(in_r0 + 0x158);
      bVar6 = *(ushort *)(PTR_m_Info_0001807c + iVar5) <= uVar2;
      if (bVar6) {
        uVar2 = 0;
      }
      uVar1 = (undefined)uVar2;
      if (!bVar6) {
        uVar1 = true;
      }
      GUIComponent::TurnOff(*(GUIComponent **)(iVar3 + 0x2b0),(bool)uVar1);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar5 = iVar5 + 0xf4;
  } while (iVar4 != 4);
  return;
}



// LoL::Score(unsigned int, unsigned int)

void __thiscall LoL::Score(LoL *this,uint param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(int *)(this + 0x29c) != 0) && (*(int *)(this + 0x298) != 0)) {
    *(uint *)(this + 0x15c) = *(int *)(this + 0x15c) + param_1;
    *(uint *)(this + 0x158) = *(int *)(this + 0x158) + param_2;
    uVar3 = *(undefined4 *)(*(int *)(this + 0x29c) + 0x18);
    uVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__i);
    _objc_msgSend(uVar3,"setText:",uVar2);
    uVar3 = *(undefined4 *)(*(int *)(this + 0x298) + 0x18);
    uVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__i,
                          *(undefined4 *)(this + 0x158));
    _objc_msgSend(uVar3,"setText:",uVar2);
    if (*(Tower **)PTR_m_SelectedTower_00018078 != (Tower *)0x0) {
      bVar1 = (bool)Tower::CanUpgrade(*(Tower **)PTR_m_SelectedTower_00018078,
                                      *(uint *)(this + 0x158));
      GUI::Enabled(0x36,bVar1);
      GUI::Enabled(0x37,(bool)(bVar1 ^ 1));
    }
    UpdateDragAvailability();
    return;
  }
  return;
}



// LoL::Dragged(Core::Touch*)

void __thiscall LoL::Dragged(LoL *this,Touch *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  bool bVar8;
  float local_28;
  float fStack_24;
  float local_20;
  float local_1c;
  
  iVar4 = GUI::HandleDragged(param_1);
  puVar2 = PTR_m_Touches_000180b4;
  if ((iVar4 == 0) && (*(int *)(this + 0x188) == 0xd)) {
    cVar1 = PTR_m_Touches_000180b4[0x19];
    bVar8 = cVar1 == '\0';
    if (!bVar8) {
      cVar1 = PTR_m_Touches_000180b4[0x35];
    }
    if (bVar8 || cVar1 == '\0') {
      local_20 = *(float *)(param_1 + 8) - *(float *)param_1;
      *(float *)param_1 = *(float *)(param_1 + 8);
      local_1c = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 4);
      *(float *)(param_1 + 4) = *(float *)(param_1 + 0xc);
      Core::Math::Vector2::operator/((Vector2 *)&local_28,(float)&local_20);
      puVar2 = PTR_m_LookAt_0001804c;
      *(float *)PTR_m_LookAt_0001804c = *(float *)PTR_m_LookAt_0001804c - local_28;
      *(float *)(puVar2 + 4) = *(float *)(puVar2 + 4) - fStack_24;
    }
    else {
      fVar5 = (float)Core::Math::Vector2::Distance
                               ((Vector2 *)PTR_m_Touches_000180b4,
                                (Vector2 *)(PTR_m_Touches_000180b4 + 0x1c));
      fVar6 = (float)Core::Math::Vector2::Distance
                               ((Vector2 *)(puVar2 + 8),(Vector2 *)(puVar2 + 0x24));
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar2 + 0xc);
      *(undefined4 *)puVar2 = *(undefined4 *)(puVar2 + 8);
      *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(puVar2 + 0x28);
      puVar3 = PTR_m_Scale_0001809c;
      *(undefined4 *)(puVar2 + 0x1c) = *(undefined4 *)(puVar2 + 0x24);
      *(float *)puVar3 = *(float *)puVar3 + (fVar6 - fVar5) * 0.001;
    }
    Level::BoundsCheckCamera();
    Level::DeselectTower();
    Level::NotTryingToBuild();
    GUI::Enabled(0x35,false);
    GUI::Enabled(0x36,false);
    GUI::Enabled(0x37,false);
    GUI::Enabled(0x31,true);
    iVar4 = 0x32;
    do {
      iVar7 = iVar4 + 1;
      GUI::Enabled((ushort)iVar4,true);
      iVar4 = iVar7;
    } while (iVar7 != 0x35);
  }
  return;
}



// LoL::Released(Core::Touch*)

void __thiscall LoL::Released(LoL *this,Touch *param_1)

{
  Tower TVar1;
  bool bVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  undefined4 uVar6;
  cfstringStruct *pcVar7;
  byte bVar8;
  undefined4 uVar9;
  int *this_00;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_40;
  float fStack_3c;
  Level aLStack_38 [24];
  
  iVar3 = GUI::HandleRelease(param_1);
  if ((((iVar3 == 0) && (*(int *)(this + 0x188) == 0xd)) &&
      ((PTR_m_Touches_000180b4[0x19] == '\0' || (PTR_m_Touches_000180b4[0x35] == '\0')))) &&
     ((param_1[0x18] == (Touch)0x0 ||
      (in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x14) < 0.3) << 0x1f,
      SUB41(in_fpscr >> 0x1f,0))))) {
    Level::GetGridPos(aLStack_38,(Vector2 *)(param_1 + 8));
    Level::SelectTowerAt((Vector2 *)aLStack_38);
    this_00 = *(int **)PTR_m_SelectedTower_00018078;
    if (this_00 == (int *)0x0) {
      bVar8 = false;
      GUI::Enabled(0x35,false);
      GUI::Enabled(0x36,false);
    }
    else {
      bVar2 = (bool)Tower::CanUpgrade((Tower *)this_00,*(uint *)(this + 0x158));
      Level::GetScreenPos((Level *)&local_40,(Vector2 *)(this_00 + 1));
      fVar13 = fStack_3c - 58.0;
      GUIComponent::Reposition(*(GUIComponent **)(this + 0x2a4),(local_40 - 64.0) - 14.0,fVar13);
      fVar12 = local_40 + 24.0;
      GUIComponent::Reposition(*(GUIComponent **)(this + 0x2a8),fVar12,fVar13);
      GUIComponent::Reposition(*(GUIComponent **)(this + 0x2ac),fVar12,fVar13);
      TVar1 = *(Tower *)(this_00 + 5);
      iVar3 = *this_00;
      psVar4 = (short *)GUIComponent::GetPosition();
      fVar14 = 0.5;
      psVar5 = (short *)GUIComponent::GetBounds();
      fVar13 = (float)VectorSignedToFloat((int)psVar5[1] >> 1,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat(psVar4[1] + 4 + ((int)psVar5[1] >> 1),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar10 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x15) & 3);
      _objc_msgSend(*(undefined4 *)(*(int *)(this + 0x2a4) + 0x18),"setCenter:",
                    fVar10 + fVar11 * fVar14,fVar12 + fVar13 * fVar14);
      uVar9 = *(undefined4 *)(*(int *)(this + 0x2a4) + 0x18);
      iVar3 = iVar3 * 0xf4;
      uVar6 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__ig,
                            *(undefined2 *)
                             (PTR_m_Info_0001807c + (uint)(byte)TVar1 * 0x50 + iVar3 + 2));
      _objc_msgSend(uVar9,"setText:",uVar6);
      psVar4 = (short *)GUIComponent::GetPosition();
      psVar5 = (short *)GUIComponent::GetBounds();
      fVar10 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 + fVar12 * fVar14;
      fVar13 = (float)VectorSignedToFloat(psVar4[1] + 4 + ((int)psVar5[1] >> 1),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat((int)psVar5[1] >> 1,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = fVar13 + fVar12 * fVar14;
      _objc_msgSend(*(undefined4 *)(*(int *)(this + 0x2a8) + 0x18),"setCenter:",fVar10,fVar13);
      _objc_msgSend(*(undefined4 *)(*(int *)(this + 0x2ac) + 0x18),"setCenter:",fVar10,fVar13);
      if ((byte)*(Tower *)(this_00 + 5) + 1 < *(uint *)(PTR_m_Info_0001807c + iVar3 + 0xf0)) {
        uVar9 = *(undefined4 *)(*(int *)(this + 0x2a8) + 0x18);
        iVar3 = ((byte)*(Tower *)(this_00 + 5) + 1) * 0x50 + iVar3;
        uVar6 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__ig,
                              *(undefined2 *)(PTR_m_Info_0001807c + iVar3));
        _objc_msgSend(uVar9,"setText:",uVar6);
        uVar6 = *(undefined4 *)(*(int *)(this + 0x2ac) + 0x18);
        pcVar7 = (cfstringStruct *)
                 _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__ig,
                               *(undefined2 *)(PTR_m_Info_0001807c + iVar3));
      }
      else {
        _objc_msgSend(*(undefined4 *)(*(int *)(this + 0x2a8) + 0x18),"setText:",&cf___);
        pcVar7 = &cf___;
        uVar6 = *(undefined4 *)(*(int *)(this + 0x2ac) + 0x18);
      }
      _objc_msgSend(uVar6,"setText:",pcVar7);
      GUI::Enabled(0x35,true);
      GUI::Enabled(0x36,bVar2);
      bVar8 = bVar2 ^ 1;
    }
    GUI::Enabled(0x37,(bool)bVar8);
  }
  return;
}



// LoL::Touched(Core::Touch*)

void __thiscall LoL::Touched(LoL *this,Touch *param_1)

{
  GUI::HandlePressed(param_1);
  return;
}



// LoL::GUIDragEvent(unsigned short, Core::Touch*, bool)

void __thiscall LoL::GUIDragEvent(LoL *this,ushort param_1,Touch *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float local_2c;
  float fStack_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  
  if (!param_3) {
    if (*(int *)(this + 0x2c8) != 0) goto LAB_00003d5c;
    *(uint *)(this + 0x2c8) = (uint)param_1;
    Level::DeselectTower();
    GUI::Enabled(0x35,false);
    GUI::Enabled(0x36,false);
    GUI::Enabled(0x37,false);
    GUI::Enabled(0x31,false);
    iVar1 = 0x32;
    do {
      iVar2 = iVar1 + 1;
      GUI::Enabled((ushort)iVar1,false);
      iVar1 = iVar2;
    } while (iVar2 != 0x35);
  }
  if (*(int *)(this + 0x2c8) == 0) {
    return;
  }
LAB_00003d5c:
  local_1c = *(undefined4 *)(param_2 + 8);
  local_18 = *(float *)(param_2 + 0xc) - 16.0;
  Level::GetGridPos((Level *)&local_2c,(Vector2 *)&local_1c);
  local_24 = local_2c - *(float *)PTR_m_GridStart_00018074;
  local_20 = fStack_28 - *(float *)(PTR_m_GridStart_00018074 + 4);
  Core::Math::Vector2::operator/((Vector2 *)&local_2c,(float)&local_24);
  uVar4 = VectorFloatToUnsigned(local_2c,3);
  uVar3 = VectorFloatToUnsigned(fStack_28,3);
  Level::TryingToBuild(*(int *)(this + 0x2c8) - 0x31,(ushort)uVar4,(ushort)uVar3);
  return;
}



// LoL::ChangeGameState(GameState)

void __thiscall LoL::ChangeGameState(LoL *this,GameState param_1)

{
  short sVar1;
  undefined *puVar2;
  LoL LVar3;
  ushort uVar4;
  char *pcVar5;
  char *pcVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  short *psVar11;
  short *psVar12;
  ushort uVar13;
  GameState GVar14;
  int iVar15;
  LoL *pLVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  uint in_fpscr;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  ushort uVar24;
  
  *(undefined4 *)(this + 0x18c) = *(undefined4 *)(this + 0x188);
  *(GameState *)(this + 0x188) = param_1;
  *(undefined4 *)(this + 400) = 0;
  if (*(int *)(this + 0x2c0) != 0) {
    _objc_msgSend(*(int *)(this + 0x2c0),"stopLoading");
    _objc_msgSend(*(undefined4 *)(this + 0x2c0),"setHidden:",1);
  }
  if (*(int *)(this + 0x2c4) != 0) {
    _objc_msgSend(*(int *)(this + 0x2c4),"stopAnimating");
    _objc_msgSend(*(undefined4 *)(this + 0x2c4),"setHidden:",1);
  }
  iVar15 = *(int *)(this + 0x188);
  switch(iVar15) {
  case 0:
    Level::Destroy();
    GUI::RemoveAllComponents();
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/title_screen.jpg");
    GUI::CreateStatic(0,0,pcVar5,0xffff);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_play.png");
    pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_play_active.png");
    GUI::CreateButton(0x16b,0x3c,pcVar5,pcVar6,2,1);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_scores.png");
    pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_scores_active.png");
    GUI::CreateButton(0x105,0xb4,pcVar5,pcVar6,4,1);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_help.png");
    pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_help_active.png");
    GUI::CreateButton(0xbe,0xdf,pcVar5,pcVar6,5,1);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_credits.png");
    pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_credits_active.png");
    GUI::CreateButton(0x6a,0xf8,pcVar5,pcVar6,6,1);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_discover.png");
    GUI::CreateButton(0x158,0xc0,pcVar5,(char *)0x0,8,1);
    if ((this[0x163] != (LoL)0x0) && (this[0x160] == (LoL)0x1)) {
      pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_resume.png");
      pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_resume_active.png");
      uVar24 = 3;
      uVar13 = 0x7d;
      uVar4 = 0x13e;
      goto LAB_00004a30;
    }
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_resume_disable.png");
    GUI::CreateStatic(0x13e,0x7d,pcVar5,0xffff);
    break;
  case 1:
    iVar15 = GUI::CreateScreenDisable(1);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/newgame_window.png");
    GUI::CreateStatic(0x37,0x2a,pcVar5,0xffff);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_yes.png");
    pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_yes_active.png");
    GUI::CreateButton(0x9b,0x8e,pcVar5,pcVar6,10,1);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_no.png");
    pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_no_active.png");
    GUI::CreateButton(0x10a,0x8e,pcVar5,pcVar6,0xb,1);
    GUI::CreateButton(0x167,0x34,"Textures/GUI/Buttons/btn_close.png",(char *)0x0,9,1);
    *(undefined *)(iVar15 + 5) = 0;
    goto LAB_000058e4;
  case 2:
    Core::FlushableHeap::Flush();
    Creeps::Init("Settings/Creeps.xml");
    Towers::Init("Settings/Towers.xml");
    Level::Init((Heap *)(this + 0x19c),"Levels/Level1.xml",0);
    puVar2 = PTR_m_StartWith_00018090;
    uVar4 = *(ushort *)PTR_m_Difficulty_00018070;
    *(undefined4 *)(this + 0x154) = *(undefined4 *)(PTR_m_StartWith_00018090 + (uint)uVar4 * 8);
    *(undefined4 *)(this + 0x158) = *(undefined4 *)(puVar2 + (uint)uVar4 * 8 + 4);
    uVar10 = _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    uVar10 = _objc_msgSend(uVar10,"stringForKey:",&cf_tut_enabled_preference);
    uVar9 = _objc_msgSend(uVar10,"compare:",&cf_1);
    GVar14 = 0xc;
    LVar3 = (LoL)('\x01' - (char)uVar9);
    if (1 < uVar9) {
      LVar3 = (LoL)0x0;
    }
    this[0x165] = LVar3;
    if (*(short *)(this + 0x174) == 1) {
      this[0x165] = (LoL)0x0;
    }
LAB_000058a8:
    ChangeGameState(this,GVar14);
    break;
  case 3:
    GUI::RemoveAllComponents();
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/game_settings.jpg");
    GUI::CreateStatic(0,0,pcVar5,0xffff);
    GUI::CreateButton(0x1bd,0,"Textures/GUI/Buttons/btn_quit.png",(char *)0x0,9,1);
    GUI::CreateStatic(0x14,0x70,"Textures/GUI/Buttons/gameSetSelectionA.png",0xe);
    GUI::CreateStatic(0x14,0x9b,"Textures/GUI/Buttons/gameSetSelectionB.png",0xf);
    GUI::CreateStatic(0x171,0x70,"Textures/GUI/Buttons/gameSetSelectionC.png",0x10);
    GUI::CreateStatic(0x182,0x9b,"Textures/GUI/Buttons/gameSetSelectionD.png",0x11);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_start.png");
    pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_start_active.png");
    GUI::CreateButton(0x17c,0xe1,pcVar5,pcVar6,0x16,1);
    puVar7 = (ushort *)Core::Localize::String(0,(ushort *)0x0,0);
    iVar15 = GUI::CreateTextButton(0x19,0x70,0x50,0x30,puVar7,0x12,1);
    puVar7 = (ushort *)Core::Localize::String(1,(ushort *)0x0,0);
    iVar19 = GUI::CreateTextButton(0x19,0x9b,0x50,0x30,puVar7,0x13,1);
    puVar7 = (ushort *)Core::Localize::String(2,(ushort *)0x0,0);
    iVar18 = GUI::CreateTextButton(0x177,0x70,0x50,0x30,puVar7,0x14,1);
    puVar7 = (ushort *)Core::Localize::String(3,(ushort *)0x0,0);
    iVar8 = GUI::CreateTextButton(0x177,0x9b,0x50,0x30,puVar7,0x15,1);
    GUI::Enabled(0xf,false);
    GUI::Enabled(0x11,false);
    if (iVar15 != 0) {
      _objc_msgSend(*(undefined4 *)(iVar15 + 0x18),"setTextAlignment:",0);
    }
    if (iVar19 != 0) {
      _objc_msgSend(*(undefined4 *)(iVar19 + 0x18),"setTextAlignment:",0);
    }
    if (iVar18 != 0) {
      _objc_msgSend(*(undefined4 *)(iVar18 + 0x18),"setTextAlignment:",2);
    }
    if (iVar8 == 0) break;
    uVar10 = *(undefined4 *)(iVar8 + 0x18);
    uVar17 = 2;
    pcVar5 = "setTextAlignment:";
    goto LAB_000045cc;
  case 4:
    GUI::RemoveAllComponents();
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/help_screen.jpg");
    GUI::CreateStatic(0,0,pcVar5,0xffff);
    GUI::CreateButton(0x1bd,0,"Textures/GUI/Buttons/btn_quit.png",(char *)0x0,9,1);
    if (*(int *)(this + 0x2c0) != 0) {
      uVar10 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar10 = _objc_msgSend(uVar10,"resourcePath");
      pcVar5 = "Text/Help.html";
LAB_000048a4:
      uVar17 = Core::Localize::Filename(pcVar5);
      uVar17 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s,uVar17);
      uVar10 = _objc_msgSend(uVar10,"stringByAppendingPathComponent:",uVar17);
      uVar10 = _objc_msgSend(uVar10,"stringByReplacingOccurrencesOfString:withString:",&cf_space_s_,
                             &cf__20);
      uVar10 = _objc_msgSend(uVar10,"stringByReplacingOccurrencesOfString:withString:",&cf__,&cf___)
      ;
      uVar10 = _objc_msgSend(&cf_file__,"stringByAppendingString:",uVar10);
      uVar17 = *(undefined4 *)(this + 0x2c0);
      uVar10 = _objc_msgSend(&_OBJC_CLASS___NSURL,"URLWithString:",uVar10);
      uVar10 = _objc_msgSend(&_OBJC_CLASS___NSURLRequest,"requestWithURL:",uVar10);
      _objc_msgSend(uVar17,"loadRequest:",uVar10);
    }
    goto LAB_0000495c;
  case 5:
    Sounds::StopStream();
    if (*(int *)(this + 0x2c0) != 0) {
      uVar10 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar10 = _objc_msgSend(uVar10,"resourcePath");
      pcVar5 = "Text/Trailer.html";
      goto LAB_000048a4;
    }
    goto LAB_0000495c;
  case 6:
    GUI::RemoveAllComponents();
    iVar15 = GUI::CreateScreenDisable(1);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/savescore_window.png");
    GUI::CreateStatic(0x37,0,pcVar5,0xffff);
    iVar19 = GUI::CreateTextEdit(0x89,0x4f,0xd2,0x1e,0x17);
    if ((iVar19 != 0) && (*(int *)(iVar19 + 0x1c) != 0)) {
      iVar18 = _objc_msgSend(*(int *)(iVar19 + 0x1c),"delegate");
      *(undefined4 *)(iVar18 + *(int *)PTR_m_Limit_00018084) = 0xb;
      iVar18 = _objc_msgSend(*(undefined4 *)(iVar19 + 0x1c),"delegate");
      *(undefined4 *)(iVar18 + *(int *)PTR_m_MinLimit_00018058) = 1;
      uVar10 = _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
      iVar18 = _objc_msgSend(uVar10,"stringForKey:",&cf_name_preference);
      if (iVar18 != 0) {
        uVar9 = _objc_msgSend(iVar18,"length");
        if (10 < uVar9) {
          uVar9 = 0xb;
        }
        uVar10 = _objc_msgSend(iVar18,"substringWithRange:",0,uVar9);
        _objc_msgSend(*(undefined4 *)(iVar19 + 0x1c),"setText:",uVar10);
      }
      uVar17 = *(undefined4 *)(iVar19 + 0x1c);
      uVar10 = _objc_msgSend(&_OBJC_CLASS___UIFont,"systemFontOfSize:",0x41c00000);
      _objc_msgSend(uVar17,"setFont:",uVar10);
      _objc_msgSend(*(undefined4 *)(iVar19 + 0x1c),"becomeFirstResponder");
    }
    if (iVar15 != 0) {
      pcVar5 = "setBackgroundColor:";
      *(undefined4 *)(this + 400) = 0x3f19999a;
      uVar10 = *(undefined4 *)(iVar15 + 0x18);
      *(undefined *)(iVar15 + 5) = 0;
      uVar17 = _objc_msgSend(uVar10,"backgroundColor");
      uVar17 = _objc_msgSend(uVar17,"colorWithAlphaComponent:",*(undefined4 *)(this + 400));
      goto LAB_000045cc;
    }
    break;
  case 7:
    GUI::RemoveAllComponents();
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/scores_screen.jpg");
    iVar15 = 0;
    GUI::CreateStatic(0,0,pcVar5,0xffff);
    GUI::CreateButton(0x1bd,0,"Textures/GUI/Buttons/btn_quit.png",(char *)0x0,9,1);
    pLVar16 = this;
    do {
      if (*(short *)(pLVar16 + 0x14) != 0) {
        iVar19 = GUI::CreateText(0x14,(short)(iVar15 << 4) + 100,0x1b8,0x20,(ushort *)0x0,0xffff);
        uVar17 = *(undefined4 *)(iVar19 + 0x18);
        uVar10 = _objc_msgSend(&_OBJC_CLASS___UIFont,"systemFontOfSize:",0x41400000);
        _objc_msgSend(uVar17,"setFont:",uVar10);
        uVar21 = *(undefined4 *)(iVar19 + 0x18);
        uVar17 = *(undefined4 *)(pLVar16 + 0x30);
        uVar10 = Core::Localize::String(5,(ushort *)0x0,0);
        uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__S__u__S_i_,
                               this + iVar15 * 0x20 + 0x14,uVar17,uVar10,
                               *(undefined4 *)(pLVar16 + 0x2c));
        _objc_msgSend(uVar21,"setText:",uVar10);
      }
      iVar15 = iVar15 + 1;
      pLVar16 = pLVar16 + 0x20;
    } while (iVar15 != 10);
    break;
  case 8:
    GUI::RemoveAllComponents();
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/credit_screen.jpg");
    GUI::CreateStatic(0,0,pcVar5,0xffff);
    GUI::CreateButton(0x1bd,0,"Textures/GUI/Buttons/btn_quit.png",(char *)0x0,9,1);
    if (*(int *)(this + 0x2c0) != 0) {
      uVar10 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar10 = _objc_msgSend(uVar10,"resourcePath");
      pcVar5 = "Text/Credits.html";
      goto LAB_000048a4;
    }
LAB_0000495c:
    if (*(int *)(this + 0x2c4) != 0) {
      _objc_msgSend(*(int *)(this + 0x2c4),"startAnimating");
      uVar10 = *(undefined4 *)(this + 0x198);
      uVar17 = *(undefined4 *)(this + 0x2c4);
      pcVar5 = "bringSubviewToFront:";
LAB_000045cc:
      _objc_msgSend(uVar10,pcVar5,uVar17);
    }
    break;
  case 9:
    GUI::RemoveAllComponents();
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/promotion_screen.jpg");
    GUI::CreateStatic(0,0,pcVar5,0xffff);
    GUI::CreateButton(0x1bd,0,"Textures/GUI/Buttons/btn_quit.png",(char *)0x0,9,1);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_register.png");
    pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_register_active.png");
    GUI::CreateButton(0x168,0xeb,pcVar5,pcVar6,0x25,1);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_trailer_disable.png");
    pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_trailer_active.png");
    uVar24 = 0x26;
    uVar13 = 0x54;
    uVar4 = 0x130;
LAB_00004a30:
    GUI::CreateButton(uVar4,uVar13,pcVar5,pcVar6,uVar24,1);
    break;
  default:
    goto switchD_00003e94_caseD_a;
  case 0xb:
    *(undefined4 *)(this + 0x2cc) = *(undefined4 *)PTR_m_TutorialInfo_0001805c;
    iVar15 = GUI::CreateScreenDisable(0xffff);
    GUI::CreateStatic(0,0,"Textures/GUI/TutorialScreen.png",0xffff);
    GUI::CreateButton(0x176,0x2c,"Textures/GUI/Buttons/btn_close.png",(char *)0x0,0x27,1);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_back.png");
    pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_back_active.png");
    GUI::CreateButton(0x74,0x9b,pcVar5,pcVar6,0x29,2);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_next.png");
    pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_next_active.png");
    GUI::CreateButton(0x131,0x9b,pcVar5,pcVar6,0x28,2);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_start.png");
    pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_start_active.png");
    GUI::CreateButton(0x12a,0x96,pcVar5,pcVar6,0x2b,2);
    GUI::Enabled(0x2b,false);
    GUI::Enabled(0x29,false);
    iVar19 = GUI::CreateText(0x75,0x48,0xfa,0x50,(ushort *)0x0,0x2a);
    if (iVar15 != 0) {
      *(undefined4 *)(this + 400) = 0x3f19999a;
      uVar17 = *(undefined4 *)(iVar15 + 0x18);
      *(undefined *)(iVar15 + 5) = 0;
      uVar10 = _objc_msgSend(uVar17,"backgroundColor");
      uVar10 = _objc_msgSend(uVar10,"colorWithAlphaComponent:",*(undefined4 *)(this + 400));
      _objc_msgSend(uVar17,"setBackgroundColor:",uVar10);
    }
    if (iVar19 != 0) {
      _objc_msgSend(*(undefined4 *)(iVar19 + 0x18),"setTextAlignment:",1);
      _objc_msgSend(*(undefined4 *)(iVar19 + 0x18),"setNumberOfLines:",7);
      if (*(uint **)(this + 0x2cc) == (uint *)0x0) break;
      uVar17 = *(undefined4 *)(iVar19 + 0x18);
      uVar10 = Core::Localize::String(**(uint **)(this + 0x2cc),(ushort *)0x0,0);
      uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__S,uVar10);
      _objc_msgSend(uVar17,"setText:",uVar10);
    }
    iVar15 = *(int *)(this + 0x2cc);
    bVar20 = iVar15 != 0;
    if (bVar20) {
      iVar15 = *(int *)(iVar15 + 4);
    }
    if (bVar20 && iVar15 != 0) {
      uVar10 = _objc_msgSend(&objc::class_t::GUIImage,"alloc");
      iVar15 = *(int *)(this + 0x2cc);
      uVar17 = _objc_msgSend(uVar10,"initWithFile:withX:withY:",*(undefined4 *)(iVar15 + 4),
                             *(undefined4 *)(iVar15 + 8),*(undefined4 *)(iVar15 + 0xc));
      pcVar5 = "addSubview:";
      *(undefined4 *)(this + 0x2d0) = uVar17;
      uVar10 = *(undefined4 *)(this + 0x198);
      goto LAB_000045cc;
    }
    break;
  case 0xc:
  case 0xd:
    if (*(int *)(this + 0x18c) < 10) {
      GUI::RemoveAllComponents();
      GUI::CreateStatic(0,0,"Textures/GUI/HUD/money_icon.png",0xffff);
      GUI::CreateStatic(0x4c,0,"Textures/GUI/HUD/health_icon.png",0xffff);
      GUI::CreateButton(0x1bc,0,"Textures/GUI/HUD/menu_btn.png",(char *)0x0,0x30,1);
      GUI::CreateButton(0x30,0x111,"Textures/GUI/HUD/pause_btn.png","Textures/GUI/HUD/play_btn.png",
                        0x2c,2);
      GUI::CreateButton(0x30,0x111,"Textures/GUI/HUD/play_btn.png","Textures/GUI/HUD/pause_btn.png",
                        0x2d,2);
      GUI::CreateButton(0x184,0x111,"Textures/GUI/HUD/fast_forwarding_btn.png",
                        "Textures/GUI/HUD/fast_forwarding_btn_disable.png",0x2e,2);
      GUI::CreateButton(0x184,0x111,"Textures/GUI/HUD/fast_forwarding_btn_disable.png",
                        "Textures/GUI/HUD/fast_forwarding_btn.png",0x2f,2);
      uVar10 = GUI::CreateDragable(0x70,0xfc,"Textures/GUI/HUD/white.png",
                                   "Textures/GUI/HUD/white_disable.png",0x31,0);
      *(undefined4 *)(this + 0x2b0) = uVar10;
      uVar10 = GUI::CreateDragable(0xb0,0xfc,"Textures/GUI/HUD/green.png",
                                   "Textures/GUI/HUD/green_disable.png",0x32,0);
      *(undefined4 *)(this + 0x2b4) = uVar10;
      uVar10 = GUI::CreateDragable(0xf0,0xfc,"Textures/GUI/HUD/red.png",
                                   "Textures/GUI/HUD/red_disable.png",0x33,0);
      *(undefined4 *)(this + 0x2b8) = uVar10;
      uVar10 = GUI::CreateDragable(0x130,0xfc,"Textures/GUI/HUD/blue.png",
                                   "Textures/GUI/HUD/blue_disable.png",0x34,0);
      *(undefined4 *)(this + 700) = uVar10;
      uVar10 = GUI::CreateText(0x26,0,0x2a,0x20,(ushort *)0x0,0xffff);
      *(undefined4 *)(this + 0x298) = uVar10;
      uVar10 = GUI::CreateText(0x6c,0,0x20,0x20,(ushort *)0x0,0xffff);
      *(undefined4 *)(this + 0x294) = uVar10;
      uVar10 = GUI::CreateText(0x15c,0,100,0x20,(ushort *)0x0,0xffff);
      *(undefined4 *)(this + 0x29c) = uVar10;
      uVar10 = GUI::CreateText(0x70,0,0x100,0x20,(ushort *)0x0,0xffff);
      *(undefined4 *)(this + 0x2a0) = uVar10;
      uVar10 = GUI::CreateButton(0,0,"Textures/GUI/HUD/sell_icon.png",(char *)0x0,0x35,2);
      *(undefined4 *)(this + 0x2a4) = uVar10;
      uVar10 = GUI::CreateButton(0,0,"Textures/GUI/HUD/ugrade_icon.png",
                                 "Textures/GUI/HUD/ugrade_icon_disable.png",0x36,2);
      *(undefined4 *)(this + 0x2a8) = uVar10;
      uVar10 = GUI::CreateButton(0,0,"Textures/GUI/HUD/ugrade_icon_disable.png",(char *)0x0,0x37,4);
      *(undefined4 *)(this + 0x2ac) = uVar10;
      uVar17 = *(undefined4 *)(*(int *)(this + 0x298) + 0x18);
      uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__i,
                             *(undefined4 *)(this + 0x158));
      _objc_msgSend(uVar17,"setText:",uVar10);
      _objc_msgSend(*(undefined4 *)(*(int *)(this + 0x298) + 0x18),"setTextAlignment:",0);
      uVar17 = *(undefined4 *)(*(int *)(this + 0x294) + 0x18);
      uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__i,
                             *(undefined4 *)(this + 0x154));
      _objc_msgSend(uVar17,"setText:",uVar10);
      _objc_msgSend(*(undefined4 *)(*(int *)(this + 0x294) + 0x18),"setTextAlignment:",0);
      uVar17 = *(undefined4 *)(*(int *)(this + 0x29c) + 0x18);
      uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__i,
                             *(undefined4 *)(this + 0x15c));
      _objc_msgSend(uVar17,"setText:",uVar10);
      _objc_msgSend(*(undefined4 *)(*(int *)(this + 0x29c) + 0x18),"setTextAlignment:",2);
      if (*(int *)(this + 0x2a0) != 0) {
        uVar17 = *(undefined4 *)(*(int *)(this + 0x2a0) + 0x18);
        uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___);
        _objc_msgSend(uVar17,"setText:",uVar10);
      }
      if (*(int *)(this + 0x2a4) != 0) {
        psVar11 = (short *)GUIComponent::GetPosition();
        psVar12 = (short *)GUIComponent::GetBounds();
        iVar15 = *(int *)(this + 0x2a4);
        uVar23 = VectorSignedToFloat((int)*psVar11,(byte)(in_fpscr >> 0x15) & 3);
        sVar1 = psVar12[1];
        uVar22 = VectorSignedToFloat(psVar11[1] + 2 + ((int)sVar1 >> 1),(byte)(in_fpscr >> 0x15) & 3
                                    );
        uVar21 = VectorSignedToFloat((int)*psVar12,(byte)(in_fpscr >> 0x15) & 3);
        uVar10 = _objc_msgSend(&objc::class_t::GUIText,"alloc");
        uVar17 = VectorSignedToFloat((int)sVar1 >> 1,(byte)(in_fpscr >> 0x15) & 3);
        uVar10 = _objc_msgSend(uVar10,"initWithFrame:",uVar23,uVar22,uVar21,uVar17);
        uVar10 = _objc_msgSend(uVar10,"autorelease");
        *(undefined4 *)(iVar15 + 0x18) = uVar10;
        _objc_msgSend(*(undefined4 *)(*(int *)(this + 0x2a4) + 0x18),"setTextAlignment:",1);
        uVar17 = *(undefined4 *)(*(int *)(this + 0x2a4) + 0x18);
        uVar10 = _objc_msgSend(&_OBJC_CLASS___UIFont,"systemFontOfSize:",0x41400000);
        _objc_msgSend(uVar17,"setFont:",uVar10);
        _objc_msgSend(*(undefined4 *)(this + 0x198),"addSubview:",
                      *(undefined4 *)(*(int *)(this + 0x2a4) + 0x18));
      }
      if (*(int *)(this + 0x2a8) != 0) {
        psVar11 = (short *)GUIComponent::GetPosition();
        psVar12 = (short *)GUIComponent::GetBounds();
        iVar15 = *(int *)(this + 0x2a8);
        uVar23 = VectorSignedToFloat((int)*psVar11,(byte)(in_fpscr >> 0x15) & 3);
        sVar1 = psVar12[1];
        uVar22 = VectorSignedToFloat(psVar11[1] + 2 + ((int)sVar1 >> 1),(byte)(in_fpscr >> 0x15) & 3
                                    );
        uVar21 = VectorSignedToFloat((int)*psVar12,(byte)(in_fpscr >> 0x15) & 3);
        uVar10 = _objc_msgSend(&objc::class_t::GUIText,"alloc");
        uVar17 = VectorSignedToFloat((int)sVar1 >> 1,(byte)(in_fpscr >> 0x15) & 3);
        uVar10 = _objc_msgSend(uVar10,"initWithFrame:",uVar23,uVar22,uVar21,uVar17);
        uVar10 = _objc_msgSend(uVar10,"autorelease");
        *(undefined4 *)(iVar15 + 0x18) = uVar10;
        _objc_msgSend(*(undefined4 *)(*(int *)(this + 0x2a8) + 0x18),"setTextAlignment:",1);
        uVar17 = *(undefined4 *)(*(int *)(this + 0x2a8) + 0x18);
        uVar10 = _objc_msgSend(&_OBJC_CLASS___UIFont,"systemFontOfSize:",0x41400000);
        _objc_msgSend(uVar17,"setFont:",uVar10);
        _objc_msgSend(*(undefined4 *)(this + 0x198),"addSubview:",
                      *(undefined4 *)(*(int *)(this + 0x2a8) + 0x18));
      }
      if (*(int *)(this + 0x2ac) != 0) {
        psVar11 = (short *)GUIComponent::GetPosition();
        psVar12 = (short *)GUIComponent::GetBounds();
        iVar15 = *(int *)(this + 0x2ac);
        uVar23 = VectorSignedToFloat((int)*psVar11,(byte)(in_fpscr >> 0x15) & 3);
        sVar1 = psVar12[1];
        uVar22 = VectorSignedToFloat(psVar11[1] + 2 + ((int)sVar1 >> 1),(byte)(in_fpscr >> 0x15) & 3
                                    );
        uVar21 = VectorSignedToFloat((int)*psVar12,(byte)(in_fpscr >> 0x15) & 3);
        uVar10 = _objc_msgSend(&objc::class_t::GUIText,"alloc");
        uVar17 = VectorSignedToFloat((int)sVar1 >> 1,(byte)(in_fpscr >> 0x15) & 3);
        uVar10 = _objc_msgSend(uVar10,"initWithFrame:",uVar23,uVar22,uVar21,uVar17);
        uVar10 = _objc_msgSend(uVar10,"autorelease");
        *(undefined4 *)(iVar15 + 0x18) = uVar10;
        _objc_msgSend(*(undefined4 *)(*(int *)(this + 0x2ac) + 0x18),"setTextAlignment:",1);
        uVar17 = *(undefined4 *)(*(int *)(this + 0x2ac) + 0x18);
        uVar10 = _objc_msgSend(&_OBJC_CLASS___UIFont,"systemFontOfSize:",0x41400000);
        _objc_msgSend(uVar17,"setFont:",uVar10);
        _objc_msgSend(*(undefined4 *)(this + 0x198),"addSubview:",
                      *(undefined4 *)(*(int *)(this + 0x2ac) + 0x18));
      }
      iVar15 = 0;
      iVar19 = 0;
      pLVar16 = this;
      do {
        if (*(int *)(pLVar16 + 0x2b0) != 0) {
          psVar11 = (short *)GUIComponent::GetPosition();
          psVar12 = (short *)GUIComponent::GetBounds();
          iVar18 = *(int *)(pLVar16 + 0x2b0);
          uVar23 = VectorSignedToFloat((int)*psVar11,(byte)(in_fpscr >> 0x15) & 3);
          sVar1 = psVar12[1];
          uVar22 = VectorSignedToFloat(psVar11[1] + 2 + ((int)sVar1 >> 1),
                                       (byte)(in_fpscr >> 0x15) & 3);
          uVar21 = VectorSignedToFloat((int)*psVar12,(byte)(in_fpscr >> 0x15) & 3);
          uVar10 = _objc_msgSend(&objc::class_t::GUIText,"alloc");
          uVar17 = VectorSignedToFloat((int)sVar1 >> 1,(byte)(in_fpscr >> 0x15) & 3);
          uVar10 = _objc_msgSend(uVar10,"initWithFrame:",uVar23,uVar22,uVar21,uVar17);
          uVar10 = _objc_msgSend(uVar10,"autorelease");
          *(undefined4 *)(iVar18 + 0x18) = uVar10;
          _objc_msgSend(*(undefined4 *)(*(int *)(pLVar16 + 0x2b0) + 0x18),"setTextAlignment:",1);
          uVar17 = *(undefined4 *)(*(int *)(pLVar16 + 0x2b0) + 0x18);
          uVar10 = _objc_msgSend(&_OBJC_CLASS___UIFont,"systemFontOfSize:",0x41400000);
          _objc_msgSend(uVar17,"setFont:",uVar10);
          uVar17 = *(undefined4 *)(*(int *)(pLVar16 + 0x2b0) + 0x18);
          uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__ig,
                                 *(undefined2 *)(PTR_m_Info_0001807c + iVar19));
          _objc_msgSend(uVar17,"setText:",uVar10);
          _objc_msgSend(*(undefined4 *)(this + 0x198),"addSubview:",
                        *(undefined4 *)(*(int *)(pLVar16 + 0x2b0) + 0x18));
        }
        iVar15 = iVar15 + 1;
        pLVar16 = pLVar16 + 4;
        iVar19 = iVar19 + 0xf4;
      } while (iVar15 != 4);
      GUI::Enabled(0x35,false);
      GUI::Enabled(0x36,false);
      GUI::Enabled(0x37,false);
      GUI::Enabled(0x2c,(bool)((byte)this[0x161] ^ 1));
      GUI::Enabled(0x2d,(bool)this[0x161]);
      GUI::Enabled(0x2e,(bool)((byte)this[0x162] ^ 1));
      GUI::Enabled(0x2f,(bool)this[0x162]);
      UpdateDragAvailability();
    }
    Sounds::StopStream();
    Sounds::PrepareToPlay("Music/Theme.mp3");
    *(undefined4 *)(this + 400) = 0x40000000;
    *(undefined4 *)(this + 0x2c8) = 0;
    Level::NotTryingToBuild();
    Level::DeselectTower();
    if (this[0x165] != (LoL)0x0) {
      GVar14 = 0xb;
      this[0x165] = (LoL)0x0;
      goto LAB_000058a8;
    }
    break;
  case 0xe:
    GUI::CreateScreenDisable(0x38);
    pcVar5 = "Textures/GUI/defeat.png";
    goto LAB_000058cc;
  case 0xf:
    GUI::CreateScreenDisable(0x39);
    pcVar5 = "Textures/GUI/victory.png";
LAB_000058cc:
    pcVar5 = (char *)Core::Localize::Filename(pcVar5);
    GUI::CreateStatic(0,0,pcVar5,0xffff);
    goto LAB_000058e4;
  case 0x10:
    iVar15 = GUI::CreateScreenDisable(1);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/exit_game_dialog.png");
    GUI::CreateStatic(0x37,0x39,pcVar5,0xffff);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_yes.png");
    pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_yes_active.png");
    GUI::CreateButton(0x9b,0x84,pcVar5,pcVar6,0xc,1);
    pcVar5 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_no.png");
    pcVar6 = (char *)Core::Localize::Filename("Textures/GUI/Buttons/btn_no_active.png");
    GUI::CreateButton(0x10a,0x84,pcVar5,pcVar6,0xd,1);
    GUI::CreateButton(0x167,0x43,"Textures/GUI/Buttons/btn_close.png",(char *)0x0,0xd,1);
    GUI::Enabled(0x35,false);
    GUI::Enabled(0x36,false);
    GUI::Enabled(0x37,false);
    Level::DeselectTower();
    *(undefined *)(iVar15 + 5) = 0;
LAB_000058e4:
    *(undefined4 *)(this + 400) = 0;
  }
  iVar15 = *(int *)(this + 0x188);
switchD_00003e94_caseD_a:
  if (iVar15 < 10) {
    *(undefined4 *)(this + 0x294) = 0;
    *(undefined4 *)(this + 0x298) = 0;
    *(undefined4 *)(this + 0x29c) = 0;
    *(undefined4 *)(this + 0x2a0) = 0;
    *(undefined4 *)(this + 0x2a4) = 0;
    *(undefined4 *)(this + 0x2a8) = 0;
    *(undefined4 *)(this + 0x2ac) = 0;
    *(undefined4 *)(this + 0x2b0) = 0;
    *(undefined4 *)(this + 0x2b4) = 0;
    *(undefined4 *)(this + 0x2b8) = 0;
    *(undefined4 *)(this + 700) = 0;
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// LoL::LevelStateChanged()

void LoL::LevelStateChanged(void)

{
  ushort uVar1;
  LoL *in_r0;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar4 = *(int *)(in_r0 + 0x2a0);
  if (iVar4 != 0) {
    iVar6 = *(int *)PTR_m_State_00018050;
    if (iVar6 == 1) {
      uVar3 = *(undefined4 *)(iVar4 + 0x18);
      uVar2 = Core::Localize::String(5,(ushort *)0x0,0);
      uVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__S_i,uVar2,
                            *(ushort *)PTR_m_Wave_00018080 + 1);
      _objc_msgSend(uVar3,"setText:",uVar2);
      LevelStateChanged()::currentWait = -1;
    }
    else {
      if (iVar6 == 2) {
        ChangeGameState(in_r0,0xf);
        return;
      }
      if ((iVar6 == 0) &&
         (iVar6 = (int)(*(float *)PTR_m_WaveWait_000180a0 + 1.0),
         iVar6 != LevelStateChanged()::currentWait)) {
        uVar5 = *(undefined4 *)(iVar4 + 0x18);
        uVar2 = Core::Localize::String(5,(ushort *)0x0,0);
        uVar1 = *(ushort *)PTR_m_Wave_00018080;
        uVar3 = Core::Localize::String(6,(ushort *)0x0,0);
        uVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__S_i_S_i___,uVar2,
                              uVar1 + 1,uVar3,iVar6);
        _objc_msgSend(uVar5,"setText:",uVar2);
        LevelStateChanged()::currentWait = iVar6;
      }
    }
  }
  return;
}



// LoL::Update(float)

void __thiscall LoL::Update(LoL *this,float param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  if (param_1 <= 0.0) {
    param_1 = 0.01666667;
  }
  Core::Input::Update(param_1);
  switch(*(undefined4 *)(this + 0x188)) {
  case 0:
  case 3:
    AssetManager::ProgressiveLoad();
    break;
  case 1:
  case 6:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x10:
    iVar2 = GUI::FindComponent(0x38);
    if (((iVar2 != 0) || (iVar2 = GUI::FindComponent(0x39), iVar2 != 0)) ||
       (iVar2 = GUI::FindComponent(1), iVar2 != 0)) {
      uVar4 = *(undefined4 *)(iVar2 + 0x18);
      uVar3 = _objc_msgSend(uVar4,"backgroundColor");
      uVar3 = _objc_msgSend(uVar3,"colorWithAlphaComponent:",*(undefined4 *)(this + 400));
      _objc_msgSend(uVar4,"setBackgroundColor:",uVar3);
    }
    fVar5 = *(float *)(this + 400);
    bVar1 = fVar5 < 0.6;
    if (bVar1) {
      fVar5 = fVar5 + param_1 * 0.4;
    }
    if (bVar1) {
      *(float *)(this + 400) = fVar5;
    }
    break;
  case 0xc:
    if (*(float *)PTR_m_Scale_0001809c < 1.35) {
      *(float *)PTR_m_Scale_0001809c = *(float *)PTR_m_Scale_0001809c + param_1 * 0.2;
    }
    *(float *)PTR_m_LookAt_0001804c = *(float *)PTR_m_LookAt_0001804c + param_1 * -100.0;
    Level::BoundsCheckCamera();
    fVar5 = *(float *)(this + 400);
    *(float *)(this + 400) = fVar5 - param_1;
    if (fVar5 - param_1 <= 0.0) {
      ChangeGameState(this,0xd);
      return;
    }
    break;
  case 0xd:
    Level::Update(param_1,(bool)this[0x161],(bool)this[0x162]);
    if (*(int *)PTR_m_State_00018050 == 0) {
      LevelStateChanged();
      return;
    }
  }
  return;
}



// LoL::HurtPlayer(unsigned int)

void __thiscall LoL::HurtPlayer(LoL *this,uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  Sounds::Play(5,false);
  uVar2 = *(uint *)(this + 0x154);
  if (param_1 < uVar2) {
    uVar2 = uVar2 - param_1;
    *(uint *)(this + 0x154) = uVar2;
  }
  else if (uVar2 != 0) {
    *(undefined4 *)(this + 0x154) = 0;
    ChangeGameState(this,0xe);
    Sounds::Play(0x29,false);
    uVar2 = *(uint *)(this + 0x154);
  }
  uVar3 = *(undefined4 *)(*(int *)(this + 0x294) + 0x18);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__i,uVar2);
  _objc_msgSend(uVar3,"setText:",uVar1);
  Sounds::Vibrate();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// LoL::Save()

void LoL::Save(void)

{
  undefined *puVar1;
  int in_r0;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  iVar3 = *(int *)(in_r0 + 0x188);
  *(undefined *)(in_r0 + 0x160) = 1;
  *(int *)(in_r0 + 0xc) = iVar3;
  *(undefined4 *)(in_r0 + 0x10) = *(undefined4 *)(in_r0 + 400);
  if (iVar3 < 10) goto LAB_00005fc4;
  *(undefined4 *)(in_r0 + 8) = *(undefined4 *)(in_r0 + 400);
  *(undefined *)(in_r0 + 0x163) = 1;
  puVar1 = PTR_m_State_00018050;
  *(int *)(in_r0 + 4) = iVar3;
  *(undefined2 *)(in_r0 + 0x170) = 0;
  *(undefined4 *)(in_r0 + 0x168) = *(undefined4 *)puVar1;
  *(undefined2 *)(in_r0 + 0x172) = *(undefined2 *)PTR_m_Wave_00018080;
  *(undefined4 *)(in_r0 + 0x178) = *(undefined4 *)PTR_m_WaveWait_000180a0;
  *(undefined2 *)(in_r0 + 0x174) = *(undefined2 *)PTR_m_Difficulty_00018070;
  uVar5 = *(undefined4 *)(PTR_m_LookAt_0001804c + 4);
  *(undefined4 *)(in_r0 + 0x17c) = *(undefined4 *)PTR_m_LookAt_0001804c;
  *(undefined4 *)(in_r0 + 0x180) = uVar5;
  *(undefined4 *)(in_r0 + 0x184) = *(undefined4 *)PTR_m_Scale_0001809c;
  puVar1 = PTR_m_GridSize_0001806c;
  *(undefined2 *)(in_r0 + 0x16c) = *(undefined2 *)PTR_m_GridSize_0001806c;
  *(undefined2 *)(in_r0 + 0x16e) = *(undefined2 *)(puVar1 + 2);
  *(undefined2 *)(in_r0 + 0x176) = *(undefined2 *)PTR_m_CreepCount_000180a8;
  *(undefined *)(in_r0 + 0x165) = 0;
  if (iVar3 == 0x10) {
    uVar5 = *(undefined4 *)(in_r0 + 0x18c);
LAB_00005ec8:
    *(undefined4 *)(in_r0 + 4) = uVar5;
  }
  else if (iVar3 == 0xb) {
    uVar5 = 0xc;
    goto LAB_00005ec8;
  }
  puVar1 = PTR_m_Grid_0001808c;
  *(char **)PTR_m_Key_000180b0 = g_LoLSaveMapKey;
  Core::SaveGame::Save
            (*(void **)puVar1,
             (uint)*(ushort *)(in_r0 + 0x16e) * (uint)*(ushort *)(in_r0 + 0x16c) * 8);
  puVar1 = PTR_m_ScrapHeap_00018088;
  if (*(short *)(in_r0 + 0x176) != 0) {
    Core::StackHeap::Push();
    puVar2 = (undefined4 *)(***(code ***)puVar1)(puVar1,(uint)*(ushort *)(in_r0 + 0x176) * 0x3c,4);
    puVar8 = puVar2;
    for (uVar7 = 0; uVar7 < *(ushort *)(in_r0 + 0x176); uVar7 = uVar7 + 1) {
      iVar3 = *(int *)(PTR_m_Creeps_00018094 + uVar7 * 4);
      uVar5 = *(undefined4 *)(iVar3 + 0x14);
      uVar4 = *(undefined4 *)(iVar3 + 0x18);
      uVar6 = *(undefined4 *)(iVar3 + 0x1c);
      *puVar8 = *(undefined4 *)(iVar3 + 0x10);
      puVar8[1] = uVar5;
      puVar8[2] = uVar4;
      puVar8[3] = uVar6;
      uVar5 = *(undefined4 *)(iVar3 + 0x24);
      uVar4 = *(undefined4 *)(iVar3 + 0x28);
      uVar6 = *(undefined4 *)(iVar3 + 0x2c);
      puVar8[4] = *(undefined4 *)(iVar3 + 0x20);
      puVar8[5] = uVar5;
      puVar8[6] = uVar4;
      puVar8[7] = uVar6;
      uVar5 = *(undefined4 *)(iVar3 + 0x34);
      uVar4 = *(undefined4 *)(iVar3 + 0x38);
      uVar6 = *(undefined4 *)(iVar3 + 0x3c);
      puVar8[8] = *(undefined4 *)(iVar3 + 0x30);
      puVar8[9] = uVar5;
      puVar8[10] = uVar4;
      puVar8[0xb] = uVar6;
      uVar5 = *(undefined4 *)(iVar3 + 0x44);
      uVar4 = *(undefined4 *)(iVar3 + 0x48);
      puVar8[0xc] = *(undefined4 *)(iVar3 + 0x40);
      puVar8[0xd] = uVar5;
      puVar8[0xe] = uVar4;
      puVar8 = puVar8 + 0xf;
    }
    *(char **)PTR_m_Key_000180b0 = g_LoLSaveCreepKey;
    Core::SaveGame::Save(puVar2,(uint)*(ushort *)(in_r0 + 0x176) * 0x3c);
    Core::StackHeap::Pop();
  }
LAB_00005fc4:
  *(char **)PTR_m_Key_000180b0 = g_LoLSaveKey;
  Core::SaveGame::Save((void *)(in_r0 + 4),0x184);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// LoL::WillQuit()

void LoL::WillQuit(void)

{
  Sounds::StopStream();
  Save();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// LoL::Destroy()

void LoL::Destroy(void)

{
  int in_r0;
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(in_r0 + 0x2c4) != 0) {
    _objc_msgSend(*(int *)(in_r0 + 0x2c4),"stopAnimating");
    _objc_msgSend(*(undefined4 *)(in_r0 + 0x2c4),"removeFromSuperview");
    *(undefined4 *)(in_r0 + 0x2c4) = 0;
  }
  if (*(int *)(in_r0 + 0x2c0) != 0) {
    iVar1 = _objc_msgSend(*(int *)(in_r0 + 0x2c0),"delegate");
    if (iVar1 != 0) {
      uVar2 = _objc_msgSend(*(undefined4 *)(in_r0 + 0x2c0),"delegate");
      _objc_msgSend(uVar2,"release");
      _objc_msgSend(*(undefined4 *)(in_r0 + 0x2c0),"setDelegate:",0);
    }
    _objc_msgSend(*(undefined4 *)(in_r0 + 0x2c0),"removeFromSuperview");
    *(undefined4 *)(in_r0 + 0x2c0) = 0;
  }
  GUI::RemoveAllComponents();
  Core::MemoryManager::Destroy();
  return;
}



// LoL::Init(EAGLView*, UIView*)

void __thiscall LoL::Init(LoL *this,EAGLView *param_1,UIView *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  timeval tStack_20;
  
  m_Instance = this;
  *(UIView **)(this + 0x198) = param_2;
  *(EAGLView **)(this + 0x194) = param_1;
  *(undefined4 *)(this + 0x2d0) = 0;
  _gettimeofday(&tStack_20,(void *)0x0);
  Core::Math::RandMT::Seed(tStack_20.tv_usec);
  Core::MemoryManager::Init(0xc0000,0x300000);
  puVar1 = PTR_m_Heap_000180a4;
  pvVar2 = (void *)(***(code ***)PTR_m_Heap_000180a4)(PTR_m_Heap_000180a4,0x40000,4);
  Core::FlushableHeap::Init((FlushableHeap *)(this + 0x19c),pvVar2,0x40000,"LevelHeap");
  BuildOrthoMatrix(this,0.0,0.0,480.0,320.0,-1.0,1.0);
  pvVar2 = (void *)(***(code ***)puVar1)(puVar1,0x4180,4);
  Core::StackHeap::Init((StackHeap *)(this + 0x1d0),pvVar2,0x4180,"LocalizeHeap");
  puVar1 = PTR_m_Supported_000180bc;
  *PTR_m_Supported_000180bc = 1;
  puVar1[1] = 1;
  puVar1[2] = 1;
  puVar1[3] = 1;
  Core::Localize::Init((StackHeap *)(this + 0x1d0),0x80,5);
  Core::Localize::Load("Text/LoL");
  GUI::Init(*(ImageView **)(this + 0x198));
  GUI::RegisterCallback(DAT_00019688,DAT_0001968c,this);
  AssetManager::Init();
  *(char **)PTR_m_Key_000180b0 = g_LoLSaveKey;
  iVar3 = Core::SaveGame::Load(this + 4,0x184);
  if ((iVar3 == 0) || (this[0x160] != (LoL)0x1)) {
    _memset(this + 4,0,0x184);
  }
  uVar4 = _objc_msgSend(&_OBJC_CLASS___UIWebView,"alloc");
  iVar3 = _objc_msgSend(uVar4,"initWithFrame:",0x425c0000,0x42d20000,0x43b88000,0x43320000);
  *(int *)(this + 0x2c0) = iVar3;
  if (iVar3 != 0) {
    uVar4 = _objc_msgSend(&_OBJC_CLASS___UIColor,"blackColor");
    _objc_msgSend(iVar3,"setBackgroundColor:",uVar4);
    _objc_msgSend(*(undefined4 *)(this + 0x2c0),"setHidden:",1);
    uVar4 = _objc_msgSend(&objc::class_t::HTMLHandler,"alloc");
    _objc_msgSend(*(undefined4 *)(this + 0x2c0),"setDelegate:",uVar4);
    _objc_msgSend(*(undefined4 *)(this + 0x198),"addSubview:",*(undefined4 *)(this + 0x2c0));
  }
  uVar4 = _objc_msgSend(&_OBJC_CLASS___UIActivityIndicatorView,"alloc");
  iVar3 = _objc_msgSend(uVar4,"initWithActivityIndicatorStyle:",0);
  *(int *)(this + 0x2c4) = iVar3;
  if (iVar3 != 0) {
    _objc_msgSend(iVar3,"setFrame:",0x43580000,0x432f0000,0x42400000,0x42400000);
    _objc_msgSend(*(undefined4 *)(this + 0x2c4),"setHidden:",1);
    _objc_msgSend(*(undefined4 *)(this + 0x2c4),"stopAnimating");
    _objc_msgSend(*(undefined4 *)(this + 0x198),"addSubview:",*(undefined4 *)(this + 0x2c4));
  }
  ChangeGameState(this,0);
  Core::Input::EventHandler(0,DAT_00019684,this);
  Core::Input::EventHandler(1,DAT_0001967c,this);
  Core::Input::EventHandler(2,DAT_00019680,this);
  return;
}



// Function Stack Size: 0xc bytes

void HTMLHandler::webViewDidFinishLoad_(ID param_1,SEL param_2,ID param_3)

{
  undefined4 uVar1;
  
  uVar1 = LoL::findButtonInView(LoL::m_Instance,(UIView *)param_3);
  _objc_msgSend(uVar1,"sendActionsForControlEvents:",0x40);
  LoL::HTMLLoaded();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// LoL::ScoreFromWave()

void LoL::ScoreFromWave(void)

{
  undefined *puVar1;
  int in_r0;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_m_Difficulty_00018070;
  if (*(int *)(in_r0 + 0x29c) == 0) {
    return;
  }
  iVar3 = *(int *)(in_r0 + 0x158) *
          *(int *)(&_moneyReturn_28835 + (uint)*(ushort *)PTR_m_Difficulty_00018070 * 4) +
          *(int *)(in_r0 + 0x15c);
  *(int *)(in_r0 + 0x15c) = iVar3;
  *(int *)(in_r0 + 0x15c) =
       *(int *)(in_r0 + 0x154) * *(int *)(&_lifeReturn_28836 + (uint)*(ushort *)puVar1 * 4) + iVar3;
  uVar4 = *(undefined4 *)(*(int *)(in_r0 + 0x29c) + 0x18);
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__i);
  _objc_msgSend(uVar4,"setText:",uVar2);
  return;
}



// LoL::HighScore(unsigned int, unsigned int, unsigned short const*)

void __thiscall LoL::HighScore(LoL *this,uint param_1,uint param_2,ushort *param_3)

{
  int iVar1;
  ushort uVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LoL *pLVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  if ((*(uint *)(this + 0x150) < param_2) || (*(short *)(this + 0x134) == 0)) {
    uVar10 = 0;
    pLVar7 = this;
    do {
      if ((*(uint *)(pLVar7 + 0x30) < param_2) || (*(short *)(pLVar7 + 0x14) == 0)) {
        uVar9 = 9;
        while (uVar10 < uVar9) {
          iVar1 = uVar9 * 0x20;
          uVar9 = uVar9 - 1;
          puVar11 = (undefined4 *)(this + iVar1 + 0x14);
          puVar3 = (undefined4 *)(this + uVar9 * 0x20 + 0x14);
          uVar5 = puVar3[1];
          uVar6 = puVar3[2];
          uVar8 = puVar3[3];
          *puVar11 = *puVar3;
          puVar11[1] = uVar5;
          puVar11[2] = uVar6;
          puVar11[3] = uVar8;
          uVar5 = puVar3[5];
          uVar6 = puVar3[6];
          uVar8 = puVar3[7];
          puVar11[4] = puVar3[4];
          puVar11[5] = uVar5;
          puVar11[6] = uVar6;
          puVar11[7] = uVar8;
        }
        iVar1 = uVar10 * 0x20;
        *(uint *)(this + iVar1 + 0x2c) = param_1;
        *(uint *)(this + iVar1 + 0x30) = param_2;
        puVar4 = (ushort *)(this + iVar1 + 0x14);
        while( true ) {
          uVar2 = *param_3;
          if (uVar2 == 0) break;
          param_3 = param_3 + 1;
          *puVar4 = uVar2;
          puVar4 = puVar4 + 1;
        }
        *puVar4 = 0;
        return;
      }
      uVar10 = uVar10 + 1;
      pLVar7 = pLVar7 + 0x20;
    } while (uVar10 != 10);
  }
  return;
}



// LoL::GUIEvent(unsigned short)

void __thiscall LoL::GUIEvent(LoL *this,ushort param_1)

{
  char cVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  size_t sVar8;
  int iVar9;
  undefined4 uVar10;
  GameState GVar11;
  undefined2 uVar12;
  LoL LVar13;
  undefined4 uVar14;
  int *piVar15;
  int iVar16;
  char *pcVar17;
  Tower *pTVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  bool bVar22;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar3 = PTR_m_Info_0001807c;
  switch(param_1) {
  case 2:
    if (this[0x163] == (LoL)0x0) {
      GUIEvent(this,10);
      return;
    }
    GVar11 = 1;
    break;
  case 3:
    if (this[0x163] == (LoL)0x0) {
      return;
    }
    Core::FlushableHeap::Flush();
    Creeps::Init("Settings/Creeps.xml");
    Towers::Init("Settings/Towers.xml");
    *(undefined2 *)PTR_m_Difficulty_00018070 = *(undefined2 *)(this + 0x174);
    Level::Init((Heap *)(this + 0x19c),"Levels/Level1.xml",(uint)*(ushort *)(this + 0x172));
    puVar4 = PTR_m_Key_000180b0;
    puVar3 = PTR_m_Grid_0001808c;
    if ((*(short *)PTR_m_GridSize_0001806c == *(short *)(this + 0x16c)) &&
       (*(short *)(PTR_m_GridSize_0001806c + 2) == *(short *)(this + 0x16e))) {
      *(char **)PTR_m_Key_000180b0 = g_LoLSaveMapKey;
      GVar11 = Core::SaveGame::Load
                         (*(void **)puVar3,
                          (uint)*(ushort *)(this + 0x16e) * (uint)*(ushort *)(this + 0x16c) * 8);
      if (GVar11 != 0) {
        Level::ConvertGridToTowers();
        Level::PathFind((GridCellInfo *)0x0);
        puVar3 = PTR_m_LookAt_0001804c;
        uVar10 = *(undefined4 *)(this + 0x17c);
        *(undefined4 *)(PTR_m_LookAt_0001804c + 4) = *(undefined4 *)(this + 0x180);
        *(undefined4 *)puVar3 = uVar10;
        *(undefined4 *)PTR_m_Scale_0001809c = *(undefined4 *)(this + 0x184);
        uVar10 = *(undefined4 *)(this + 0x178);
        *(undefined4 *)PTR_m_State_00018050 = *(undefined4 *)(this + 0x168);
        *(undefined4 *)PTR_m_WaveWait_000180a0 = uVar10;
        ChangeGameState(this,*(GameState *)(this + 4));
        if (*(int *)(this + 0x168) != 2) {
          LevelStateChanged();
        }
        *(undefined4 *)(this + 400) = *(undefined4 *)(this + 8);
        puVar3 = PTR_m_ScrapHeap_00018088;
        if (*(short *)(this + 0x176) == 0) {
          return;
        }
        Core::StackHeap::Push();
        puVar6 = (undefined4 *)
                 (***(code ***)puVar3)(puVar3,(uint)*(ushort *)(this + 0x176) * 0x3c,4);
        *(char **)puVar4 = g_LoLSaveCreepKey;
        iVar9 = Core::SaveGame::Load(puVar6,(uint)*(ushort *)(this + 0x176) * 0x3c);
        if (iVar9 == 0) {
          this[0x163] = (LoL)0x0;
          ChangeGameState(this,0);
        }
        else {
          for (uVar21 = 0; uVar21 < *(ushort *)(this + 0x176); uVar21 = uVar21 + 1) {
            iVar9 = *(int *)(PTR_m_Creeps_00018094 + uVar21 * 4);
            uVar10 = puVar6[1];
            uVar20 = puVar6[2];
            uVar14 = puVar6[3];
            *(undefined4 *)(iVar9 + 0x10) = *puVar6;
            *(undefined4 *)(iVar9 + 0x14) = uVar10;
            *(undefined4 *)(iVar9 + 0x18) = uVar20;
            *(undefined4 *)(iVar9 + 0x1c) = uVar14;
            uVar10 = puVar6[5];
            uVar20 = puVar6[6];
            uVar14 = puVar6[7];
            *(undefined4 *)(iVar9 + 0x20) = puVar6[4];
            *(undefined4 *)(iVar9 + 0x24) = uVar10;
            *(undefined4 *)(iVar9 + 0x28) = uVar20;
            *(undefined4 *)(iVar9 + 0x2c) = uVar14;
            uVar10 = puVar6[9];
            uVar20 = puVar6[10];
            uVar14 = puVar6[0xb];
            *(undefined4 *)(iVar9 + 0x30) = puVar6[8];
            *(undefined4 *)(iVar9 + 0x34) = uVar10;
            *(undefined4 *)(iVar9 + 0x38) = uVar20;
            *(undefined4 *)(iVar9 + 0x3c) = uVar14;
            uVar10 = puVar6[0xd];
            uVar20 = puVar6[0xe];
            *(undefined4 *)(iVar9 + 0x40) = puVar6[0xc];
            *(undefined4 *)(iVar9 + 0x44) = uVar10;
            *(undefined4 *)(iVar9 + 0x48) = uVar20;
            puVar6 = puVar6 + 0xf;
          }
          *(ushort *)PTR_m_CreepCount_000180a8 = *(ushort *)(this + 0x176);
        }
        Core::StackHeap::Pop();
        return;
      }
    }
    else {
      GVar11 = 0;
    }
    this[0x163] = SUB41(GVar11,0);
    break;
  case 5:
    GVar11 = 4;
    break;
  case 6:
    GVar11 = 8;
    break;
  default:
    goto switchD_000066f8_caseD_7;
  case 8:
    GVar11 = 9;
    break;
  case 9:
  case 0xb:
    iVar9 = Sounds::IsStreaming();
    if (iVar9 == 0) {
      Sounds::Stream("Music/Theme.mp3");
    }
    goto LAB_000072d4;
  case 10:
    GVar11 = 3;
    this[0x163] = (LoL)0x0;
    this[0x161] = (LoL)0x0;
    this[0x162] = (LoL)0x0;
    *(undefined2 *)(this + 0x174) = 0;
    *(undefined4 *)(this + 0x15c) = 0;
    *(undefined2 *)(this + 0x172) = 0;
    this[0x164] = (LoL)0x0;
    break;
  case 0xc:
    Sounds::StopStream();
    Sounds::Stream("Music/Theme.mp3");
    Save();
LAB_000072d4:
    GVar11 = 0;
    break;
  case 0xd:
    GUI::RemoveComponentsUntilDisable();
    GVar11 = *(GameState *)(this + 0x18c);
    break;
  case 0x12:
    GUI::Enabled(0xe,true);
    GUI::Enabled(0xf,false);
    LVar13 = (LoL)0x0;
    goto LAB_00006b8c;
  case 0x13:
    GUI::Enabled(0xe,false);
    GUI::Enabled(0xf,true);
    LVar13 = (LoL)0x1;
LAB_00006b8c:
    this[0x164] = LVar13;
    return;
  case 0x14:
    GUI::Enabled(0x10,true);
    GUI::Enabled(0x11,false);
    uVar12 = 0;
    goto LAB_00006be0;
  case 0x15:
    GUI::Enabled(0x10,false);
    GUI::Enabled(0x11,true);
    uVar12 = 1;
LAB_00006be0:
    *(undefined2 *)PTR_m_Difficulty_00018070 = uVar12;
    *(undefined2 *)(this + 0x174) = uVar12;
    return;
  case 0x16:
    GVar11 = 2;
    break;
  case 0x17:
    iVar9 = GUI::FindComponent(0x17);
    if (iVar9 != 0) {
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      uVar10 = _objc_msgSend(*(undefined4 *)(iVar9 + 0x1c),"text");
      uVar10 = _objc_msgSend(uVar10,"dataUsingEncoding:",0x94000100);
      pvVar7 = (void *)_objc_msgSend(uVar10,"bytes");
      sVar8 = _objc_msgSend(uVar10,"length");
      _memcpy(&local_38,pvVar7,sVar8);
      HighScore(this,(uint)*(ushort *)(this + 0x172),*(uint *)(this + 0x15c),(ushort *)&local_38);
    }
  case 4:
    GVar11 = 7;
    break;
  case 0x25:
    uVar10 = Core::Localize::String(0xf,(ushort *)0x0,0);
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__S,uVar10);
    _NSLog();
    uVar10 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
    uVar20 = Core::Localize::String(0xf,(ushort *)0x0,0);
    uVar20 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__S,uVar20);
    uVar20 = _objc_msgSend(&_OBJC_CLASS___NSURL,"URLWithString:",uVar20);
    _objc_msgSend(uVar10,"openURL:",uVar20);
    return;
  case 0x26:
    GVar11 = 5;
    break;
  case 0x27:
  case 0x2b:
    if (*(int *)(this + 0x2d0) != 0) {
      _objc_msgSend(*(int *)(this + 0x2d0),"removeFromSuperview");
      *(undefined4 *)(this + 0x2d0) = 0;
    }
    GUI::RemoveComponentsUntilDisable();
    GVar11 = 0xc;
    break;
  case 0x28:
    if (*(int *)(this + 0x2d0) != 0) {
      _objc_msgSend(*(int *)(this + 0x2d0),"removeFromSuperview");
      *(undefined4 *)(this + 0x2d0) = 0;
    }
    if (*(int *)(this + 0x2cc) == 0) {
      return;
    }
    *(undefined4 *)(this + 0x2cc) = *(undefined4 *)(*(int *)(this + 0x2cc) + 0x10);
    iVar9 = GUI::FindComponent(0x2a);
    if (iVar9 != 0) {
      GUI::Enabled(0x29,true);
      uVar20 = *(undefined4 *)(iVar9 + 0x18);
      uVar10 = Core::Localize::String(**(uint **)(this + 0x2cc),(ushort *)0x0,0);
      uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__S,uVar10);
      _objc_msgSend(uVar20,"setText:",uVar10);
      piVar15 = *(int **)(this + 0x2cc);
      if (*piVar15 != 0xe) goto LAB_00006e60;
      GUI::Enabled(0x28,false);
      uVar5 = 0x2b;
      bVar22 = true;
LAB_00006e58:
      GUI::Enabled(uVar5,bVar22);
    }
LAB_00006e5c:
    piVar15 = *(int **)(this + 0x2cc);
    goto LAB_00006e60;
  case 0x29:
    if (*(int *)(this + 0x2d0) != 0) {
      _objc_msgSend(*(int *)(this + 0x2d0),"removeFromSuperview");
      *(undefined4 *)(this + 0x2d0) = 0;
    }
    if (*(int *)(this + 0x2cc) == 0) {
      return;
    }
    *(undefined4 *)(this + 0x2cc) = *(undefined4 *)(*(int *)(this + 0x2cc) + 0x14);
    iVar9 = GUI::FindComponent(0x2a);
    if (iVar9 == 0) goto LAB_00006e5c;
    GUI::Enabled(0x28,true);
    GUI::Enabled(0x2b,false);
    uVar20 = *(undefined4 *)(iVar9 + 0x18);
    uVar10 = Core::Localize::String(**(uint **)(this + 0x2cc),(ushort *)0x0,0);
    uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__S,uVar10);
    _objc_msgSend(uVar20,"setText:",uVar10);
    piVar15 = *(int **)(this + 0x2cc);
    if (*piVar15 == 7) {
      uVar5 = 0x29;
      bVar22 = false;
      goto LAB_00006e58;
    }
LAB_00006e60:
    if (piVar15[1] == 0) {
      return;
    }
    uVar10 = _objc_msgSend(&objc::class_t::GUIImage,"alloc");
    iVar9 = *(int *)(this + 0x2cc);
    uVar10 = _objc_msgSend(uVar10,"initWithFile:withX:withY:",*(undefined4 *)(iVar9 + 4),
                           *(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar9 + 0xc));
    pcVar17 = "addSubview:";
    *(undefined4 *)(this + 0x2d0) = uVar10;
    uVar20 = *(undefined4 *)(this + 0x198);
LAB_00006f28:
    _objc_msgSend(uVar20,pcVar17,uVar10);
    return;
  case 0x2c:
    GUI::Enabled(0x2c,false);
    GUI::Enabled(0x2d,true);
    this[0x161] = (LoL)0x1;
    if (*(int *)(this + 0x2a0) == 0) {
      return;
    }
    uVar20 = *(undefined4 *)(*(int *)(this + 0x2a0) + 0x18);
    pcVar17 = "setText:";
    uVar10 = Core::Localize::String(4,(ushort *)0x0,0);
    uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__S,uVar10);
    goto LAB_00006f28;
  case 0x2d:
    GUI::Enabled(0x2c,true);
    GUI::Enabled(0x2d,false);
    this[0x161] = (LoL)0x0;
    LevelStateChanged();
    return;
  case 0x2e:
    GUI::Enabled(0x2e,false);
    GUI::Enabled(0x2f,true);
    Level::SetFreezeAfterFast(4,true);
    Creeps::SetFreezeAfterFast(4,true);
    LVar13 = (LoL)0x1;
    goto LAB_00006fc8;
  case 0x2f:
    GUI::Enabled(0x2e,true);
    GUI::Enabled(0x2f,false);
    Level::SetFreezeAfterFast(4,false);
    Creeps::SetFreezeAfterFast(4,false);
    LVar13 = (LoL)0x0;
LAB_00006fc8:
    this[0x162] = LVar13;
    return;
  case 0x30:
    GVar11 = 0x10;
    break;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
    cVar1 = *PTR_m_TryToBuild_00018068;
    bVar22 = cVar1 != '\0';
    if (bVar22) {
      cVar1 = PTR_m_TryToBuild_00018068[1];
    }
    if (bVar22 && cVar1 != '\0') {
      iVar9 = *(TowerType *)(PTR_m_TryToBuild_00018068 + 4) * 0xf4;
      if ((uint)*(ushort *)(PTR_m_Info_0001807c + iVar9) <= *(uint *)(this + 0x158)) {
        Level::CreateTower(*(TowerType *)(PTR_m_TryToBuild_00018068 + 4),
                           *(ushort *)(PTR_m_TryToBuild_00018068 + 8),
                           *(ushort *)(PTR_m_TryToBuild_00018068 + 10),true);
        *(uint *)(this + 0x158) = *(int *)(this + 0x158) - (uint)*(ushort *)(puVar3 + iVar9);
        if (*(int *)(this + 0x298) != 0) {
          uVar20 = *(undefined4 *)(*(int *)(this + 0x298) + 0x18);
          uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__i);
          _objc_msgSend(uVar20,"setText:",uVar10);
        }
      }
    }
    Level::NotTryingToBuild();
    *(undefined4 *)(this + 0x2c8) = 0;
    GUI::Enabled(0x31,true);
    iVar9 = 0x32;
    do {
      iVar19 = iVar9 + 1;
      GUI::Enabled((ushort)iVar9,true);
      iVar9 = iVar19;
    } while (iVar19 != 0x35);
    UpdateDragAvailability();
    return;
  case 0x35:
    pTVar18 = *(Tower **)PTR_m_SelectedTower_00018078;
    if (pTVar18 != (Tower *)0x0) {
      iVar19 = *(int *)(this + 0x158);
      iVar9 = Tower::ResaleValue();
      if (*(uint *)(this + 0x15c) < 0x3e9) {
        iVar16 = 0;
      }
      else {
        iVar16 = *(uint *)(this + 0x15c) - 1000;
      }
      *(int *)(this + 0x15c) = iVar16;
      *(int *)(this + 0x158) = iVar9 + iVar19;
      if (*(int *)(this + 0x298) != 0) {
        uVar20 = *(undefined4 *)(*(int *)(this + 0x298) + 0x18);
        uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__i,
                               *(undefined4 *)(this + 0x158));
        _objc_msgSend(uVar20,"setText:",uVar10);
      }
      if (*(int *)(this + 0x29c) != 0) {
        uVar20 = *(undefined4 *)(*(int *)(this + 0x29c) + 0x18);
        uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__i,
                               *(undefined4 *)(this + 0x15c));
        _objc_msgSend(uVar20,"setText:",uVar10);
      }
      UpdateDragAvailability();
    }
    Level::DeselectTower();
    Level::RemoveTower(pTVar18);
    goto LAB_00007148;
  case 0x36:
    if ((*(Tower **)PTR_m_SelectedTower_00018078 != (Tower *)0x0) &&
       (iVar9 = Tower::CanUpgrade(*(Tower **)PTR_m_SelectedTower_00018078,*(uint *)(this + 0x158)),
       iVar9 != 0)) {
      iVar19 = *(int *)(this + 0x158);
      iVar9 = Tower::Upgrade();
      *(int *)(this + 0x158) = iVar19 - iVar9;
      if (*(int *)(this + 0x298) != 0) {
        uVar20 = *(undefined4 *)(*(int *)(this + 0x298) + 0x18);
        uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__i);
        _objc_msgSend(uVar20,"setText:",uVar10);
      }
      UpdateDragAvailability();
      Sounds::Play(10,false);
    }
    Level::DeselectTower();
LAB_00007148:
    GUI::Enabled(0x35,false);
    GUI::Enabled(0x36,false);
    GUI::Enabled(0x37,false);
    return;
  case 0x38:
  case 0x39:
    this[0x163] = (LoL)0x0;
    sVar2 = *(short *)PTR_m_Wave_00018080;
    *(ushort *)(this + 0x172) = sVar2 + 1U;
    if ((this[0x164] == (LoL)0x0) && (*(ushort *)PTR_m_WaveCount_000180b8 < (ushort)(sVar2 + 1U))) {
      *(ushort *)(this + 0x172) = *(ushort *)PTR_m_WaveCount_000180b8;
    }
    if ((*(uint *)(this + 0x15c) <= *(uint *)(this + 0x150)) && (*(short *)(this + 0x134) != 0))
    goto LAB_000072d4;
    GVar11 = 6;
  }
  ChangeGameState(this,GVar11);
switchD_000066f8_caseD_7:
  return;
}



// Core::Math::Vector2::TEMPNAMEPLACEHOLDERVALUE(float) const

void __thiscall Core::Math::Vector2::operator/(Vector2 *this,float param_1)

{
  float in_r2;
  
  *(float *)this = *(float *)param_1 / in_r2;
  *(float *)(this + 4) = *(float *)((int)param_1 + 4) / in_r2;
  return;
}



// Core::Math::RandMT::Seed(unsigned int)

void Core::Math::RandMT::Seed(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(uint *)PTR_initseed_000180ac = param_1;
  uVar1 = param_1 | 1;
  *(undefined4 *)PTR_left_00018060 = 0;
  puVar3 = PTR_state_00018098 + 8;
  puVar2 = PTR_state_00018098 + 0x9c4;
  *(uint *)PTR_state_00018098 = uVar1;
  do {
    uVar1 = uVar1 * 0x10dcd;
    *(uint *)(puVar3 + -4) = uVar1;
    puVar3 = puVar3 + 4;
  } while (puVar3 != puVar2);
  return;
}



// Creeps::SetFreezeAfterFast(CreepType, bool)

void Creeps::SetFreezeAfterFast(CreepType param_1,bool param_2)

{
  undefined *puVar1;
  ushort uVar2;
  
  if (param_2) {
    puVar1 = PTR_m_Info_00018054 + param_1 * 0x6c;
    uVar2 = *(ushort *)(puVar1 + 0x50) / 3;
  }
  else {
    puVar1 = PTR_m_Info_00018054 + param_1 * 0x6c;
    uVar2 = *(short *)(puVar1 + 0x50) * 3;
  }
  *(ushort *)(puVar1 + 0x50) = uVar2;
  return;
}



// Core::Math::Vector2::Distance(Core::Math::Vector2 const&) const

float __thiscall Core::Math::Vector2::Distance(Vector2 *this,Vector2 *param_1)

{
  undefined4 in_cr1;
  undefined4 in_cr7;
  
  coprocessor_function(10,6,5,in_cr7,in_cr7,in_cr7);
  coprocessor_function(10,0xf,7,in_cr7,in_cr1,in_cr7);
  return (*(float *)(this + 4) - *(float *)(param_1 + 4)) +
         (*(float *)this - *(float *)param_1) * (*(float *)this - *(float *)param_1);
}



// LoL::Dragged(Core::Touch*, void*)

void LoL::Dragged(Touch *param_1,void *param_2)

{
  Dragged((LoL *)param_2,param_1);
  return;
}



// LoL::Released(Core::Touch*, void*)

void LoL::Released(Touch *param_1,void *param_2)

{
  Released((LoL *)param_2,param_1);
  return;
}



// LoL::Touched(Core::Touch*, void*)

void LoL::Touched(Touch *param_1,void *param_2)

{
  Touched((LoL *)param_2,param_1);
  return;
}



// LoL::GUIDragEvent(void*, unsigned short, Core::Touch*, bool)

void LoL::GUIDragEvent(void *param_1,ushort param_2,Touch *param_3,bool param_4)

{
  GUIDragEvent((LoL *)param_1,param_2,param_3,param_4);
  return;
}



// LoL::GUIEvent(void*, unsigned short)

void LoL::GUIEvent(void *param_1,ushort param_2)

{
  GUIEvent((LoL *)param_1,param_2);
  return;
}



// Function Stack Size: 0x8 bytes

ID EAGLView::Context(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + m_Context);
}



// Function Stack Size: 0x8 bytes

unsigned_int EAGLView::DepthFormat(ID param_1,SEL param_2)

{
  return *(unsigned_int *)(param_1 + m_DepthFormat);
}



// Function Stack Size: 0x8 bytes

unsigned_int EAGLView::Format(ID param_1,SEL param_2)

{
  return *(unsigned_int *)(param_1 + m_Format);
}



// Function Stack Size: 0x8 bytes

unsigned_int EAGLView::FrameBuffer(ID param_1,SEL param_2)

{
  return *(unsigned_int *)(param_1 + m_FrameBuffer);
}



// Function Stack Size: 0x8 bytes

void EAGLView::layoutSubviews(ID param_1,SEL param_2)

{
  DestroySurface(param_1,(SEL)"DestroySurface");
  CreateSurface(param_1,(SEL)"CreateSurface");
  return;
}



// Function Stack Size: 0x1c bytes

ID EAGLView::initWithFrame_pixelFormat_(ID param_1,SEL param_2,CGRect param_3,unsigned_int param_4)

{
  CGRect CVar1;
  undefined8 uVar2;
  ID IVar3;
  unsigned_int in_r3;
  
  CVar1.field1_0x8.field1_0x4 = 0.0;
  uVar2 = SUB128(param_3._0_12_,0);
  CVar1.field0_0x0.field0_0x0 = (float)(int)uVar2;
  CVar1.field0_0x0.field1_0x4 = (float)(int)((ulonglong)uVar2 >> 0x20);
  CVar1.field1_0x8.field0_0x0 = (float)SUB124(param_3._0_12_,8);
  IVar3 = initWithFrame_pixelFormat_depthFormat_preserveBackbuffer_
                    (param_1,(SEL)"initWithFrame:pixelFormat:depthFormat:preserveBackbuffer:",CVar1,
                     param_4,in_r3,'\0');
  return IVar3;
}



// Function Stack Size: 0x18 bytes

ID EAGLView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  CGRect CVar1;
  ID IVar2;
  unsigned_int in_r2;
  unsigned_int in_r3;
  
  CVar1.field1_0x8.field0_0x0 = 5.07186e-41;
  CVar1.field0_0x0 = param_3.field0_0x0;
  CVar1.field1_0x8.field1_0x4 = 0.0;
  IVar2 = initWithFrame_pixelFormat_depthFormat_preserveBackbuffer_
                    (param_1,(SEL)"initWithFrame:pixelFormat:depthFormat:preserveBackbuffer:",CVar1,
                     in_r2,in_r3,'\0');
  return IVar2;
}



// Function Stack Size: 0x8 bytes

CLASS EAGLView::layerClass(ID param_1,SEL param_2)

{
  CLASS CVar1;
  
  CVar1 = _objc_msgSend(&_OBJC_CLASS___CAEAGLLayer,"class");
  return CVar1;
}



// Function Stack Size: 0x8 bytes

char EAGLView::CreateSurface(ID param_1,SEL param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  cVar1 = _objc_msgSend(&_OBJC_CLASS___EAGLContext,"setCurrentContext:",
                        *(undefined4 *)(param_1 + m_Context));
  if (cVar1 != '\0') {
    _glGenFramebuffersOES(1,param_1 + m_FrameBuffer);
    _glGenRenderbuffersOES(1,param_1 + m_RenderBuffer);
    _glBindFramebufferOES(0x8d40,*(undefined4 *)(param_1 + m_FrameBuffer));
    _glBindRenderbufferOES(0x8d41,*(undefined4 *)(param_1 + m_RenderBuffer));
    uVar4 = *(undefined4 *)(param_1 + m_Context);
    uVar2 = _objc_msgSend(param_1,"layer");
    _objc_msgSend(uVar4,"renderbufferStorage:fromDrawable:",0x8d41,uVar2);
    _glFramebufferRenderbufferOES(0x8d40,0x8ce0,0x8d41,*(undefined4 *)(param_1 + m_RenderBuffer));
    _glGetRenderbufferParameterivOES(0x8d41,0x8d42,param_1 + m_Width);
    _glGetRenderbufferParameterivOES(0x8d41,0x8d43,param_1 + m_Height);
    if (*(int *)(param_1 + m_DepthFormat) != 0) {
      _glGenRenderbuffersOES(1,param_1 + m_DepthBuffer);
      _glBindRenderbufferOES(0x8d41,*(undefined4 *)(param_1 + m_DepthBuffer));
      _glRenderbufferStorageOES
                (0x8d41,0x81a5,*(undefined4 *)(param_1 + m_Width),
                 *(undefined4 *)(param_1 + m_Height));
      _glFramebufferRenderbufferOES(0x8d40,0x8d00,0x8d41,*(undefined4 *)(param_1 + m_DepthBuffer));
      _glEnable(0xb71);
      _glDepthFunc(0x203);
    }
    iVar3 = _glCheckFramebufferStatusOES(0x8d40);
    if (iVar3 == 0x8cd5) {
      _glViewport(0,0,*(undefined4 *)(param_1 + m_Width),*(undefined4 *)(param_1 + m_Height));
      _glScissor(0,0,*(undefined4 *)(param_1 + m_Width),*(undefined4 *)(param_1 + m_Height));
      _glClearColor(0,0,0,0);
      _glClearDepthf(0x3f800000);
      _glClear(0x4000);
      if (*(int *)(param_1 + m_DepthFormat) != 0) {
        _glClear(0x100);
      }
      _glDisable(0xb60);
      _glDisable(0xb50);
      _glDisable(0xb90);
      _glEnable(0xb44);
      _glEnable(0xc11);
      _glCullFace(0x405);
      _glAlphaFunc(0x204,0);
      _glBlendFunc(0x302,0x303);
      _glColor4ub(0xff,0xff,0xff,0xff);
      _glHint(0x8192,0x1102);
      cVar1 = '\x01';
    }
    else {
      uVar2 = _glCheckFramebufferStatusOES(0x8d40);
      _printf("EAGLView::CreateSurface() : WARNING! Failed to make complete framebuffer %x\n",uVar2)
      ;
      cVar1 = '\0';
    }
  }
  return cVar1;
}



// Function Stack Size: 0x8 bytes

void EAGLView::DestroySurface(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = _objc_msgSend(&_OBJC_CLASS___EAGLContext,"currentContext");
  if (iVar1 != *(int *)(param_1 + m_Context)) {
    _objc_msgSend(&_OBJC_CLASS___EAGLContext,"setCurrentContext:");
  }
  if (*(int *)(param_1 + m_DepthFormat) != 0) {
    _glDeleteRenderbuffersOES(1,param_1 + m_DepthBuffer);
  }
  _glDeleteRenderbuffersOES(1,param_1 + m_RenderBuffer);
  _glDeleteFramebuffersOES(1,param_1 + m_FrameBuffer);
  *(undefined4 *)(param_1 + m_DepthBuffer) = 0;
  *(undefined4 *)(param_1 + m_RenderBuffer) = 0;
  *(undefined4 *)(param_1 + m_FrameBuffer) = 0;
  if (iVar1 != *(int *)(param_1 + m_Context)) {
    _objc_msgSend(&_OBJC_CLASS___EAGLContext,"setCurrentContext:",iVar1);
  }
  return;
}



// Function Stack Size: 0x8 bytes

void EAGLView::dealloc(ID param_1,SEL param_2)

{
  int iVar1;
  ID local_1c;
  class_t *local_18;
  
  iVar1 = _objc_msgSend(&_OBJC_CLASS___EAGLContext,"currentContext");
  if (iVar1 == *(int *)(param_1 + m_Context)) {
    _objc_msgSend(&_OBJC_CLASS___EAGLContext,"setCurrentContext:",0);
  }
  DestroySurface(param_1,(SEL)"DestroySurface");
  _objc_msgSend(*(undefined4 *)(param_1 + m_Context),"release");
  *(undefined4 *)(param_1 + m_Context) = 0;
  local_18 = &objc::class_t::EAGLView;
  local_1c = param_1;
  _objc_msgSendSuper2(&local_1c,"dealloc");
  return;
}



// Function Stack Size: 0x24 bytes

ID EAGLView::initWithFrame_pixelFormat_depthFormat_preserveBackbuffer_
             (ID param_1,SEL param_2,CGRect param_3,unsigned_int param_4,unsigned_int param_5,
             char param_6)

{
  int iVar1;
  char cVar2;
  ID IVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  ID local_30;
  class_t *local_2c;
  
  local_2c = &objc::class_t::EAGLView;
  local_30 = param_1;
  IVar3 = _objc_msgSendSuper2(&local_30,"initWithFrame:",param_4,param_5,
                              param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x4);
  if (IVar3 == 0) {
LAB_00007d28:
    _objc_msgSend(IVar3,"setMultipleTouchEnabled:",1);
  }
  else {
    *(float *)(IVar3 + m_Format) = param_3.field1_0x8.field0_0x0;
    *(float *)(IVar3 + m_DepthFormat) = param_3.field1_0x8.field1_0x4;
    uVar4 = _objc_msgSend(IVar3,"layer");
    _objc_msgSend(uVar4,"setOpaque:",1);
    uVar5 = _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithBool:",(int)param_6);
    if (param_3.field1_0x8.field0_0x0 == 5.07186e-41) {
      ppuVar7 = &PTR_000180c8;
    }
    else {
      ppuVar7 = &PTR_000180c4;
    }
    uVar5 = _objc_msgSend(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar5,
                          *(undefined4 *)PTR_000180c0,*(undefined4 *)*ppuVar7,
                          *(undefined4 *)PTR_000180cc,0);
    _objc_msgSend(uVar4,"setDrawableProperties:",uVar5);
    iVar1 = m_Context;
    uVar4 = _objc_msgSend(&_OBJC_CLASS___EAGLContext,"alloc");
    uVar4 = _objc_msgSend(uVar4,"initWithAPI:",1);
    *(undefined4 *)(IVar3 + iVar1) = uVar4;
    if (*(int *)(IVar3 + m_Context) == 0) {
      pcVar6 = "EAGLView::InitWithFrame(...) : WARNING! Couldn\'t create context";
    }
    else {
      cVar2 = _objc_msgSend(IVar3,"CreateSurface");
      if (cVar2 != '\0') goto LAB_00007d28;
      pcVar6 = "EAGLView::InitWithFrame(...) : WARNING! Couldn\'t create surface";
    }
    _puts(pcVar6);
    _objc_msgSend(IVar3,"release");
    IVar3 = 0;
  }
  return IVar3;
}



// Function Stack Size: 0x8 bytes

void EAGLView::SwapBuffer(ID param_1,SEL param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = _objc_msgSend(&_OBJC_CLASS___EAGLContext,"currentContext");
  if (iVar2 != *(int *)(param_1 + m_Context)) {
    _objc_msgSend(&_OBJC_CLASS___EAGLContext,"setCurrentContext:");
  }
  _glGetIntegerv(0x8ca7);
  _glBindRenderbufferOES(0x8d41,*(undefined4 *)(param_1 + m_RenderBuffer));
  cVar1 = _objc_msgSend(*(undefined4 *)(param_1 + m_Context),"presentRenderbuffer:",0x8d41);
  if (cVar1 == '\0') {
    _puts("EAGLView::SwapBuffer() : WARNING! Failed to swap render buffer");
  }
  if (iVar2 != *(int *)(param_1 + m_Context)) {
    _objc_msgSend(&_OBJC_CLASS___EAGLContext,"setCurrentContext:",iVar2);
  }
  return;
}



// Function Stack Size: 0x10 bytes

void EAGLView::touchesBegan_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Core::Input::TouchesBegan((NSSet *)param_3,(UIEvent *)param_4,(UIView *)param_1);
  return;
}



// Function Stack Size: 0x10 bytes

void EAGLView::touchesMoved_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Core::Input::TouchesMoved((NSSet *)param_3,(UIEvent *)param_4,(UIView *)param_1);
  return;
}



// Function Stack Size: 0x10 bytes

void EAGLView::touchesEnded_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Core::Input::TouchesEnded((NSSet *)param_3,(UIEvent *)param_4,(UIView *)param_1);
  return;
}



// Function Stack Size: 0x10 bytes

void EAGLView::touchesCancelled_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Core::Input::TouchesCancelled((NSSet *)param_3,(UIEvent *)param_4,(UIView *)param_1);
  return;
}



// Core::Input::EventHandler(Core::InputEvent, void (*)(Core::Touch*, void*), void*)

void Core::Input::EventHandler
               (InputEvent param_1,_func_void_Touch_ptr_void_ptr *param_2,void *param_3)

{
  (&m_Handlers)[param_1 * 2] = param_2;
  (&DAT_00019d30)[param_1 * 2] = param_3;
  return;
}



// Core::Input::Update(float)

void Core::Input::Update(float param_1)

{
  if (DAT_00019d0d != '\0') {
    DAT_00019d08 = DAT_00019d08 + param_1;
  }
  if (DAT_00019d29 != '\0') {
    DAT_00019d24 = DAT_00019d24 + param_1;
  }
  return;
}



// Core::Input::TouchesCancelled(NSSet*, UIEvent*, UIView*)

void Core::Input::TouchesCancelled(NSSet *param_1,UIEvent *param_2,UIView *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined auStack_80 [64];
  undefined4 local_40;
  int local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_40 = 0;
  local_3c = 0;
  local_38 = (int *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  uVar1 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_40,auStack_80,
                        0x10);
  if (uVar1 != 0) {
    iVar4 = *local_38;
    do {
      uVar3 = 0;
      do {
        if (*local_38 != iVar4) {
          _objc_enumerationMutation(param_1);
        }
        iVar2 = *(int *)(local_3c + uVar3 * 4);
        if ((DAT_00019d0d == '\0') || (DAT_00019d04 != iVar2)) {
          if ((DAT_00019d29 != '\0') && (DAT_00019d20 == iVar2)) {
            iVar2 = 1;
            goto LAB_00008060;
          }
        }
        else {
          iVar2 = 0;
LAB_00008060:
          (&DAT_00019d0d)[iVar2 * 0x1c] = 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
      uVar1 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_40,
                            auStack_80,0x10);
    } while (uVar1 != 0);
  }
  return;
}



// Core::Input::TouchesEnded(NSSet*, UIEvent*, UIView*)

void Core::Input::TouchesEnded(NSSet *param_1,UIEvent *param_2,UIView *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined auStack_80 [64];
  undefined4 local_40;
  int local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_40 = 0;
  local_3c = 0;
  local_38 = (int *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  uVar1 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_40,auStack_80,
                        0x10);
  if (uVar1 != 0) {
    iVar5 = *local_38;
    do {
      uVar3 = 0;
      do {
        if (*local_38 != iVar5) {
          _objc_enumerationMutation(param_1);
        }
        iVar2 = *(int *)(local_3c + uVar3 * 4);
        if ((DAT_00019d0d == '\0') || (DAT_00019d04 != iVar2)) {
          if ((DAT_00019d29 != '\0') && (DAT_00019d20 == iVar2)) {
            iVar2 = 1;
            goto LAB_00008190;
          }
        }
        else {
          iVar2 = 0;
LAB_00008190:
          if (DAT_00019d34 == (code *)0x0) {
            iVar4 = iVar2 << 5;
          }
          else {
            iVar4 = iVar2 * 0x20;
            (*DAT_00019d34)(&m_Touches + iVar2 * 7,DAT_00019d38);
          }
          (&DAT_00019d0d)[iVar4 + iVar2 * -4] = 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
      uVar1 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_40,
                            auStack_80,0x10);
    } while (uVar1 != 0);
  }
  return;
}



// Core::Input::TouchesMoved(NSSet*, UIEvent*, UIView*)

void Core::Input::TouchesMoved(NSSet *param_1,UIEvent *param_2,UIView *param_3)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  float local_88;
  float fStack_84;
  undefined auStack_80 [64];
  undefined4 local_40;
  int local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_40 = 0;
  local_3c = 0;
  local_38 = (int *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  uVar6 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_40,auStack_80,
                        0x10);
  if ((int)uVar6 != 0) {
    iVar4 = *local_38;
    do {
      iVar1 = (int)((ulonglong)uVar6 >> 0x20);
      uVar2 = 0;
      do {
        if (*local_38 != iVar4) {
          _objc_enumerationMutation(param_1,iVar1);
        }
        iVar1 = *(int *)(local_3c + uVar2 * 4);
        if ((DAT_00019d0d == '\0') || (DAT_00019d04 != iVar1)) {
          if ((DAT_00019d29 != '\0') && (DAT_00019d20 == iVar1)) {
            iVar3 = 1;
            goto LAB_00008300;
          }
        }
        else {
          iVar3 = 0;
LAB_00008300:
          _objc_msgSend_stret(&local_88,iVar1,"locationInView:",param_3);
          if (m_RotateXY == '\0') {
            fVar5 = fStack_84 - 11.0;
            (&DAT_00019cfc)[iVar3 * 7] = local_88;
          }
          else {
            fVar5 = 320.0 - local_88;
            (&DAT_00019cfc)[iVar3 * 7] = fStack_84;
          }
          iVar1 = iVar3 * 4;
          (&DAT_00019d00)[iVar3 * 7] = fVar5;
          (&DAT_00019d0c)[iVar3 * 0x1c] = 1;
          if (DAT_00019d3c != (code *)0x0) {
            (*DAT_00019d3c)();
            iVar1 = extraout_r1;
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)uVar6);
      uVar6 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_40,
                            auStack_80,0x10);
    } while ((int)uVar6 != 0);
  }
  return;
}



// Core::Input::TouchesBegan(NSSet*, UIEvent*, UIView*)

void Core::Input::TouchesBegan(NSSet *param_1,UIEvent *param_2,UIView *param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float in_s14;
  float fVar6;
  undefined8 uVar7;
  float local_88;
  float fStack_84;
  undefined auStack_80 [64];
  undefined4 local_40;
  int local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_40 = 0;
  local_3c = 0;
  local_38 = (int *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  uVar7 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_40,auStack_80,
                        0x10);
  if ((int)uVar7 != 0) {
    iVar4 = *local_38;
    do {
      uVar1 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar3 = 0;
      do {
        if (*local_38 != iVar4) {
          _objc_enumerationMutation(param_1,uVar1);
        }
        uVar2 = (uint)DAT_00019d0d;
        uVar1 = *(undefined4 *)(local_3c + uVar3 * 4);
        if (uVar2 == 0) {
LAB_000084b8:
          (&DAT_00019d0d)[uVar2 * 0x1c] = 1;
          (&DAT_00019d08)[uVar2 * 7] = 0;
          (&DAT_00019d04)[uVar2 * 7] = uVar1;
          (&DAT_00019d0c)[uVar2 * 0x1c] = 0;
          _objc_msgSend_stret(&local_88,uVar1,"locationInView:",param_3);
          bVar5 = m_RotateXY == '\0';
          if (!bVar5) {
            (&DAT_00019cfc)[uVar2 * 7] = fStack_84;
            in_s14 = 320.0;
          }
          if (bVar5) {
            (&DAT_00019cfc)[uVar2 * 7] = local_88;
            (&m_Touches)[uVar2 * 7] = local_88;
            (&DAT_00019d00)[uVar2 * 7] = fStack_84;
            (&DAT_00019cf8)[uVar2 * 7] = fStack_84;
            fVar6 = local_88;
          }
          else {
            (&m_Touches)[uVar2 * 7] = fStack_84;
            fVar6 = in_s14 - local_88;
          }
          if (!bVar5) {
            (&DAT_00019d00)[uVar2 * 7] = fVar6;
          }
          if (!bVar5) {
            (&DAT_00019cf8)[uVar2 * 7] = fVar6;
          }
          uVar1 = extraout_r1;
          if (m_Handlers != (code *)0x0) {
            (*m_Handlers)(&m_Touches + uVar2 * 7);
            uVar1 = extraout_r1_00;
          }
        }
        else if (DAT_00019d29 == '\0') {
          uVar2 = 1;
          goto LAB_000084b8;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)uVar7);
      uVar7 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_40,
                            auStack_80,0x10);
    } while ((int)uVar7 != 0);
  }
  return;
}



undefined4 _main(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSAutoreleasePool,"new");
  _UIApplicationMain(param_1,param_2,0,&cf_GameDelegate);
  _objc_msgSend(uVar1,"release");
  return 0;
}



// Core::FlushableHeap::FlushableHeap()

void __thiscall Core::FlushableHeap::FlushableHeap(FlushableHeap *this)

{
  Heap::Heap((Heap *)this);
  *(undefined ***)this = &PTR_Alloc_00018344;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::FlushableHeap::Flush()

void Core::FlushableHeap::Flush(void)

{
  int in_r0;
  
  *(undefined4 *)(in_r0 + 0x28) = *(undefined4 *)(in_r0 + 0x2c);
  *(undefined4 *)(in_r0 + 0x24) = *(undefined4 *)(in_r0 + 0x30);
  return;
}



// Core::StackHeap::StackHeap()

void __thiscall Core::StackHeap::StackHeap(StackHeap *this)

{
  Heap::Heap((Heap *)this);
  *(undefined ***)this = &PTR_Alloc_0001832c;
  *(undefined4 *)(this + 0x80) = 0;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::StackHeap::Push()

void Core::StackHeap::Push(void)

{
  int in_r0;
  
  *(undefined4 *)(*(int *)(in_r0 + 0x80) * 8 + in_r0 + 0x30) = *(undefined4 *)(in_r0 + 0x28);
  *(undefined4 *)(*(int *)(in_r0 + 0x80) * 8 + in_r0 + 0x34) = *(undefined4 *)(in_r0 + 0x24);
  *(int *)(in_r0 + 0x80) = *(int *)(in_r0 + 0x80) + 1;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::StackHeap::Pop()

void Core::StackHeap::Pop(void)

{
  int in_r0;
  int iVar1;
  
  iVar1 = *(int *)(in_r0 + 0x80) + -1;
  *(int *)(in_r0 + 0x80) = iVar1;
  iVar1 = iVar1 * 8 + in_r0;
  *(undefined4 *)(in_r0 + 0x28) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(in_r0 + 0x24) = *(undefined4 *)(iVar1 + 0x34);
  return;
}



// Core::Heap::Alloc(unsigned int, unsigned char)

uint __thiscall Core::Heap::Alloc(Heap *this,uint param_1,uchar param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)param_2;
  if (param_1 == 0) {
    return param_1;
  }
  uVar1 = (param_1 - 1) + uVar2;
  if (*(uint *)(this + 0x24) < uVar1) {
    _puts("Heap::Alloc(...) : WARNING! Out of memory!");
    return 0;
  }
  iVar3 = *(int *)(this + 0x28);
  *(uint *)(this + 0x28) = iVar3 + uVar1;
  *(uint *)(this + 0x24) = *(uint *)(this + 0x24) - uVar1;
  return -uVar2 & iVar3 + -1 + uVar2;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::Heap::Destroy()

void Core::Heap::Destroy(void)

{
  int in_r0;
  
  if (*(void **)(in_r0 + 0x2c) == (void *)0x0) {
    return;
  }
  operator_delete__(*(void **)(in_r0 + 0x2c));
  *(undefined4 *)(in_r0 + 0x2c) = 0;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::MemoryManager::Destroy()

void Core::MemoryManager::Destroy(void)

{
  Heap::Destroy();
  Heap::Destroy();
  return;
}



// Core::Heap::Init(void*, unsigned int, char const*)

void __thiscall Core::Heap::Init(Heap *this,void *param_1,uint param_2,char *param_3)

{
  *(void **)(this + 0x2c) = param_1;
  *(void **)(this + 0x28) = param_1;
  *(uint *)(this + 0x24) = param_2;
  _strcpy((char *)(this + 4),param_3);
  _memset(*(void **)(this + 0x28),0,*(size_t *)(this + 0x24));
  return;
}



// Core::StackHeap::Init(void*, unsigned int, char const*)

void __thiscall Core::StackHeap::Init(StackHeap *this,void *param_1,uint param_2,char *param_3)

{
  Heap::Init((Heap *)this,param_1,param_2,param_3);
  *(undefined4 *)(this + 0x80) = 0;
  return;
}



// Core::FlushableHeap::Init(void*, unsigned int, char const*)

void __thiscall
Core::FlushableHeap::Init(FlushableHeap *this,void *param_1,uint param_2,char *param_3)

{
  Heap::Init((Heap *)this,param_1,param_2,param_3);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x24);
  return;
}



// Core::MemoryManager::Init(unsigned int, unsigned int)

void Core::MemoryManager::Init(uint param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(param_1);
  FlushableHeap::Init((FlushableHeap *)&m_Heap,pvVar1,param_1,"MainHeap");
  _printf("MemoryManager::Init(...) : Main heap created with %i bytes\n",param_1);
  pvVar1 = operator_new__(param_2);
  StackHeap::Init((StackHeap *)&m_ScrapHeap,pvVar1,param_2,"ScrapHeap");
  _printf("MemoryManager::Init(...) : Scrap heap created with %i bytes\n",param_2);
  return;
}



// Core::Texture::Texture()

void __thiscall Core::Texture::Texture(Texture *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined2 *)(this + 0xe) = 0;
  *(undefined2 *)(this + 0xc) = 0;
  *(undefined2 *)(this + 0x12) = 0;
  *(undefined2 *)(this + 0x10) = 0;
  return;
}



// NextPowerOfTwo(unsigned int)

int NextPowerOfTwo(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1 | param_1 - 1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  return (uVar1 | uVar1 >> 0x10) + 1;
}



// Core::TextureManager::FindTexture(char const*, bool)

undefined4 * Core::TextureManager::FindTexture(char *param_1,bool param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = m_Textures;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      if (param_2) {
        _printf("TextureManager::FindTexture(...) : WARNING! Failed to find \"%s\"\n",param_1);
      }
      return (undefined4 *)0x0;
    }
    iVar1 = _strcmp((char *)puVar2[1],param_1);
    if (iVar1 == 0) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return puVar2;
}



// Core::Texture::End(unsigned int)

void __thiscall Core::Texture::End(Texture *this,uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  if (param_1 != 0) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    return;
  }
  _glDisable(0xde1);
  _glBindTexture(0xde1,0);
  return;
}



// Core::Texture::Begin(unsigned int)

void __thiscall Core::Texture::Begin(Texture *this,uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  if (param_1 != 0) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    return;
  }
  _glEnable(0xde1);
  _glBindTexture(0xde1,*(undefined4 *)(this + 8));
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::Texture::Unload()

void Core::Texture::Unload(void)

{
  int in_r0;
  
  if (*(int *)(in_r0 + 8) == 0) {
    return;
  }
  _glDeleteTextures(1,in_r0 + 8);
  *(undefined2 *)(in_r0 + 0xe) = 0;
  *(undefined2 *)(in_r0 + 0xc) = 0;
  *(undefined2 *)(in_r0 + 0x12) = 0;
  *(undefined2 *)(in_r0 + 0x10) = 0;
  *(undefined4 *)(in_r0 + 8) = 0;
  return;
}



// ExtensionSupported(char const*)

undefined4 ExtensionSupported(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  bool bVar4;
  
  pcVar1 = _strchr(param_1,0x20);
  if ((pcVar1 == (char *)0x0) && (*param_1 != '\0')) {
    pcVar1 = (char *)_glGetString(&DAT_00001f03);
    while (pcVar2 = _strstr(pcVar1,param_1), pcVar2 != (char *)0x0) {
      sVar3 = _strlen(param_1);
      bVar4 = pcVar2 == pcVar1;
      pcVar1 = pcVar2 + sVar3;
      if (((bVar4) || (pcVar2[-1] == ' ')) && (pcVar2[sVar3] == '\0' || pcVar2[sVar3] == ' ')) {
        return 1;
      }
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::Texture::Load()

void Core::Texture::Load(void)

{
  undefined2 uVar1;
  ushort uVar2;
  int in_r0;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  uint local_308;
  undefined4 local_304;
  char *local_300;
  undefined4 local_2fc;
  undefined4 *local_2f8;
  uint local_2f4;
  uint local_2f0;
  int local_2e8;
  char *local_2e4;
  undefined4 *local_2e0;
  uint local_2dc;
  char *local_2d8;
  int local_2d4;
  undefined4 local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  char *local_2c0;
  char *local_2bc;
  undefined4 local_2b8;
  undefined4 *local_2b4;
  uint local_2b0;
  int local_2ac;
  undefined4 *local_2a8;
  uint local_2a4;
  undefined4 *local_2a0;
  undefined4 *local_29c;
  undefined auStack_298 [4];
  undefined4 local_294;
  undefined *local_280;
  undefined *local_27c;
  undefined *local_278;
  undefined *local_274;
  uint *local_270;
  char acStack_264 [512];
  undefined4 local_64;
  
  local_278 = &stack0xfffffff8;
  local_270 = &local_308;
  local_280 = PTR_00018044;
  local_27c = &GCC_except_table0;
  local_274 = &LAB_00008f68;
  local_2e8 = in_r0;
  __Unwind_SjLj_Register(auStack_298);
  if (*(int *)(local_2e8 + 8) != 0) goto LAB_00009178;
  local_2e4 = *(char **)(local_2e8 + 4);
  pcVar3 = _strstr(local_2e4,".png");
  if (pcVar3 == (char *)0x0) {
    local_2d8 = _strstr(local_2e4,"._png");
    if (local_2d8 != (char *)0x0) {
      local_2d8 = (char *)0x1;
    }
  }
  else {
    local_2d8 = (char *)0x1;
  }
  _memset(acStack_264,0,0x200);
  local_294 = 0xffffffff;
  uVar4 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar4 = _objc_msgSend(uVar4,"resourcePath");
  uVar4 = _objc_msgSend(uVar4,"UTF8String");
  _sprintf(acStack_264,"%s/%s",uVar4,*(undefined4 *)(local_2e8 + 4));
  local_2d4 = _CGDataProviderCreateWithFilename(acStack_264);
  if (local_2d4 == 0) {
    pcVar3 = "Texture::Load() : WARNING! Couldn\'t open image \"%s\"\n";
    uVar4 = *(undefined4 *)(local_2e8 + 4);
    local_294 = 0xffffffff;
  }
  else {
    if (local_2d8 == (char *)0x0) {
      local_294 = 0xffffffff;
      local_2d0 = _CGImageCreateWithJPEGDataProvider(local_2d4,0,0,0);
    }
    else {
      local_2d0 = _CGImageCreateWithPNGDataProvider(local_2d4,0,0,0);
    }
    local_294 = 0xffffffff;
    _CGDataProviderRelease(local_2d4);
    local_2cc = _CGImageGetBitmapInfo(local_2d0);
    _CGImageGetColorSpace(local_2d0);
    local_2c8 = _CGColorSpaceGetModel();
    local_2c4 = _CGImageGetBitsPerPixel(local_2d0);
    uVar9 = local_2c4 - 8;
    bVar11 = local_2c8 != 0;
    bVar10 = local_2c8 == 1;
    if (local_2c8 < 2) {
      bVar11 = 0x17 < uVar9;
      bVar10 = uVar9 == 0x18;
    }
    if (!bVar11 || bVar10) {
      switch(uVar9) {
      case 0:
        local_2bc = "mework/QuartzCore";
        local_2c0 = "mework/QuartzCore";
        break;
      default:
        local_294 = 0xffffffff;
        _CGImageRelease(local_2d0);
        pcVar3 = "Texture::Load() : WARNING! Couldn\'t handle image bpp \"%s\"\n";
        uVar4 = *(undefined4 *)(local_2e8 + 4);
        goto LAB_00009174;
      case 8:
        local_2bc = "ework/QuartzCore";
        local_2c0 = "ework/QuartzCore";
        break;
      case 0x10:
        local_2c0 = "ramework/QuartzCore";
        local_2bc = local_2c0;
        break;
      case 0x18:
        if (((local_2cc & 0x1f) < 7) && ((1 << (local_2cc & 0x1f) & 0x54U) != 0)) {
          local_2c0 = (char *)0x80e1;
          local_2bc = "amework/QuartzCore";
        }
        else {
          local_2c0 = "amework/QuartzCore";
          local_2bc = local_2c0;
        }
      }
      local_294 = 0xffffffff;
      _CGImageGetDataProvider(local_2d0);
      local_2b8 = _CGDataProviderCopyData();
      local_2e0 = (undefined4 *)_CFDataGetBytePtr();
      uVar1 = _CGImageGetWidth(local_2d0);
      *(undefined2 *)(local_2e8 + 0xc) = uVar1;
      uVar1 = _CGImageGetHeight(local_2d0);
      *(undefined2 *)(local_2e8 + 0x10) = *(undefined2 *)(local_2e8 + 0xc);
      *(undefined2 *)(local_2e8 + 0xe) = uVar1;
      *(undefined2 *)(local_2e8 + 0x12) = uVar1;
      local_2dc = _CGImageGetBytesPerRow(local_2d0);
      if ((Load()::BGRASupport == '\0') &&
         (iVar5 = ___cxa_guard_acquire(&Load()::BGRASupport), iVar5 != 0)) {
        local_294 = 2;
        Load()::BGRASupport = ExtensionSupported("GL_IMG_texture_format_BGRA8888");
        ___cxa_guard_release(&Load()::BGRASupport);
      }
      pcVar3 = (char *)0x80e1;
      local_2b4 = local_2e0;
      if (local_2c0 == (char *)0x80e1) {
        iVar5 = ___udivsi3(local_2dc,local_2c4 >> 3);
        iVar5 = (uint)*(ushort *)(local_2e8 + 0xe) * iVar5;
        if ((local_2cc & 0x7000) != 0x2000) {
          for (iVar8 = 0; iVar8 != iVar5; iVar8 = iVar8 + 1) {
            uVar9 = local_2e0[iVar8];
            local_2e0[iVar8] =
                 uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                 uVar9 >> 0x18;
          }
        }
        pcVar3 = &Load()::BGRASupport;
        if (Load()::BGRASupport == '\0') {
          for (iVar8 = 0; iVar8 != iVar5; iVar8 = iVar8 + 1) {
            uVar9 = local_2e0[iVar8];
            pcVar3 = (char *)((uVar9 << 0x10 | uVar9 >> 0x10) & 0xff00ff | uVar9 & 0xff00ff00);
            local_2e0[iVar8] = pcVar3;
          }
          local_2c0 = "amework/QuartzCore";
        }
      }
      if (local_2c4 == 0x20) {
        pcVar3 = local_2d8;
      }
      if (local_2c4 == 0x20 && pcVar3 == (char *)0x0) {
        iVar5 = (uint)*(ushort *)(local_2e8 + 0xc) * (uint)*(ushort *)(local_2e8 + 0xe);
        puVar6 = local_2e0;
        puVar7 = local_2e0;
        if (local_2c0 == "amework/QuartzCore") {
          while( true ) {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            *(undefined *)puVar7 = *(undefined *)puVar6;
            *(undefined *)((int)puVar7 + 1) = *(undefined *)((int)puVar6 + 1);
            *(undefined *)((int)puVar7 + 2) = *(undefined *)((int)puVar6 + 2);
            puVar6 = puVar6 + 1;
            puVar7 = (undefined4 *)((int)puVar7 + 3);
          }
        }
        else {
          iVar8 = 4;
          while( true ) {
            if (iVar8 == 0 || iVar5 == 0) break;
            uVar4 = *puVar7;
            iVar8 = iVar8 + -1;
            local_64._0_1_ = (undefined)uVar4;
            iVar5 = iVar5 + -1;
            *(undefined *)((int)puVar6 + 2) = (undefined)local_64;
            local_64._1_1_ = (undefined)((uint)uVar4 >> 8);
            *(undefined *)((int)puVar6 + 1) = local_64._1_1_;
            local_64._2_1_ = (undefined)((uint)uVar4 >> 0x10);
            *(undefined *)puVar6 = local_64._2_1_;
            puVar6 = (undefined4 *)((int)puVar6 + 3);
            puVar7 = puVar7 + 1;
            local_64 = uVar4;
          }
          while( true ) {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            *(undefined *)((int)puVar6 + 2) = *(undefined *)puVar7;
            *(undefined *)((int)puVar6 + 1) = *(undefined *)((int)puVar7 + 1);
            *(undefined *)puVar6 = *(undefined *)((int)puVar7 + 2);
            puVar7 = puVar7 + 1;
            puVar6 = (undefined4 *)((int)puVar6 + 3);
          }
        }
        local_2b0 = local_2dc - (local_2dc >> 2);
        local_2c4 = 0x18;
        local_2bc = "ramework/QuartzCore";
        local_2c0 = "ramework/QuartzCore";
      }
      else {
        local_2b0 = local_2dc;
      }
      if ((Load()::limitedNPOT == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        local_294 = 1;
        Load()::limitedNPOT = ExtensionSupported("GL_APPLE_texture_2D_limited_npot");
        ___cxa_guard_release(&Load()::limitedNPOT);
      }
      local_2f0 = (uint)Load()::limitedNPOT;
      if (local_2f0 == 0) {
        local_2f4 = NextPowerOfTwo((uint)*(ushort *)(local_2e8 + 0xc));
        *(short *)(local_2e8 + 0x10) = (short)local_2f4;
        uVar2 = NextPowerOfTwo((uint)*(ushort *)(local_2e8 + 0xe));
        *(ushort *)(local_2e8 + 0x12) = uVar2;
        if (*(int *)(local_2e8 + 0xc) != *(int *)(local_2e8 + 0x10)) {
          local_2ac = (local_2f4 & 0xffff) * (local_2c4 >> 3);
          local_2a8 = (undefined4 *)_malloc((uint)uVar2 * local_2ac);
          local_2a4 = local_2f0;
          local_29c = local_2e0;
          local_2a0 = local_2a8;
          while( true ) {
            local_2a0 = (undefined4 *)((int)local_2a0 + local_2ac);
            local_29c = (undefined4 *)((int)local_29c + local_2b0);
            if (*(ushort *)(local_2e8 + 0xe) <= local_2a4) break;
            _memcpy((void *)((int)local_2a0 - local_2ac),(void *)((int)local_29c - local_2b0),
                    local_2b0);
            local_2a4 = local_2a4 + 1;
          }
          local_294 = 0xffffffff;
          _printf("Texture::Load() : WARNING! \"%s\" is not power of two...\n",
                  *(undefined4 *)(local_2e8 + 4));
          local_2b4 = local_2a8;
        }
      }
      local_294 = 0xffffffff;
      _glGenTextures(1,local_2e8 + 8);
      _glBindTexture(0xde1,*(undefined4 *)(local_2e8 + 8));
      _glTexParameteri(0xde1,0x2801,0x2601);
      _glTexParameteri(0xde1,0x2800,0x2601);
      _glTexParameteri(0xde1,0x2802,0x812f);
      _glTexParameteri(0xde1,0x2803,0x812f);
      local_308 = (uint)*(ushort *)(local_2e8 + 0x12);
      local_304 = 0;
      local_300 = local_2c0;
      local_2fc = 0x1401;
      local_2f8 = local_2b4;
      _glTexImage2D(0xde1,0,local_2bc,*(undefined2 *)(local_2e8 + 0x10));
      _glBindTexture(0xde1,0);
      _CFRelease(local_2b8);
      _CGImageRelease(local_2d0);
      goto LAB_00009178;
    }
    _CGImageRelease(local_2d0);
    pcVar3 = "Texture::Load() : WARNING! Couldn\'t handle image \"%s\"\n";
    uVar4 = *(undefined4 *)(local_2e8 + 4);
  }
LAB_00009174:
  _printf(pcVar3,uVar4);
LAB_00009178:
  __Unwind_SjLj_Unregister(auStack_298);
  return;
}



// Core::TextureManager::LoadTexture(Core::Heap&, char const*)

undefined4 * Core::TextureManager::LoadTexture(Heap *param_1,char *param_2)

{
  undefined4 *this;
  size_t sVar1;
  char *pcVar2;
  
  this = (undefined4 *)FindTexture(param_2,false);
  if ((this == (undefined4 *)0x0) &&
     (this = (undefined4 *)(***(code ***)param_1)(param_1,0x14,4), this != (undefined4 *)0x0)) {
    Texture::Texture((Texture *)this);
    sVar1 = _strlen(param_2);
    pcVar2 = (char *)(***(code ***)param_1)(param_1,sVar1 + 1,1);
    _strcpy(pcVar2,param_2);
    *this = m_Textures;
    this[1] = pcVar2;
    m_Textures = this;
  }
  return this;
}



// AssetManager::EndDecl(DeclAsset)

void AssetManager::EndDecl(DeclAsset param_1)

{
  switch(param_1) {
  case 0:
  case 1:
    _glDisableClientState(0x8074);
    _glDisableClientState(0x8078);
    return;
  case 2:
  case 3:
    _glDisableClientState(0x8074);
  }
  return;
}



// AssetManager::UpdateDecl(DeclAsset, void*)

void AssetManager::UpdateDecl(DeclAsset param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  switch(param_1) {
  case 0:
    _glVertexPointer(2,0x1406,0x10,param_2);
    uVar1 = 0x1406;
    uVar2 = 0x10;
    iVar3 = (int)param_2 + 8;
    break;
  case 1:
    _glVertexPointer(2,0x1402,8,param_2);
    uVar1 = 0x1402;
    uVar2 = 8;
    iVar3 = (int)param_2 + 4;
    break;
  case 2:
    _glVertexPointer(2,0x1406,8,param_2);
    return;
  case 3:
    _glVertexPointer(2,0x1402,4,param_2);
  default:
    return;
  }
  _glTexCoordPointer(2,uVar1,uVar2,iVar3);
  return;
}



// AssetManager::BeginDecl(DeclAsset, void*)

void AssetManager::BeginDecl(DeclAsset param_1,void *param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
  case 1:
    _glEnableClientState(0x8074);
    uVar1 = 0x8078;
    break;
  case 2:
  case 3:
    uVar1 = 0x8074;
    break;
  default:
    goto switchD_000093c8_caseD_4;
  }
  _glEnableClientState(uVar1);
switchD_000093c8_caseD_4:
  UpdateDecl(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// AssetManager::ProgressiveLoad()

void AssetManager::ProgressiveLoad(void)

{
  char **ppcVar1;
  int iVar2;
  
  if (0x27 < ProgressiveLoad()::s_ProgressiveIndex) {
    return;
  }
  ppcVar1 = &ProgressiveLoad()::s_ProgressiveTexture + ProgressiveLoad()::s_ProgressiveIndex;
  ProgressiveLoad()::s_ProgressiveIndex = ProgressiveLoad()::s_ProgressiveIndex + 1;
  iVar2 = Core::TextureManager::LoadTexture((Heap *)PTR_m_Heap_000180a4,*ppcVar1);
  if (iVar2 == 0) {
    return;
  }
  Core::Texture::Load();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// AssetManager::Init()

void AssetManager::Init(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  size_t sVar8;
  char *pcVar9;
  XMLNode *this;
  undefined4 *puVar10;
  XMLNode **this_00;
  undefined4 *local_24;
  
  puVar2 = PTR_m_Heap_000180a4;
  puVar1 = PTR_m_ScrapHeap_00018088;
  Core::StackHeap::Push();
  Core::XMLDocument::XMLDocument((XMLDocument *)&local_24);
  iVar3 = Core::XMLDocument::Load((XMLDocument *)&local_24,"Settings/Tutorials.xml",(Heap *)puVar1);
  if (iVar3 != 0) {
    puVar10 = (undefined4 *)0x0;
    for (this_00 = (XMLNode **)*local_24; this_00 != (XMLNode **)0x0;
        this_00 = (XMLNode **)this_00[1]) {
      this_00[2][(int)this_00[3]] = (XMLNode)0x0;
      puVar4 = (undefined4 *)_strcmp((char *)this_00[2],"Page");
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar5 = (undefined4 *)(***(code ***)puVar2)(puVar2,0x18,4), puVar5 != (undefined4 *)0x0))
      {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        uVar6 = Core::XMLNode::AttributeInt((XMLNode *)this_00,"stringID",0,true);
        if (puVar10 != (undefined4 *)0x0) {
          puVar10[4] = puVar5;
          puVar5[5] = puVar10;
        }
        else {
          puVar4 = &m_TutorialInfo;
        }
        *puVar5 = uVar6;
        if (puVar10 == (undefined4 *)0x0) {
          *puVar4 = puVar5;
        }
        for (this = *this_00; puVar10 = puVar5, this != (XMLNode *)0x0;
            this = *(XMLNode **)(this + 4)) {
          *(undefined *)(*(int *)(this + 8) + *(int *)(this + 0xc)) = 0;
          iVar3 = _strcmp(*(char **)(this + 8),"Image");
          if (iVar3 == 0) {
            pcVar7 = (char *)Core::XMLNode::Attribute(this,"filename",(char *)0x0,true);
            uVar6 = Core::XMLNode::AttributeInt(this,"x",0,true);
            puVar5[2] = uVar6;
            uVar6 = Core::XMLNode::AttributeInt(this,"y",0,true);
            puVar5[3] = uVar6;
            sVar8 = _strlen(pcVar7);
            pcVar9 = (char *)(***(code ***)puVar2)(puVar2,sVar8 + 1,1);
            puVar5[1] = pcVar9;
            _strcpy(pcVar9,pcVar7);
          }
        }
      }
    }
    if (puVar10 != (undefined4 *)0x0) {
      puVar10[4] = puVar10;
    }
    if (m_TutorialInfo != 0) {
      *(int *)(m_TutorialInfo + 0x14) = m_TutorialInfo;
    }
  }
  Core::StackHeap::Pop();
  return;
}



// Level::GetGridPos(unsigned int, unsigned int)

void __thiscall Level::GetGridPos(Level *this,uint param_1,uint param_2)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  
  fVar1 = m_CellSize;
  fVar2 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)this = m_GridStart + (fVar2 + 0.5) * m_CellSize;
  fVar2 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(this + 4) = DAT_00019e80 + (fVar2 + 0.5) * fVar1;
  return;
}



// Level::AddQueueItem(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
// GridCellInfo*)

void Level::AddQueueItem(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                        GridCellInfo *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*(byte *)(m_Grid + param_4 * 8) & 1) != 0) {
    return;
  }
  uVar5 = ((byte)param_6[param_4 * 4 + 3] & 0x1f) << 4 | (uint)((byte)param_6[param_4 * 4 + 2] >> 4)
  ;
  if (uVar5 == 0) {
    uVar4 = (uint)m_QueuePush;
    uVar5 = uVar4 + 1;
    m_QueuePush = (ushort)uVar5;
    param_6[param_4 * 4 + 2] =
         (GridCellInfo)((byte)param_6[param_4 * 4 + 2] & 0xf | (byte)((uVar5 & 0xf) << 4));
    param_6[param_4 * 4 + 3] =
         (GridCellInfo)((byte)param_6[param_4 * 4 + 3] & 0xe0 | (byte)(uVar5 * 0x800000 >> 0x1b));
    m_QueuePush = m_QueuePush % 400;
    iVar1 = uVar4 * 4;
    (&DAT_00019eb9)[iVar1] = (&DAT_00019eb9)[iVar1] & 0x7f | (byte)((param_4 & 1) << 7);
    (&DAT_00019eba)[iVar1] = (char)((param_4 & 0xffff) >> 1);
    (&DAT_00019ebb)[iVar1] =
         (byte)((param_5 & 7) << 5) | (byte)(((param_4 & 0xffff) << 0x12) >> 0x1b);
    iVar2 = DAT_00019e8a - param_2;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    uVar5 = iVar2 + param_3;
    (&m_PathFindingQueue)[uVar4 * 4] = (char)uVar5;
  }
  else {
    iVar3 = uVar5 - 1;
    iVar2 = DAT_00019e8a - param_2;
    iVar1 = iVar3 * 4;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    uVar5 = iVar2 + param_3;
    if (((uint)(byte)(&m_PathFindingQueue)[iVar3 * 4] | ((byte)(&DAT_00019eb9)[iVar1] & 0x7f) << 8)
        <= uVar5) {
      return;
    }
    (&DAT_00019eb9)[iVar1] =
         (byte)((byte)(&DAT_00019eb9)[iVar1] & 0x7f) | (byte)((param_4 & 1) << 7);
    (&DAT_00019eba)[iVar1] = (char)((param_4 & 0xffff) >> 1);
    (&DAT_00019ebb)[iVar1] =
         (byte)((param_5 & 7) << 5) | (byte)(((param_4 & 0xffff) << 0x12) >> 0x1b);
    (&m_PathFindingQueue)[iVar3 * 4] = (char)uVar5;
  }
  (&DAT_00019eb9)[iVar1] = (&DAT_00019eb9)[iVar1] & 0x80 | (byte)((uVar5 << 0x11) >> 0x19);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Level::BoundsCheckCamera()

void Level::BoundsCheckCamera(void)

{
  float fVar1;
  float fVar2;
  
  fVar2 = m_MinScale;
  if ((m_Scale < m_MinScale) || (fVar2 = 1.3, m_Scale != 1.3 && m_Scale < 1.3 == NAN(m_Scale))) {
    m_Scale = fVar2;
  }
  fVar1 = 240.0 - m_LookAt * m_Scale;
  fVar2 = 160.0 - m_Scale * DAT_00019e70;
  if (fVar1 != 0.0 && fVar1 < 0.0 == NAN(fVar1)) {
    m_LookAt = m_LookAt + fVar1 / m_Scale;
  }
  if (fVar2 != 0.0 && fVar2 < 0.0 == NAN(fVar2)) {
    DAT_00019e70 = DAT_00019e70 + fVar2 / m_Scale;
  }
  fVar1 = fVar1 + m_Scale * m_Bounds;
  if (fVar1 < 480.0) {
    m_LookAt = m_LookAt - (480.0 - fVar1) / m_Scale;
  }
  fVar2 = fVar2 + m_Scale * DAT_00019e78;
  if (fVar2 < 320.0) {
    DAT_00019e70 = DAT_00019e70 - (320.0 - fVar2) / m_Scale;
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Level::NotTryingToBuild()

void Level::NotTryingToBuild(void)

{
  m_TryToBuild = 0;
  return;
}



// Level::DestructionAt(unsigned int, unsigned int)

void Level::DestructionAt(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  undefined4 uStack_10;
  
  if ((m_Destruction != 0) && (param_2 < DAT_00019e86)) {
    iVar1 = param_2 * 0x10;
    *(undefined *)(m_Destruction + iVar1 + 0xd) = 1;
    *(undefined *)(iVar1 + m_Destruction + 0xc) = 0;
    *(undefined4 *)(iVar1 + m_Destruction + 8) = 0;
    puVar2 = (undefined4 *)(iVar1 + m_Destruction);
    GetGridPos((Level *)&local_14,param_1,param_2);
    *puVar2 = local_14;
    puVar2[1] = uStack_10;
  }
  return;
}



// Level::RenderRingArea(float, float, float, Color const&, Color const&)

void Level::RenderRingArea(float param_1,float param_2,float param_3,Color *param_4,Color *param_5)

{
  AssetManager::BeginDecl(2,&m_SelectVerts);
  _glEnable(0xbe2);
  _glPushMatrix();
  _glTranslatef(param_1,param_2,0);
  _glScalef(param_3,param_3,0);
  _glColor4ub(*param_4,param_4[1],param_4[2],param_4[3]);
  _glDrawArrays(6,0,0x1c);
  AssetManager::UpdateDecl(2,&DAT_0001a500);
  _glColor4ub(*param_5,param_5[1],param_5[2],param_5[3]);
  _glLineWidth(0x40400000);
  _glDrawArrays(3,0,0x1b);
  _glColor4ub(0xff,0xff,0xff,0xff);
  _glPopMatrix();
  _glDisable(0xbe2);
  AssetManager::EndDecl(2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Level::DeselectTower()

void Level::DeselectTower(void)

{
  if (m_SelectedTower == 0) {
    return;
  }
  Sounds::Play(3,false);
  m_SelectedTower = 0;
  return;
}



// Level::PathFind(GridCellInfo*)

void Level::PathFind(GridCellInfo *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  GridCellInfo GVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  m_PathFindingQueueSize = 0;
  if ((param_1 == (GridCellInfo *)0x0) && (param_1 = m_GridInfo, m_GridInfo == (GridCellInfo *)0x0))
  {
    m_PathFindingQueueSize = 0;
    return;
  }
  _memset(param_1,0,(uint)DAT_00019e86 * (uint)m_GridSize * 4);
  m_QueuePop = 0;
  m_QueuePush = 0;
  uVar5 = (uint)m_Exit;
  uVar6 = (uint)DAT_00019e8a;
  uVar9 = 4;
  uVar7 = 1;
  uVar8 = uVar6 * m_GridSize + uVar5;
  do {
    AddQueueItem(uVar5,uVar6,uVar7,uVar8,uVar9,param_1);
LAB_00009e94:
    do {
      uVar7 = (uint)m_QueuePop;
      if (m_QueuePush == uVar7) {
        return;
      }
      m_QueuePop = (short)(uVar7 + 1) + (short)((uVar7 + 1 & 0xffff) / 400) * -400;
      iVar1 = uVar7 * 4;
      uVar6 = (uint)(byte)(&DAT_00019eba)[iVar1] << 1 | (uint)((byte)(&DAT_00019eb9)[iVar1] >> 7) |
              ((byte)(&DAT_00019ebb)[iVar1] & 0x1f) << 9;
      param_1[uVar6 * 4 + 2] = (GridCellInfo)((byte)param_1[uVar6 * 4 + 2] & 0xf);
      param_1[uVar6 * 4 + 3] = (GridCellInfo)((byte)param_1[uVar6 * 4 + 3] & 0xe0);
      bVar3 = (&DAT_00019eb9)[iVar1];
      iVar2 = ((uint)(byte)(&DAT_00019eba)[iVar1] << 1 | (uint)(bVar3 >> 7) |
              ((byte)(&DAT_00019ebb)[iVar1] & 0x1f) << 9) * 4;
      uVar6 = (uint)CONCAT11(param_1[iVar2 + 1],param_1[iVar2]) |
              ((byte)param_1[iVar2 + 2] & 0xf) << 0x10;
      if (uVar6 == 0) {
        GVar4 = *(GridCellInfo *)(&m_PathFindingQueue + uVar7 * 4);
      }
      else {
        GVar4 = *(GridCellInfo *)(&m_PathFindingQueue + uVar7 * 4);
        if (uVar6 <= ((uint)(byte)GVar4 | (bVar3 & 0x7f) << 8)) goto LAB_00009e94;
      }
      param_1[iVar2] = GVar4;
      param_1[iVar2 + 1] = (GridCellInfo)(bVar3 & 0x7f);
      param_1[iVar2 + 2] = (GridCellInfo)((byte)param_1[iVar2 + 2] & 0xf0);
      uVar6 = (uint)(byte)(&DAT_00019eba)[iVar1] << 1 | (uint)((byte)(&DAT_00019eb9)[iVar1] >> 7) |
              ((byte)(&DAT_00019ebb)[iVar1] & 0x1f) << 9;
      param_1[uVar6 * 4 + 3] =
           (GridCellInfo)((&DAT_00019ebb)[iVar1] & 0xe0 | (byte)param_1[uVar6 * 4 + 3] & 0x1f);
      bVar3 = (&DAT_00019eb9)[iVar1];
      uVar8 = (uint)m_GridSize;
      uVar9 = (uint)(byte)(&DAT_00019eba)[iVar1] << 1 | (uint)(bVar3 >> 7) |
              ((byte)(&DAT_00019ebb)[iVar1] & 0x1f) << 9;
      uVar5 = ___modsi3(uVar9,uVar8);
      uVar5 = uVar5 & 0xffff;
      uVar6 = ___divsi3(uVar9,uVar8);
      uVar6 = uVar6 & 0xffff;
      if (uVar5 != 0) {
        AddQueueItem(uVar5 - 1,uVar6,
                     ((uint)(byte)(&m_PathFindingQueue)[uVar7 * 4] | (bVar3 & 0x7f) << 8) + 1,
                     uVar9 - 1,1,param_1);
        uVar8 = (uint)m_GridSize;
      }
      if (uVar6 != 0) {
        AddQueueItem(uVar5,uVar6 - 1,
                     ((uint)(byte)(&m_PathFindingQueue)[uVar7 * 4] |
                     ((byte)(&DAT_00019eb9)[iVar1] & 0x7f) << 8) + 1,
                     ((uint)(byte)(&DAT_00019eba)[iVar1] << 1 |
                      (uint)((byte)(&DAT_00019eb9)[iVar1] >> 7) |
                     ((byte)(&DAT_00019ebb)[iVar1] & 0x1f) << 9) - uVar8,2,param_1);
        uVar8 = (uint)m_GridSize;
      }
      if (uVar6 + 1 < (uint)DAT_00019e86) {
        AddQueueItem(uVar5,uVar6 + 1,
                     ((uint)(byte)(&m_PathFindingQueue)[uVar7 * 4] |
                     ((byte)(&DAT_00019eb9)[iVar1] & 0x7f) << 8) + 1,
                     uVar8 + ((uint)(byte)(&DAT_00019eba)[iVar1] << 1 |
                              (uint)((byte)(&DAT_00019eb9)[iVar1] >> 7) |
                             ((byte)(&DAT_00019ebb)[iVar1] & 0x1f) << 9),0,param_1);
        uVar8 = (uint)m_GridSize;
      }
      uVar5 = uVar5 + 1;
    } while (uVar8 <= uVar5);
    uVar7 = ((uint)(byte)(&m_PathFindingQueue)[uVar7 * 4] |
            ((byte)(&DAT_00019eb9)[iVar1] & 0x7f) << 8) + 1;
    uVar9 = 3;
    uVar8 = ((uint)(byte)(&DAT_00019eba)[iVar1] << 1 | (uint)((byte)(&DAT_00019eb9)[iVar1] >> 7) |
            ((byte)(&DAT_00019ebb)[iVar1] & 0x1f) << 9) + 1;
  } while( true );
}



// Level::CreateTower(TowerType, unsigned short, unsigned short, bool)

void Level::CreateTower(TowerType param_1,ushort param_2,ushort param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (uint)m_GridSize * (uint)param_3 + (uint)param_2;
  iVar1 = iVar2 * 8;
  *(byte *)(m_Grid + iVar2 * 8) = *(byte *)(m_Grid + iVar2 * 8) | 1;
  *(byte *)(m_Grid + iVar2 * 8) = *(byte *)(m_Grid + iVar2 * 8) | 4;
  *(undefined4 *)(iVar1 + m_Grid + 4) = (&m_Towers)[m_TowerCount];
  m_TowerCount = m_TowerCount + 1;
  Tower::Init(*(Tower **)(iVar1 + m_Grid + 4),param_1,param_2,param_3);
  *(byte *)(m_Grid + iVar2 * 8) = *(byte *)(m_Grid + iVar2 * 8) & 199 | (byte)((param_1 & 7) << 3);
  *(byte *)(m_Grid + iVar2 * 8) = *(byte *)(m_Grid + iVar2 * 8) & 0x3f;
  iVar1 = iVar1 + m_Grid;
  *(byte *)(iVar1 + 1) = *(byte *)(*(int *)(iVar1 + 4) + 0x15) & 0x3f | *(byte *)(iVar1 + 1) & 0xc0;
  if (param_4) {
    PathFind((GridCellInfo *)0x0);
  }
  Sounds::Play(7,false);
  return;
}



// Level::CanBuild(unsigned short, unsigned short)

undefined4 Level::CanBuild(ushort param_1,ushort param_2)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  GridCellInfo *pGVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  puVar4 = PTR_m_ScrapHeap_00018088;
  if (((uint)param_1 < (uint)m_GridSize) && ((uint)param_2 < (uint)DAT_00019e86)) {
    iVar8 = (uint)m_GridSize * (uint)param_2 + (uint)param_1;
    bVar2 = *(byte *)(m_Grid + iVar8 * 8);
    uVar10 = bVar2 & 3;
    if ((bVar2 & 3) == 0) {
      Core::StackHeap::Push();
      *(byte *)(m_Grid + iVar8 * 8) = *(byte *)(m_Grid + iVar8 * 8) | 1;
      pGVar5 = (GridCellInfo *)
               (***(code ***)puVar4)(puVar4,(uint)DAT_00019e86 * (uint)m_GridSize * 4,4);
      PathFind(pGVar5);
      puVar6 = &DAT_00019e96;
      *(byte *)(m_Grid + iVar8 * 8) = *(byte *)(m_Grid + iVar8 * 8) & 0xfe;
      while( true ) {
        if (uVar10 == m_EntranceCount) {
          uVar10 = 0;
          while( true ) {
            if (uVar10 == m_CreepCount) {
              Core::StackHeap::Pop();
              return 1;
            }
            if ((*(int *)((&m_Creeps)[uVar10] + 0x14) == 4) &&
               (uVar7 = (uint)*(ushort *)((&m_Creeps)[uVar10] + 0x40),
               ((uint)CONCAT11(pGVar5[uVar7 * 4 + 1],pGVar5[uVar7 * 4]) |
               ((byte)pGVar5[uVar7 * 4 + 2] & 0xf) << 0x10) == 0)) break;
            uVar10 = uVar10 + 1;
          }
          Core::StackHeap::Pop();
          return 0;
        }
        uVar3 = *puVar6;
        puVar1 = puVar6 + -1;
        puVar6 = puVar6 + 6;
        iVar9 = (uint)uVar3 * (uint)m_GridSize + (uint)*puVar1;
        iVar8 = iVar9 * 4;
        if (((uint)CONCAT11(pGVar5[iVar8 + 1],pGVar5[iVar8]) |
            ((byte)pGVar5[iVar8 + 2] & 0xf) << 0x10) == 0) break;
        uVar10 = uVar10 + 1;
      }
      Core::StackHeap::Pop();
      _printf("Failed due to exit %i (%i,%i = %i) has cost %i\n",uVar10,
              (uint)(ushort)(&m_Entrance)[uVar10 * 6],(uint)(ushort)(&DAT_00019e96)[uVar10 * 6],
              iVar9,(uint)CONCAT11(pGVar5[iVar8 + 1],pGVar5[iVar8]) |
                    ((byte)pGVar5[iVar8 + 2] & 0xf) << 0x10);
      return 0;
    }
  }
  return 0;
}



// Level::TryingToBuild(TowerType, unsigned short, unsigned short)

void Level::TryingToBuild(TowerType param_1,ushort param_2,ushort param_3)

{
  m_TryToBuild = 1;
  DAT_0001a5dc = param_1;
  DAT_0001a5e0 = param_2;
  DAT_0001a5e2 = param_3;
  DAT_0001a5d9 = CanBuild(param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Level::ConvertGridToTowers()

void Level::ConvertGridToTowers(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  for (uVar4 = 0; uVar4 < DAT_00019e86; uVar4 = uVar4 + 1) {
    iVar1 = iVar3 << 3;
    for (uVar2 = 0; uVar2 < m_GridSize; uVar2 = uVar2 + 1) {
      if ((*(byte *)(iVar1 + m_Grid) & 4) != 0) {
        *(undefined4 *)(iVar1 + m_Grid + 4) = (&m_Towers)[m_TowerCount];
        m_TowerCount = m_TowerCount + 1;
        Tower::Init(*(Tower **)(iVar1 + m_Grid + 4),*(byte *)(iVar1 + m_Grid) >> 3 & 7,(ushort)uVar2
                    ,(ushort)uVar4);
        Tower::SetDirection(*(Tower **)(iVar1 + m_Grid + 4),*(byte *)(iVar1 + m_Grid + 1) & 0x3f);
        *(byte *)(*(int *)(iVar1 + m_Grid + 4) + 0x14) = *(byte *)(iVar1 + m_Grid) >> 6;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 8;
    }
  }
  PathFind((GridCellInfo *)0x0);
  return;
}



// Level::RemoveTower(Tower*)

void Level::RemoveTower(Tower *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_1 == (Tower *)0x0) {
    return;
  }
  for (uVar2 = 0; uVar2 != m_TowerCount; uVar2 = uVar2 + 1) {
    if ((Tower *)(&m_Towers)[uVar2] == param_1) {
      uVar4 = m_TowerCount - 1;
      m_TowerCount = (ushort)uVar4;
      uVar4 = uVar4 & 0xffff;
      uVar5 = (&m_Towers)[uVar4];
      (&m_Towers)[uVar4] = param_1;
      (&m_Towers)[uVar2] = uVar5;
      iVar1 = 0;
      iVar3 = m_Grid;
      goto LAB_0000a3fc;
    }
  }
LAB_0000a414:
  PathFind((GridCellInfo *)0x0);
  Projectiles::SoldTower(param_1);
  Sounds::Play(9,false);
  return;
LAB_0000a3fc:
  if (iVar1 == (uint)m_GridSize * (uint)DAT_00019e86) goto LAB_0000a414;
  if (param_1 == *(Tower **)(iVar3 + 4)) {
    *(undefined4 *)(iVar3 + 4) = 0;
    *(byte *)(m_Grid + iVar1 * 8) = *(byte *)(m_Grid + iVar1 * 8) & 0xfb;
    *(byte *)(m_Grid + iVar1 * 8) = *(byte *)(m_Grid + iVar1 * 8) & 199;
    *(byte *)(m_Grid + iVar1 * 8) = *(byte *)(m_Grid + iVar1 * 8) & 0x3f;
    iVar3 = iVar1 * 8 + m_Grid;
    *(byte *)(iVar3 + 1) = *(byte *)(iVar3 + 1) & 0xc0;
    *(byte *)(m_Grid + iVar1 * 8) = *(byte *)(m_Grid + iVar1 * 8) & 0xfe;
    goto LAB_0000a414;
  }
  iVar1 = iVar1 + 1;
  iVar3 = iVar3 + 8;
  goto LAB_0000a3fc;
}



// Level::GetTowerInRange(Core::Math::Vector2 const&, float)

undefined4 Level::GetTowerInRange(Vector2 *param_1,float param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint in_fpscr;
  undefined4 in_cr7;
  undefined4 in_cr8;
  float in_s16;
  float fVar7;
  undefined4 local_2c;
  
  fVar7 = 0.0;
  coprocessor_function(10,2,0,in_cr8,in_cr7,in_cr7);
  iVar5 = 0;
  local_2c = 0;
  for (uVar6 = 0; uVar6 < m_TowerCount; uVar6 = uVar6 + 1) {
    fVar3 = (float)Core::Math::Vector2::DistanceSqr
                             (param_1,(Vector2 *)(*(int *)((int)&m_Towers + iVar5) + 4));
    uVar1 = in_fpscr & 0xfffffff | (uint)(in_s16 < fVar3) << 0x1f | (uint)(in_s16 == fVar3) << 0x1e;
    in_fpscr = uVar1 | (uint)(NAN(in_s16) || NAN(fVar3)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      uVar4 = Tower::ResaleValue();
      fVar3 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar3) << 0x1f;
      if (SUB41(in_fpscr >> 0x1f,0)) {
        uVar4 = Tower::ResaleValue();
        local_2c = *(undefined4 *)((int)&m_Towers + iVar5);
        fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      }
    }
    iVar5 = iVar5 + 4;
  }
  return local_2c;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Level::Destroy()

void Level::Destroy(void)

{
  m_State = 0;
  m_Waves = 0;
  m_Grid = 0;
  m_GridInfo = 0;
  m_WaveCount = 0;
  m_MaxWaves = 0;
  m_Wave = 0;
  m_CreepCount = 0;
  m_TowerCount = 0;
  m_EntranceCount = 0;
  m_PathFindingQueueSize = 0;
  m_SelectedTower = 0;
  m_Overlays = 0;
  m_TryToBuild = 0;
  m_GridSize = 0;
  DAT_00019e86 = 0;
  m_Destruction = 0;
  if (m_Background != 0) {
    Core::Texture::Unload();
    m_Background = 0;
  }
  Projectiles::Destroy();
  return;
}



// Level::SelectTowerAt(Core::Math::Vector2&)

void Level::SelectTowerAt(Vector2 *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_cr7;
  undefined4 in_cr8;
  float fVar6;
  ulonglong in_d8;
  
  uVar3 = 0;
  coprocessor_function(10,6,1,in_cr7,in_cr7,in_cr7);
  uVar4 = (uint)m_TowerCount;
  coprocessor_function(10,2,5,in_cr8,in_cr7,in_cr7);
  iVar5 = 0;
  while (uVar3 != uVar4) {
    iVar2 = (&m_Towers)[uVar3];
    uVar3 = uVar3 + 1;
    fVar1 = (float)Core::Math::Vector2::DistanceSqr((Vector2 *)(iVar2 + 4),param_1);
    fVar6 = (float)in_d8;
    if (fVar6 != fVar1 && fVar6 < fVar1 == (NAN(fVar6) || NAN(fVar1))) {
      in_d8 = (ulonglong)(uint)fVar1;
      iVar5 = iVar2;
    }
  }
  if (iVar5 == 0) {
    DeselectTower();
    return;
  }
  Sounds::Play(8,false);
  m_SelectedTower = iVar5;
  return;
}



// Level::GetCreepInRange(Core::Math::Vector2 const&, float)

int Level::GetCreepInRange(Vector2 *param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined4 in_cr7;
  undefined4 in_cr8;
  float fVar8;
  ulonglong in_d8;
  
  iVar6 = 0;
  coprocessor_function(10,2,0,in_cr8,in_cr7,in_cr7);
  uVar5 = (uint)m_CreepCount;
  for (uVar4 = 0; uVar4 != uVar5; uVar4 = uVar4 + 1) {
    iVar3 = (&m_Creeps)[uVar4];
    uVar2 = *(uint *)(iVar3 + 0x14);
    bVar7 = 3 < uVar2;
    if (uVar2 != 4) {
      bVar7 = uVar2 != 1;
    }
    if ((!bVar7 || (uVar2 == 4 || uVar2 == 2)) || (uVar2 == 3)) {
      fVar1 = (float)Core::Math::Vector2::DistanceSqr(param_1,(Vector2 *)(iVar3 + 0x18));
      fVar8 = (float)in_d8;
      if (fVar8 != fVar1 && fVar8 < fVar1 == (NAN(fVar8) || NAN(fVar1))) {
        in_d8 = (ulonglong)(uint)fVar1;
        iVar6 = iVar3;
      }
    }
  }
  return iVar6;
}



// Level::GetGridPos(Core::Math::Vector2 const&)

void __thiscall Level::GetGridPos(Level *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 1.0 / m_Scale;
  fVar2 = *(float *)(param_1 + 4);
  *(float *)this = m_LookAt + (*(float *)param_1 - 240.0) * fVar1;
  *(float *)(this + 4) = DAT_00019e70 + (fVar2 - 160.0) * fVar1;
  return;
}



// Level::GetScreenPos(Core::Math::Vector2 const&)

void __thiscall Level::GetScreenPos(Level *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = m_Scale;
  fVar2 = *(float *)(param_1 + 4) - DAT_00019e70;
  *(float *)this = (*(float *)param_1 - m_LookAt) * m_Scale + 240.0;
  *(float *)(this + 4) = fVar2 * fVar1 + 160.0;
  return;
}



// Level::GetGridCoord(Core::Math::Vector2 const&, unsigned int&, unsigned int&)

void Level::GetGridCoord(Vector2 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  float local_18;
  float local_14;
  
  local_18 = *(float *)param_1 - m_GridStart;
  local_14 = *(float *)(param_1 + 4) - DAT_00019e80;
  Core::Math::Vector2::operator/((Vector2 *)&local_20,(float)&local_18);
  uVar1 = VectorFloatToUnsigned(local_20,3);
  *param_2 = uVar1;
  uVar1 = VectorFloatToUnsigned(uStack_1c,3);
  *param_3 = uVar1;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Level::Render()

void Level::Render(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  Color *pCVar7;
  int *piVar8;
  uint uVar9;
  Vector2 *pVVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  int iVar14;
  uint in_fpscr;
  undefined4 in_cr6;
  undefined4 in_cr7;
  ulonglong uVar15;
  Color *pCVar16;
  uint local_5c;
  Level aLStack_58 [4];
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  Color local_40;
  undefined local_3f;
  undefined local_3e;
  undefined local_3d;
  Color local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  Color local_38;
  undefined local_37;
  undefined local_36;
  undefined local_35;
  Color local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  Color local_30;
  undefined local_2f;
  undefined local_2e;
  undefined local_2d;
  Color local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  
  if (m_Background == (Texture *)0x0) {
    _glClearColor(0,0,0,0x3f800000);
    _glClear(0x4000);
  }
  else {
    _glPushMatrix();
    _glTranslatef(240.0 - m_Scale * m_LookAt,160.0 - m_Scale * DAT_00019e70,0);
    _glScalef(m_Scale,m_Scale,0x3f800000);
    AssetManager::BeginDecl(0,(void *)0x0);
    if (m_Background != (Texture *)0x0) {
      AssetManager::UpdateDecl(0,&m_BackgroundVerts);
      Core::Texture::Begin(m_Background,0);
      _glDrawArrays(5,0,4);
      Core::Texture::End(m_Background,0);
    }
    _glEnable(0xbe2);
    _glBlendFunc(1,0x303);
    _glBlendFunc(1,0x303);
    Projectiles::PreRender();
    GetGridPos(aLStack_58,0,0);
    uVar13 = 0;
    iVar14 = 0;
    for (local_5c = 0; uVar15 = (ulonglong)(uint)local_54, local_5c < DAT_00019e86;
        local_5c = local_5c + 1) {
      piVar8 = &m_Creeps + uVar13;
      for (; uVar13 < m_CreepCount; uVar13 = uVar13 + 1) {
        iVar3 = *piVar8;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar3 + 0x1c) == (float)uVar15) << 0x1e
                   | (uint)((float)uVar15 <= *(float *)(iVar3 + 0x1c)) << 0x1d;
        bVar1 = (byte)(in_fpscr >> 0x18);
        if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) break;
        if ((*(int *)(iVar3 + 0x14) != 3) &&
           (PTR_m_Info_00018054[*(int *)(iVar3 + 0x10) * 0x6c + 0x40] == '\0')) {
          Creep::Render();
        }
        piVar8 = piVar8 + 1;
      }
      iVar3 = iVar14 << 3;
      for (uVar9 = 0; fVar5 = (float)uVar15, uVar9 < m_GridSize; uVar9 = uVar9 + 1) {
        if (*(int *)(m_Grid + iVar3 + 4) != 0) {
          Tower::Render();
          iVar6 = iVar3 + m_Grid;
          *(byte *)(iVar6 + 1) =
               *(byte *)(*(int *)(iVar6 + 4) + 0x15) & 0x3f | *(byte *)(iVar6 + 1) & 0xc0;
          *(byte *)(iVar3 + m_Grid) =
               *(byte *)(iVar3 + m_Grid) & 0x3f |
               (byte)((*(byte *)(*(int *)(iVar3 + m_Grid + 4) + 0x14) & 3) << 6);
        }
        iVar14 = iVar14 + 1;
        iVar3 = iVar3 + 8;
      }
      pfVar4 = (float *)(m_Destruction + local_5c * 0x10);
      if (*(char *)((int)pfVar4 + 0xd) != '\0') {
        local_50 = 0x42800000;
        local_4c = 0x42c00000;
        local_48 = *pfVar4 - 32.0;
        local_44 = pfVar4[1] - 50.0;
        if (*(char *)(pfVar4 + 3) == '\0') {
          uVar9 = VectorFloatToUnsigned(pfVar4[2],3);
          Core::Sprite::Render
                    ((Sprite *)PTR_m_Destruction_000180dc,(Vector2 *)&local_48,(Vector2 *)&local_50,
                     uVar9 & 0xff);
        }
        else {
          _glBlendFunc(0x302,0x303);
          uVar9 = VectorFloatToUnsigned(*(undefined4 *)(m_Destruction + local_5c * 0x10 + 8),3);
          _glColor4ub(0xff,0xff,0xff,uVar9 & 0xff);
          Core::Sprite::Render
                    ((Sprite *)PTR_m_Destruction_000180dc,(Vector2 *)&local_48,(Vector2 *)&local_50,
                     0x13);
          _glColor4ub(0xff,0xff,0xff,0xff);
          _glBlendFunc(1,0x303);
        }
      }
      local_54 = fVar5 + m_CellSize;
    }
    for (uVar9 = 0; pVVar10 = m_Overlays, uVar9 < m_CreepCount; uVar9 = uVar9 + 1) {
      if (((*(int *)((&m_Creeps)[uVar9] + 0x14) == 3) ||
          (PTR_m_Info_00018054[*(int *)((&m_Creeps)[uVar9] + 0x10) * 0x6c + 0x40] != '\0')) ||
         (uVar13 <= uVar9)) {
        Creep::Render();
      }
    }
    for (; pVVar10 != (Vector2 *)0x0; pVVar10 = *(Vector2 **)(pVVar10 + 0x20)) {
      Core::Sprite::Render((Sprite *)(pVVar10 + 8),pVVar10,(int)*(float *)(pVVar10 + 0x14));
    }
    Projectiles::Render();
    _glDisable(0xbe2);
    _glBlendFunc(0x302,0x303);
    AssetManager::EndDecl(0);
    iVar14 = DAT_0001a5dc;
    if (m_TryToBuild != '\0') {
      GetGridPos((Level *)&local_48,(uint)DAT_0001a5e0,(uint)DAT_0001a5e2);
      if (DAT_0001a5d9 == '\0') {
        fVar5 = *(float *)(PTR_m_Info_0001807c + iVar14 * 0xf4 + 0x40);
        local_31 = 0x60;
        local_34 = (Color)0xff;
        local_38 = (Color)0xff;
        local_37 = 0x80;
        local_35 = 0x80;
        pCVar16 = &local_38;
        pCVar7 = &local_34;
        local_36 = 0;
        local_33 = 0;
        local_32 = 0;
      }
      else {
        fVar5 = *(float *)(PTR_m_Info_0001807c + iVar14 * 0xf4 + 0x40);
        local_2b = 0xff;
        local_29 = 0x60;
        local_2f = 0x80;
        local_2e = 0x80;
        local_2d = 0x80;
        pCVar16 = &local_30;
        pCVar7 = &local_2c;
        local_2c = (Color)0x0;
        local_2a = 0;
        local_30 = (Color)0x0;
      }
      RenderRingArea(local_48,local_44,fVar5,pCVar7,pCVar16);
      _glEnable(0xbe2);
      AssetManager::BeginDecl(0,(void *)0x0);
      puVar2 = PTR_m_Info_0001807c;
      iVar14 = iVar14 * 0xf4;
      local_48 = local_48 -
                 *(float *)(PTR_m_Info_0001807c + iVar14 + 0x2c) *
                 *(float *)(PTR_m_Info_0001807c + iVar14 + 0x20);
      local_44 = local_44 -
                 *(float *)(PTR_m_Info_0001807c + iVar14 + 0x2c) *
                 *(float *)(PTR_m_Info_0001807c + iVar14 + 0x24);
      VectorUnsignedToFloat
                ((uint)*(ushort *)(PTR_m_Info_0001807c + iVar14 + 0x1a),(byte)(in_fpscr >> 0x15) & 3
                );
      local_50 = VectorUnsignedToFloat
                           ((uint)*(ushort *)(PTR_m_Info_0001807c + iVar14 + 0x18),
                            (byte)(in_fpscr >> 0x15) & 3);
      coprocessor_function(10,6,4,in_cr7,in_cr7,in_cr7);
      coprocessor_function(10,6,4,in_cr7,in_cr6,in_cr7);
      local_4c = local_50;
      if (DAT_0001a5d9 == '\0') {
        _glColor4ub(0xff,0,0,0xff);
      }
      Core::Sprite::Render
                ((Sprite *)(puVar2 + iVar14 + 0x14),(Vector2 *)&local_48,(Vector2 *)&local_50,
                 (uint)(*(ushort *)(puVar2 + iVar14 + 0x28) >> 1));
      _glColor4ub(0xff,0xff,0xff,0xff);
      AssetManager::EndDecl(0);
      _glDisable(0xbe2);
    }
    AssetManager::BeginDecl(3,(void *)0x0);
    _glEnable(0xbe2);
    for (uVar13 = 0; uVar13 < m_CreepCount; uVar13 = uVar13 + 1) {
      Creep::RenderHealth();
    }
    _glDisable(0xbe2);
    AssetManager::EndDecl(3);
    if (m_SelectedTower != 0) {
      fVar12 = *(float *)(m_SelectedTower + 4);
      fVar11 = *(float *)(m_SelectedTower + 8);
      fVar5 = (float)Tower::Range();
      local_39 = 0x60;
      local_3f = 0x80;
      local_3d = 0x80;
      local_3a = 0xff;
      local_3e = 0xff;
      local_3c = (Color)0x0;
      local_3b = 0;
      local_40 = (Color)0x0;
      RenderRingArea(fVar12,fVar11,fVar5,&local_3c,&local_40);
      _glEnable(0xbe2);
      AssetManager::BeginDecl(0,(void *)0x0);
      Tower::Render();
      AssetManager::EndDecl(0);
      _glDisable(0xbe2);
    }
    _glPopMatrix();
  }
  return;
}



// Level::SetFreezeAfterFast(CreepType, bool)

uint Level::SetFreezeAfterFast(CreepType param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (!param_2) {
    uVar4 = (uint)m_CreepCount;
    for (uVar1 = 0; uVar1 != uVar4; uVar1 = uVar1 + 1) {
      param_1 = (&m_Creeps)[uVar1];
      uVar3 = *(uint *)(param_1 + 0x14);
      bVar5 = 3 < uVar3;
      if (uVar3 != 4) {
        bVar5 = uVar3 != 1;
      }
      if (((!bVar5 || (uVar3 == 4 || uVar3 == 2)) || (uVar3 == 3)) &&
         (PTR_m_Info_00018054[*(int *)(param_1 + 0x10) * 0x6c + 0x44] != '\0')) {
        *(char *)(param_1 + 0x44) =
             (char)*(undefined2 *)(PTR_m_Info_00018054 + *(int *)(param_1 + 0x10) * 0x6c + 0x50) *
             '\x03';
      }
    }
    return param_1;
  }
  uVar4 = (uint)m_CreepCount;
  for (uVar1 = 0; uVar1 != uVar4; uVar1 = uVar1 + 1) {
    iVar2 = (&m_Creeps)[uVar1];
    uVar3 = *(uint *)(iVar2 + 0x14);
    bVar5 = 3 < uVar3;
    if (uVar3 != 4) {
      bVar5 = uVar3 != 1;
    }
    if (((!bVar5 || (uVar3 == 4 || uVar3 == 2)) || (uVar3 == 3)) &&
       (PTR_m_Info_00018054[*(int *)(iVar2 + 0x10) * 0x6c + 0x44] != '\0')) {
      *(char *)(iVar2 + 0x44) =
           (char)(*(ushort *)(PTR_m_Info_00018054 + *(int *)(iVar2 + 0x10) * 0x6c + 0x50) / 3);
    }
  }
  return uVar1;
}



// Level::Update(float, bool, bool)

void Level::Update(float param_1,bool param_2,bool param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  SoundDesc SVar5;
  CreepType CVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  CreepType *pCVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  uint in_fpscr;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 uVar20;
  float fVar21;
  ulonglong uVar22;
  float fVar23;
  undefined4 uVar25;
  longlong lVar24;
  undefined8 in_d10;
  uint local_78;
  uint local_74;
  uint local_6c;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_54 [5];
  int local_40;
  int local_3c;
  
  local_78 = (uint)param_3;
  uVar22 = (ulonglong)(uint)param_1 << 0x20;
  if (param_2) {
LAB_0000b878:
    piVar13 = &DAT_00019a0c;
    uVar8 = 1;
    while (uVar8 < m_CreepCount) {
      iVar9 = *piVar13;
      uVar8 = uVar8 + 1;
      if (*(float *)(iVar9 + 0x1c) < *(float *)(piVar13[-1] + 0x1c)) {
        *piVar13 = piVar13[-1];
        piVar13[-1] = iVar9;
      }
      piVar13 = piVar13 + 1;
    }
    return;
  }
  bVar18 = local_78 == 0;
  if (bVar18) {
    local_78 = 1;
  }
  coprocessor_function(10,6,5,in_cr10,in_cr8,in_cr7);
  if (!bVar18) {
    local_78 = 3;
  }
  coprocessor_function(10,2,5,in_cr10,in_cr8,in_cr7);
LAB_0000b844:
  local_78 = local_78 - 1;
  iVar9 = m_Overlays;
  if (local_78 != 0xffffffff) {
    for (; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x20)) {
      fVar7 = *(float *)(iVar9 + 0x14) + (float)(uVar22 >> 0x20) * *(float *)(iVar9 + 0x1c);
      *(float *)(iVar9 + 0x14) = fVar7;
      while (*(uint *)(iVar9 + 0x18) <= (uint)(int)fVar7) {
        fVar21 = (float)VectorUnsignedToFloat(*(uint *)(iVar9 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
        fVar7 = fVar7 - fVar21;
        *(float *)(iVar9 + 0x14) = fVar7;
      }
    }
    local_54[2] = iVar9;
    local_54[3] = iVar9;
    local_54[4] = iVar9;
    local_40 = iVar9;
    local_3c = iVar9;
    local_54[1] = 0;
    iVar9 = 1;
    for (uVar8 = 0; uVar8 < m_CreepCount; uVar8 = uVar8 + 1) {
      iVar10 = Creep::Update((Creep *)(&m_Creeps)[uVar8],(float)(uVar22 >> 0x20));
      uVar14 = *(uint *)((&m_Creeps)[uVar8] + 0x14);
      if (uVar14 == 7) {
LAB_0000b1e8:
        iVar11 = iVar9;
        if (uVar14 == 3) goto LAB_0000b1f0;
      }
      else {
        bVar18 = 3 < uVar14;
        bVar19 = uVar14 == 4;
        if (!bVar19) {
          bVar18 = uVar14 != 1;
        }
        bVar3 = uVar14 == 2;
        if (bVar18 && (!bVar19 && !bVar3)) {
          iVar10 = 0;
        }
        iVar11 = iVar9;
        iVar9 = iVar10;
        if (!bVar18 || (bVar19 || bVar3)) {
          iVar9 = 1;
          iVar11 = 0;
        }
        if (bVar18 && (!bVar19 && !bVar3)) goto LAB_0000b1e8;
LAB_0000b1f0:
        iVar9 = *(int *)((&m_Creeps)[uVar8] + 0x10);
        local_54[iVar9 + 1] = local_54[iVar9 + 1] + 1;
      }
      iVar9 = iVar11;
    }
    for (uVar8 = 0; uVar8 < m_TowerCount; uVar8 = uVar8 + 1) {
      Tower::Update((Tower *)(&m_Towers)[uVar8],(float)(uVar22 >> 0x20));
    }
    for (uVar8 = 0; uVar8 < DAT_00019e86; uVar8 = uVar8 + 1) {
      iVar10 = uVar8 * 0x10 + m_Destruction;
      if (*(char *)(iVar10 + 0xd) != '\0') {
        if (*(char *)(iVar10 + 0xc) == '\0') {
          fVar7 = *(float *)(iVar10 + 8) + (float)in_d10;
          *(float *)(iVar10 + 8) = fVar7;
          if (0x13 < (int)fVar7) {
            *(undefined4 *)(iVar10 + 8) = 0x437f0000;
            *(undefined *)(iVar10 + 0xc) = 1;
          }
        }
        else {
          fVar7 = *(float *)(iVar10 + 8) + (float)((ulonglong)in_d10 >> 0x20);
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar7 == 0.0) << 0x1e |
                     (uint)(0.0 <= fVar7) << 0x1d;
          *(float *)(iVar10 + 8) = fVar7;
          bVar2 = (byte)(in_fpscr >> 0x18);
          if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
            *(undefined *)(iVar10 + 0xd) = 0;
          }
        }
      }
    }
    uVar8 = 1;
    local_54[1] = local_54[1] + local_40 + local_3c;
    do {
      uVar14 = local_54[uVar8];
      if (uVar14 == 0) {
switchD_0000b308_caseD_4:
        if (5 < uVar8) goto code_r0x0000b3a0;
      }
      else {
        switch(uVar8) {
        case 1:
          Sounds::Play(0x20,true);
          if ((uVar14 < 2) || (Sounds::Play(0x21,true), uVar14 == 2)) goto switchD_0000b308_caseD_4;
          SVar5 = 0x22;
          break;
        case 2:
          Sounds::Play(0x23,true);
          if ((uVar14 < 2) || (Sounds::Play(0x24,true), uVar14 == 2)) goto switchD_0000b308_caseD_4;
          SVar5 = 0x25;
          break;
        case 3:
          SVar5 = 0x26;
          break;
        case 4:
          SVar5 = 0x27;
          break;
        default:
          goto switchD_0000b308_caseD_4;
        }
        Sounds::Play(SVar5,true);
      }
      uVar8 = uVar8 + 1;
    } while( true );
  }
  if (m_TryToBuild != '\0') {
    DAT_0001a5d9 = CanBuild(DAT_0001a5e0,DAT_0001a5e2);
  }
  goto LAB_0000b878;
code_r0x0000b3a0:
  Projectiles::Update((float)(uVar22 >> 0x20));
  iVar10 = m_Waves;
  puVar4 = PTR_m_Instance_000180d4;
  if (m_State == 0) {
    m_WaveWait = m_WaveWait - (float)(uVar22 >> 0x20);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(m_WaveWait == 0.0) << 0x1e |
               (uint)(0.0 <= m_WaveWait) << 0x1d;
    bVar2 = (byte)(in_fpscr >> 0x18);
    if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
      uVar8 = (uint)m_Wave;
      if (uVar8 < m_WaveCount) {
        m_CreepCount = 0;
        iVar17 = uVar8 * 0x1c + m_Waves;
        iVar9 = (uint)m_Difficulty * 0xc;
        iVar11 = iVar9 + iVar17;
        if (*(char *)(iVar11 + 4) != '\0') {
          *(undefined4 *)(PTR_m_Info_00018054 + iVar9 + *(int *)(iVar11 + 8) * 0x6c + 0x58) =
               *(undefined4 *)((m_Difficulty + 1) * 0xc + iVar17);
        }
        for (pCVar15 = *(CreepType **)(uVar8 * 0x1c + iVar10); pCVar15 != (CreepType *)0x0;
            pCVar15 = (CreepType *)pCVar15[2]) {
          uVar8 = (uint)m_CreepCount;
          m_CreepCount = m_CreepCount + 1;
          Creep::Init((Creep *)(&m_Creeps)[uVar8],*pCVar15,0,(float)pCVar15[1]);
        }
      }
      else {
        m_CreepCount = 0;
        uVar14 = uVar8 - m_WaveCount;
        if (99 < uVar14) {
          uVar14 = 100;
        }
        uVar16 = uVar14 >> 4;
        uVar1 = uVar14 + 3 >> 1;
        local_6c = uVar16 + 3;
        lVar24 = 0;
        local_64 = uVar14 / 5;
        uVar12 = (uVar8 / 10) * 2;
        bVar18 = uVar8 % 10 != 9;
        if (bVar18) {
          local_74 = 4;
        }
        else {
          uVar16 = uVar16 + 5;
          uVar8 = local_64;
        }
        if (!bVar18) {
          local_64 = uVar8 << 1;
          uVar12 = 2;
        }
        local_54[0] = uVar14 / 10 + 1;
        if (!bVar18) {
          local_74 = uVar12;
          local_6c = uVar16;
        }
        local_5c = 0;
        local_60 = 0;
        while( true ) {
          uVar25 = (undefined4)((ulonglong)lVar24 >> 0x20);
          uVar20 = (undefined4)(uVar22 >> 0x20);
          if (local_6c <= local_5c) break;
          CVar6 = Core::Math::Rand(6);
          if ((uVar14 < 0x32) && (iVar9 = Core::Math::Rand(local_74), iVar9 != 0)) {
            iVar9 = Core::Math::Rand(uVar1);
            uVar8 = iVar9 + *(int *)(&_minCreeps_28411 + CVar6 * 4);
            fVar23 = *(float *)(&_minTimeBetween_28409 + CVar6 * 4);
            fVar21 = *(float *)("333?333?" + CVar6 * 4) - fVar23;
            fVar7 = (float)Core::Math::RandF();
            bVar18 = false;
            fVar23 = fVar23 + fVar21 * fVar7;
            lVar24 = CONCAT44(uVar25,fVar23);
            uVar22 = CONCAT44(uVar20,fVar23);
          }
          else {
            iVar9 = Core::Math::Rand(uVar1);
            uVar8 = iVar9 + *(int *)(&_minCreeps_28411 + CVar6 * 4);
            fVar21 = *(float *)(&_minTimeBetween_28409 + CVar6 * 4);
            lVar24 = CONCAT44(uVar25,*(float *)("333?333?" + CVar6 * 4) - fVar21);
            fVar7 = (float)Core::Math::RandF();
            uVar22 = CONCAT44(uVar20,fVar21 + (float)lVar24 * fVar7);
            Core::Math::RandF();
            bVar18 = true;
            coprocessor_function(10,2,0,in_cr8,in_cr8,in_cr7);
          }
          if (CVar6 == 3) {
            bVar18 = true;
LAB_0000b6a8:
            for (uVar12 = 0; fVar7 = (float)((ulonglong)lVar24 >> 0x20), uVar12 != uVar8;
                uVar12 = uVar12 + 1) {
              uVar16 = (uint)m_CreepCount;
              if (uVar16 < 0x4b) {
                m_CreepCount = m_CreepCount + 1;
                Creep::Init((Creep *)(&m_Creeps)[uVar16],CVar6,0,fVar7);
                VectorSignedToFloat(m_Wave / 0x32,(byte)(in_fpscr >> 0x15) & 3);
                coprocessor_function(10,6,1,in_cr7,in_cr7,in_cr7);
                coprocessor_function(10,6,4,in_cr7,in_cr7,in_cr7);
                uVar20 = VectorFloatToUnsigned(m_Increase,3);
                uVar20 = VectorUnsignedToFloat(uVar20,(byte)(in_fpscr >> 0x15) & 3);
                *(undefined4 *)((&m_Creeps)[m_CreepCount] + 0x2c) = uVar20;
              }
              lVar24 = (ulonglong)(uint)(fVar7 + (float)uVar22) << 0x20;
            }
            if (bVar18) {
              fVar21 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
              fVar7 = fVar7 - fVar21 * (float)uVar22;
              fVar21 = (float)Core::Math::RandF();
              uVar22 = uVar22 & 0xffffffff00000000;
              lVar24 = (ulonglong)(uint)(fVar7 + fVar21 + fVar21) << 0x20;
            }
          }
          else {
            if (((int)CVar6 < 3) || (5 < (int)CVar6)) goto LAB_0000b6a8;
            if (local_60 < local_64) {
              local_60 = local_60 + local_54[0];
              uVar8 = local_54[0];
              goto LAB_0000b6a8;
            }
            local_5c = local_5c - 1;
          }
          local_5c = local_5c + 1;
        }
      }
      m_WaveWait = 0.0;
      m_State = 1;
      LoL::LevelStateChanged();
      Sounds::Play(6,false);
    }
  }
  else if ((m_State == 1) && (iVar9 != 0)) {
    LoL::ScoreFromWave();
    m_Wave = m_Wave + 1;
    if (m_Wave < m_WaveCount) {
      m_State = 0;
      m_WaveWait = m_TimeBetweenWaves;
    }
    else if (*(char *)(*(int *)puVar4 + 0x164) == '\0') {
      m_State = 2;
    }
    else {
      m_State = 0;
      m_WaveWait = m_TimeBetweenWaves;
    }
    LoL::LevelStateChanged();
  }
  goto LAB_0000b844;
}



// Level::GetAlistarInRange(Core::Math::Vector2 const&, float)

int Level::GetAlistarInRange(Vector2 *param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined4 in_cr7;
  undefined4 in_cr8;
  float fVar8;
  undefined8 in_d8;
  
  iVar6 = 0;
  uVar5 = (uint)m_CreepCount;
  for (uVar4 = 0; uVar4 != uVar5; uVar4 = uVar4 + 1) {
    iVar3 = (&m_Creeps)[uVar4];
    uVar2 = *(uint *)(iVar3 + 0x14);
    bVar7 = 3 < uVar2;
    if (uVar2 != 4) {
      bVar7 = uVar2 != 1;
    }
    if (((!bVar7 || (uVar2 == 4 || uVar2 == 2)) || (uVar2 == 3)) &&
       (PTR_m_Info_00018054[*(int *)(iVar3 + 0x10) * 0x6c + 0x43] != '\0')) {
      coprocessor_function(10,2,5,in_cr8,in_cr7,in_cr7);
      fVar1 = (float)Core::Math::Vector2::DistanceSqr(param_1,(Vector2 *)(iVar3 + 0x18));
      fVar8 = (float)in_d8;
      if (fVar8 != fVar1 && fVar8 < fVar1 == (NAN(fVar8) || NAN(fVar1))) {
        iVar6 = iVar3;
      }
    }
  }
  return iVar6;
}



// Level::Init(Core::Heap&, char const*, unsigned int)

void Level::Init(Heap *param_1,char *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  Tower *this;
  Creep *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  XMLNode *pXVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  void *pvVar11;
  int *piVar12;
  int **ppiVar13;
  size_t sVar14;
  uint uVar15;
  uint in_fpscr;
  undefined4 in_cr6;
  undefined4 in_cr7;
  float fVar16;
  float fVar17;
  float local_ec;
  XMLNode **local_e8;
  XMLNode *local_e0;
  int local_b0;
  int local_ac;
  undefined4 *local_9c;
  undefined auStack_98 [4];
  undefined4 local_94;
  undefined *local_80;
  undefined *local_7c;
  undefined *local_78;
  undefined *local_74;
  undefined *local_70;
  undefined4 *local_64 [17];
  
  local_78 = &stack0xfffffff8;
  local_70 = &stack0xfffffeb4;
  local_80 = PTR_00018044;
  local_7c = &GCC_except_table0;
  local_74 = &DAT_0000baf8;
  __Unwind_SjLj_Register(auStack_98);
  local_94 = 0xffffffff;
  Destroy();
  m_Wave = (ushort)param_3;
  local_ac = 0;
  do {
    local_94 = 0xffffffff;
    this = (Tower *)(***(code ***)param_1)(param_1,0x2c,4);
    if (this != (Tower *)0x0) {
      local_94 = 2;
      Tower::Tower(this);
    }
    *(Tower **)((int)&m_Towers + local_ac) = this;
    local_ac = local_ac + 4;
  } while (local_ac != 800);
  local_b0 = 0;
  do {
    local_94 = 0xffffffff;
    this_00 = (Creep *)(***(code ***)param_1)(param_1,0x4c,4);
    if (this_00 != (Creep *)0x0) {
      local_94 = 1;
      Creep::Creep(this_00);
    }
    *(Creep **)((int)&m_Creeps + local_b0) = this_00;
    local_b0 = local_b0 + 4;
  } while (local_b0 != 300);
  local_94 = 0xffffffff;
  Projectiles::Init(param_1);
  m_SelectVerts = 0;
  DAT_0001a4fc = 0;
  local_9c = &m_SelectVerts;
  local_ec = 0.0;
  do {
    uVar4 = Core::Math::Sin(local_ec + 1.570796);
    uVar5 = Core::Math::Sin(local_ec);
    local_9c[2] = uVar4;
    local_9c[3] = uVar5;
    local_9c = local_9c + 2;
    local_ec = local_ec + 0.241661;
  } while (local_9c != (undefined4 *)&DAT_0001a5d0);
  local_94 = 0xffffffff;
  Core::StackHeap::Push();
  Core::XMLDocument::XMLDocument((XMLDocument *)local_64);
  iVar6 = Core::XMLDocument::Load((XMLDocument *)local_64,param_2,(Heap *)PTR_m_ScrapHeap_00018088);
  if (iVar6 != 0) {
    for (local_e8 = (XMLNode **)*local_64[0]; local_e8 != (XMLNode **)0x0;
        local_e8 = (XMLNode **)local_e8[1]) {
      local_e8[2][(int)local_e8[3]] = (XMLNode)0x0;
      pXVar7 = local_e8[2];
      iVar6 = _strcmp((char *)pXVar7,"Background");
      if (iVar6 == 0) {
        local_94 = 0xffffffff;
        pcVar8 = (char *)Core::XMLNode::Attribute((XMLNode *)local_e8,"filename",(char *)0x0,true);
        m_Background = Core::TextureManager::LoadTexture((Heap *)PTR_m_Heap_000180a4,pcVar8);
        Core::Texture::Load();
        m_BackgroundVerts = 0;
        DAT_00019e30 = 0;
        DAT_00019e34 = 0;
        DAT_00019e38 = 0;
        DAT_00019e40 = 0;
        DAT_00019e3c = VectorUnsignedToFloat
                                 ((uint)*(ushort *)(m_Background + 0xc),(byte)(in_fpscr >> 0x15) & 3
                                 );
        DAT_00019e48 = 0;
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(ushort *)(m_Background + 0xc),
                                   (byte)(in_fpscr >> 0x15) & 3);
        fVar17 = (float)VectorSignedToFloat((uint)*(ushort *)(m_Background + 0x10),
                                            (byte)(in_fpscr >> 0x15) & 3);
        DAT_00019e44 = fVar16 / fVar17;
        DAT_00019e4c = 0;
        DAT_00019e50 = VectorUnsignedToFloat
                                 ((uint)*(ushort *)(m_Background + 0xe),(byte)(in_fpscr >> 0x15) & 3
                                 );
        DAT_00019e54 = 0;
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(ushort *)(m_Background + 0xe),
                                   (byte)(in_fpscr >> 0x15) & 3);
        fVar17 = (float)VectorSignedToFloat((uint)*(ushort *)(m_Background + 0x12),
                                            (byte)(in_fpscr >> 0x15) & 3);
        DAT_00019e58 = fVar16 / fVar17;
        DAT_00019e60 = VectorUnsignedToFloat
                                 ((uint)*(ushort *)(m_Background + 0xe),(byte)(in_fpscr >> 0x15) & 3
                                 );
        DAT_00019e5c = VectorUnsignedToFloat
                                 ((uint)*(ushort *)(m_Background + 0xc),(byte)(in_fpscr >> 0x15) & 3
                                 );
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(ushort *)(m_Background + 0xe),
                                   (byte)(in_fpscr >> 0x15) & 3);
        fVar17 = (float)VectorSignedToFloat((uint)*(ushort *)(m_Background + 0x12),
                                            (byte)(in_fpscr >> 0x15) & 3);
        DAT_00019e68 = fVar16 / fVar17;
        fVar16 = (float)VectorUnsignedToFloat
                                  ((uint)*(ushort *)(m_Background + 0xc),
                                   (byte)(in_fpscr >> 0x15) & 3);
        fVar17 = (float)VectorSignedToFloat((uint)*(ushort *)(m_Background + 0x10),
                                            (byte)(in_fpscr >> 0x15) & 3);
        DAT_00019e64 = fVar16 / fVar17;
        DAT_00019e78 = VectorUnsignedToFloat
                                 ((uint)*(ushort *)(m_Background + 0xe),(byte)(in_fpscr >> 0x15) & 3
                                 );
        m_Bounds = VectorUnsignedToFloat
                             ((uint)*(ushort *)(m_Background + 0xc),(byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorSignedToFloat((uint)*(ushort *)(m_Background + 0xc),
                                            (byte)(in_fpscr >> 0x15) & 3);
        m_MinScale = 480.0 / fVar16;
        coprocessor_function(10,2,5,in_cr7,in_cr6,in_cr7);
        coprocessor_function(10,6,1,in_cr7,in_cr6,in_cr7);
        m_LookAt = 0x43f00000;
        DAT_00019e70 = 0x3f000000;
        m_Scale = m_MinScale;
      }
      else {
        pXVar7[(int)local_e8[3]] = (XMLNode)0x0;
        pXVar7 = local_e8[2];
        iVar6 = _strcmp((char *)pXVar7,"Overlay");
        if (iVar6 == 0) {
          local_94 = 0xffffffff;
          puVar9 = (undefined4 *)(***(code ***)param_1)(param_1,0x24,4);
          uVar4 = Core::XMLNode::AttributeFloat((XMLNode *)local_e8,"x",0.0,true);
          *puVar9 = uVar4;
          uVar4 = Core::XMLNode::AttributeFloat((XMLNode *)local_e8,"y",0.0,true);
          puVar9[1] = uVar4;
          pcVar8 = (char *)Core::XMLNode::Attribute((XMLNode *)local_e8,"filename",(char *)0x0,true)
          ;
          uVar1 = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"w",0,true);
          uVar2 = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"h",0,true);
          Core::Sprite::Init((Sprite *)(puVar9 + 2),pcVar8,uVar1,uVar2,0);
          uVar4 = Core::XMLNode::AttributeFloat((XMLNode *)local_e8,"animSpeed",0.0,false);
          puVar9[7] = uVar4;
          uVar4 = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"frames",1,false);
          puVar9[5] = 0;
          puVar9[6] = uVar4;
          puVar9[8] = m_Overlays;
          m_Overlays = puVar9;
        }
        else {
          pXVar7[(int)local_e8[3]] = (XMLNode)0x0;
          pXVar7 = local_e8[2];
          iVar6 = _strcmp((char *)pXVar7,"Grid");
          if (iVar6 == 0) {
            local_94 = 0xffffffff;
            uVar4 = Core::XMLNode::AttributeFloat((XMLNode *)local_e8,"x",0.0,true);
            DAT_00019e80 = Core::XMLNode::AttributeFloat((XMLNode *)local_e8,"y",0.0,true);
            m_GridStart = uVar4;
            m_GridSize = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"cellsX",0,true);
            DAT_00019e86 = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"cellsY",0,true);
            m_CellSize = Core::XMLNode::AttributeFloat((XMLNode *)local_e8,"cellSize",0.0,true);
            m_Grid = (void *)(***(code ***)param_1)
                                       (param_1,(uint)DAT_00019e86 * (uint)m_GridSize * 8,4);
            m_GridInfo = (void *)(***(code ***)param_1)
                                           (param_1,(uint)DAT_00019e86 * (uint)m_GridSize * 4,4);
            m_Destruction = (void *)(***(code ***)param_1)(param_1,(uint)DAT_00019e86 << 4,4);
            _memset(m_Grid,0,(uint)DAT_00019e86 * (uint)m_GridSize * 8);
            _memset(m_GridInfo,0,(uint)DAT_00019e86 * (uint)m_GridSize * 4);
            sVar14 = (uint)DAT_00019e86 << 4;
            pvVar11 = m_Destruction;
LAB_0000c578:
            _memset(pvVar11,0,sVar14);
          }
          else {
            pXVar7[(int)local_e8[3]] = (XMLNode)0x0;
            pXVar7 = local_e8[2];
            iVar6 = _strcmp((char *)pXVar7,"Entrance");
            if (iVar6 == 0) {
              uVar15 = (uint)m_EntranceCount;
              local_94 = 0xffffffff;
              uVar3 = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"x",0,true);
              (&m_Entrance)[uVar15 * 6] = uVar3;
              uVar15 = (uint)m_EntranceCount;
              uVar3 = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"y",0,true);
              (&DAT_00019e96)[uVar15 * 6] = uVar3;
              uVar15 = (uint)m_EntranceCount;
              uVar4 = Core::XMLNode::AttributeFloat((XMLNode *)local_e8,"enterOffsetX",0.0,false);
              *(undefined4 *)(&DAT_00019e98 + uVar15 * 0xc) = uVar4;
              uVar15 = (uint)m_EntranceCount;
              uVar4 = Core::XMLNode::AttributeFloat((XMLNode *)local_e8,"enterOffsetY",0.0,false);
              *(undefined4 *)(&DAT_00019e9c + uVar15 * 0xc) = uVar4;
              iVar6 = (uint)(ushort)(&DAT_00019e96)[(uint)m_EntranceCount * 6] * (uint)m_GridSize +
                      (uint)(ushort)(&m_Entrance)[(uint)m_EntranceCount * 6];
              *(byte *)((int)m_Grid + iVar6 * 8) = *(byte *)((int)m_Grid + iVar6 * 8) | 2;
              m_EntranceCount = m_EntranceCount + 1;
            }
            else {
              pXVar7[(int)local_e8[3]] = (XMLNode)0x0;
              pXVar7 = local_e8[2];
              iVar6 = _strcmp((char *)pXVar7,"Exit");
              if (iVar6 == 0) {
                local_94 = 0xffffffff;
                m_Exit = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"x",0,true);
                DAT_00019e8a = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"y",0,true);
                DAT_00019e8c = Core::XMLNode::AttributeFloat
                                         ((XMLNode *)local_e8,"exitOffsetX",0.0,false);
                DAT_00019e90 = Core::XMLNode::AttributeFloat
                                         ((XMLNode *)local_e8,"exitOffsetY",0.0,false);
                iVar6 = (uint)DAT_00019e8a * (uint)m_GridSize + (uint)m_Exit;
                *(byte *)((int)m_Grid + iVar6 * 8) = *(byte *)((int)m_Grid + iVar6 * 8) | 2;
              }
              else {
                pXVar7[(int)local_e8[3]] = (XMLNode)0x0;
                pXVar7 = local_e8[2];
                iVar6 = _strcmp((char *)pXVar7,"Blocked");
                if (iVar6 == 0) {
                  local_94 = 0xffffffff;
                  iVar6 = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"y",0,true);
                  uVar15 = (uint)m_GridSize;
                  iVar10 = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"x",0,true);
                  iVar10 = uVar15 * iVar6 + iVar10;
                  *(byte *)((int)m_Grid + iVar10 * 8) = *(byte *)((int)m_Grid + iVar10 * 8) | 1;
                }
                else {
                  pXVar7[(int)local_e8[3]] = (XMLNode)0x0;
                  pXVar7 = local_e8[2];
                  iVar6 = _strcmp((char *)pXVar7,"WaveInfo");
                  if (iVar6 == 0) {
                    local_94 = 0xffffffff;
                    m_WaveWait = Core::XMLNode::AttributeFloat
                                           ((XMLNode *)local_e8,"waitBetween",0.0,true);
                    m_TimeBetweenWaves = m_WaveWait;
                    m_MaxWaves = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"maxWaves",0,true);
                    m_WaveCount = 0;
                    pvVar11 = (void *)(***(code ***)param_1)(param_1,(uint)m_MaxWaves * 0x1c,4);
                    sVar14 = (uint)m_MaxWaves * 0x1c;
                    m_Waves = pvVar11;
                    goto LAB_0000c578;
                  }
                  pXVar7[(int)local_e8[3]] = (XMLNode)0x0;
                  pXVar7 = local_e8[2];
                  iVar6 = _strcmp((char *)pXVar7,"Wave");
                  if (iVar6 == 0) {
                    uVar15 = (uint)m_WaveCount;
                    m_WaveCount = m_WaveCount + 1;
                    ppiVar13 = (int **)(uVar15 * 0x1c + (int)m_Waves);
                    for (local_e0 = *local_e8; local_e0 != (XMLNode *)0x0;
                        local_e0 = *(XMLNode **)(local_e0 + 4)) {
                      *(undefined *)(*(int *)(local_e0 + 8) + *(int *)(local_e0 + 0xc)) = 0;
                      pcVar8 = *(char **)(local_e0 + 8);
                      iVar6 = _strcmp(pcVar8,"Spawn");
                      if (iVar6 == 0) {
                        local_94 = 0xffffffff;
                        iVar6 = Core::XMLNode::AttributeInt(local_e0,"type",0,true);
                        piVar12 = (int *)(***(code ***)param_1)(param_1,0xc,4);
                        *piVar12 = iVar6 + -1;
                        iVar6 = Core::XMLNode::AttributeFloat(local_e0,"wait",0.0,true);
                        piVar12[1] = iVar6;
                        piVar12[2] = (int)*ppiVar13;
                        *ppiVar13 = piVar12;
                      }
                      else {
                        pcVar8[*(int *)(local_e0 + 0xc)] = '\0';
                        iVar6 = _strcmp(*(char **)(local_e0 + 8),"CreepChange");
                        if (iVar6 == 0) {
                          local_94 = 0xffffffff;
                          iVar6 = Core::XMLNode::AttributeInt(local_e0,"difficulty",0,true);
                          iVar10 = Core::XMLNode::AttributeInt(local_e0,"type",0,true);
                          *(undefined *)(ppiVar13 + iVar6 * 3 + 1) = 1;
                          ppiVar13[iVar6 * 3 + 2] = (int *)(iVar10 + -1);
                          uVar4 = Core::XMLNode::AttributeInt(local_e0,"newHealth",0,true);
                          piVar12 = (int *)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
                          ppiVar13[(iVar6 + 1) * 3] = piVar12;
                          if ((uint)m_WaveCount <= m_Wave + 1) {
                            *(int **)(PTR_m_Info_00018054 +
                                     iVar6 * 0xc + (int)ppiVar13[iVar6 * 3 + 2] * 0x6c + 0x58) =
                                 piVar12;
                          }
                        }
                      }
                    }
                  }
                  else {
                    pXVar7[(int)local_e8[3]] = (XMLNode)0x0;
                    iVar6 = _strcmp((char *)local_e8[2],"StartWith");
                    if (iVar6 == 0) {
                      local_94 = 0xffffffff;
                      iVar6 = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"difficulty",0,true);
                      uVar4 = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"money",0xf,true);
                      *(undefined4 *)(&DAT_0001a5e8 + iVar6 * 8) = uVar4;
                      uVar4 = Core::XMLNode::AttributeInt((XMLNode *)local_e8,"health",0x14,true);
                      *(undefined4 *)(&m_StartWith + iVar6 * 8) = uVar4;
                      m_Increase = Core::XMLNode::AttributeFloat
                                             ((XMLNode *)local_e8,"endlessHealth",1.0,true);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  local_94 = 0xffffffff;
  Core::StackHeap::Pop();
  PathFind((GridCellInfo *)0x0);
  LoL::LevelStateChanged();
  __Unwind_SjLj_Unregister(auStack_98);
  return;
}



// Core::Math::Vector2::DistanceSqr(Core::Math::Vector2 const&) const

float __thiscall Core::Math::Vector2::DistanceSqr(Vector2 *this,Vector2 *param_1)

{
  undefined4 in_cr7;
  
  coprocessor_function(10,6,5,in_cr7,in_cr7,in_cr7);
  return (*(float *)(this + 4) - *(float *)(param_1 + 4)) +
         (*(float *)this - *(float *)param_1) * (*(float *)this - *(float *)param_1);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::Math::RandMT::Reload()

uint Core::Math::RandMT::Reload(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar1 = PTR_left_00018060;
  if (*(int *)PTR_left_00018060 + 1 < 0 != SCARRY4(*(int *)PTR_left_00018060,1)) {
    Seed(*(uint *)PTR_initseed_000180ac);
  }
  puVar2 = PTR_state_00018098;
  *(undefined4 *)puVar1 = 0x26f;
  uVar4 = *(uint *)puVar2;
  uVar5 = *(uint *)(puVar2 + 4);
  puVar6 = (uint *)(puVar2 + 4);
  *(uint **)PTR_next_000180d8 = puVar6;
  do {
    uVar3 = uVar5;
    uVar5 = uVar3 & 1;
    if ((uVar3 & 1) != 0) {
      uVar5 = 0x9908b0df;
    }
    puVar6[-1] = puVar6[0x18c] ^ (uVar3 & 0x7fffffff | uVar4 & 0x80000000) >> 1 ^ uVar5;
    puVar6 = puVar6 + 1;
    uVar4 = uVar3;
    uVar5 = *puVar6;
  } while (puVar6 != (uint *)(puVar2 + 0x390));
  uVar4 = *puVar6;
  do {
    puVar7 = puVar6;
    uVar5 = uVar4;
    uVar4 = uVar5 & 1;
    if ((uVar5 & 1) != 0) {
      uVar4 = 0x9908b0df;
    }
    puVar7[-1] = puVar7[-0xe4] ^ (uVar5 & 0x7fffffff | uVar3 & 0x80000000) >> 1 ^ uVar4;
    puVar6 = puVar7 + 1;
    uVar4 = *puVar6;
    uVar3 = uVar5;
  } while (puVar6 != (uint *)(puVar2 + 0x9c0));
  uVar3 = puVar7[-0x26f];
  uVar4 = uVar3 & 1;
  if ((uVar3 & 1) != 0) {
    uVar4 = 0x9908b0df;
  }
  *puVar7 = puVar7[-0xe3] ^ (uVar5 & 0x80000000 | uVar3 & 0x7fffffff) >> 1 ^ uVar4;
  uVar3 = uVar3 ^ uVar3 >> 0xb;
  uVar3 = (uVar3 & 0x13a58ad) << 7 ^ uVar3;
  uVar3 = (uVar3 & 0x1df8c) << 0xf ^ uVar3;
  return uVar3 ^ uVar3 >> 0x12;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::Math::RandMT::Rand()

uint Core::Math::RandMT::Rand(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_left_00018060;
  *(int *)PTR_left_00018060 = iVar2 + -1;
  if (iVar2 + -1 < 0) {
    uVar1 = Reload();
    return uVar1;
  }
  uVar1 = **(uint **)PTR_next_000180d8;
  *(uint **)PTR_next_000180d8 = *(uint **)PTR_next_000180d8 + 1;
  uVar1 = uVar1 ^ uVar1 >> 0xb;
  uVar1 = (uVar1 & 0x13a58ad) << 7 ^ uVar1;
  uVar1 = (uVar1 & 0x1df8c) << 0xf ^ uVar1;
  return uVar1 ^ uVar1 >> 0x12;
}



// Core::Math::Rand(unsigned int)

undefined4 Core::Math::Rand(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = RandMT::Rand();
    uVar1 = ___umodsi3(uVar1,param_1);
    return uVar1;
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::Math::RandF()

float Core::Math::RandF(void)

{
  undefined4 uVar1;
  uint in_fpscr;
  double dVar2;
  
  uVar1 = RandMT::Rand();
  dVar2 = (double)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  return (float)(dVar2 / 4294967295.0);
}



// Core::Math::Sin(float)

undefined4 Core::Math::Sin(float param_1)

{
  uint uVar1;
  uint in_fpscr;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 uVar2;
  
  coprocessor_function(0xb,2,0,in_cr7,in_cr7,in_cr6);
  uVar1 = _lroundf(param_1);
  VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  coprocessor_function(10,6,1,in_cr7,in_cr7,in_cr6);
  uVar2 = 0xc0d66666;
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x40d66666;
  }
  return uVar2;
}



// Core::XMLNode::XMLNode()

void __thiscall Core::XMLNode::XMLNode(XMLNode *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::XMLNode::FormatTag()

void Core::XMLNode::FormatTag(void)

{
  char cVar1;
  bool bVar2;
  int in_r0;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = *(uint *)(in_r0 + 0xc);
  bVar2 = false;
  do {
    if (uVar4 <= uVar3) {
      return;
    }
    cVar1 = *(char *)(uVar3 + *(int *)(in_r0 + 8));
    if (cVar1 == '\\') {
      if (bVar2) {
        uVar3 = uVar3 + 1;
      }
    }
    else if (cVar1 == '\"') {
      if (bVar2) {
        bVar2 = false;
LAB_0000cbf8:
        *(bool *)(uVar3 + *(int *)(in_r0 + 8)) = bVar2;
        uVar4 = *(uint *)(in_r0 + 0xc);
      }
      else {
        bVar2 = true;
      }
    }
    else if (cVar1 == ' ' && !bVar2) goto LAB_0000cbf8;
    uVar3 = uVar3 + 1;
  } while( true );
}



// Core::XMLDocument::XMLDocument()

void __thiscall Core::XMLDocument::XMLDocument(XMLDocument *this)

{
  *(undefined4 *)this = 0;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::XMLNode::Parse()

void Core::XMLNode::Parse(void)

{
  XMLNode *pXVar1;
  XMLNode XVar2;
  bool bVar3;
  bool bVar4;
  XMLNode **in_r0;
  XMLNode *pXVar5;
  char *pcVar6;
  XMLNode *pXVar7;
  int iVar8;
  bool bVar9;
  XMLNode *local_28;
  
  bVar3 = false;
  bVar4 = false;
  local_28 = (XMLNode *)0x0;
  do {
    if (_s_End <= _s_Data) {
      return;
    }
    if (_s_Error != '\0') {
      return;
    }
    if (bVar3) {
      XVar2 = *_s_Data;
      bVar9 = XVar2 == (XMLNode)0x2d;
      if (bVar9) {
        XVar2 = _s_Data[1];
      }
      if ((bVar9 && XVar2 == (XMLNode)0x2d) && (_s_Data[2] == (XMLNode)0x3e)) {
        bVar3 = false;
        _s_Data = _s_Data + 2;
      }
    }
    else {
      XVar2 = *_s_Data;
      pXVar5 = _s_Data;
      if (XVar2 == (XMLNode)0x3c) {
        if (!bVar4) {
          pXVar7 = in_r0[2];
          if (pXVar7 == (XMLNode *)0x0) {
            if (_s_Data[1] == (XMLNode)0x2f) {
              pcVar6 = 
              "XMLNode::Parse(...) : ERROR! Found end tag without a starting tag!\n\n--> %s\n";
              goto LAB_0000ce54;
            }
            if (_s_Data[1] == (XMLNode)0x21) goto LAB_0000ce78;
            in_r0[2] = _s_Data + 1;
          }
          else if (_s_Data[1] == (XMLNode)0x2f) {
            bVar9 = true;
            iVar8 = 2;
            pXVar5 = (XMLNode *)0x0;
            while (pXVar5 != in_r0[3]) {
              if (!bVar9) goto LAB_0000cd08;
              XVar2 = pXVar5[(int)pXVar7];
              if ((XVar2 == (XMLNode)0x0 || XVar2 == (XMLNode)0x20) &&
                 (_s_Data[iVar8] == (XMLNode)0x3e || _s_Data[iVar8] == (XMLNode)0x20))
              goto LAB_0000cd14;
              pXVar1 = _s_Data + iVar8;
              iVar8 = iVar8 + 1;
              bVar9 = *pXVar1 == XVar2;
              pXVar5 = pXVar5 + 1;
            }
            if (!bVar9) {
LAB_0000cd08:
              _printf(
                     "XMLNode::Parse(...) : ERROR! Found end tag that didn\'t match our starting tag!\n\nOpen  = <%s>\nClose = %s\n\n"
                     );
              _s_Error = 1;
              return;
            }
LAB_0000cd14:
            in_r0[4] = _s_Data + -(int)pXVar7;
            _s_Data = _s_Data + (int)(pXVar5 + 1);
          }
          else if (_s_Data[1] == (XMLNode)0x21) {
LAB_0000ce78:
            bVar3 = true;
          }
          else {
            pXVar5 = (XMLNode *)(**(code **)*_s_Heap)(_s_Heap,0x14,4);
            if (pXVar5 != (XMLNode *)0x0) {
              XMLNode(pXVar5);
            }
            if (local_28 == (XMLNode *)0x0) {
              *in_r0 = pXVar5;
            }
            else {
              *(XMLNode **)(local_28 + 4) = pXVar5;
            }
            Parse();
            local_28 = pXVar5;
          }
        }
      }
      else if (XVar2 == (XMLNode)0x3e) {
        if (!bVar4) {
          if (in_r0[4] != (XMLNode *)0x0) {
            _s_Data = _s_Data + 1;
            return;
          }
          pXVar5 = in_r0[2];
          if (pXVar5 == (XMLNode *)0x0) {
            pcVar6 = "XMLNode::Parse(...) : ERROR! Found \'>\' that didn\'t belong!\n\n--> %s\n";
            pXVar5 = _s_Data;
LAB_0000ce54:
            _printf(pcVar6,pXVar5);
            _s_Error = 1;
            return;
          }
          if (in_r0[3] != (XMLNode *)0x0) {
            pcVar6 = "XMLNode::Parse(...) : ERROR! Already finished parsing the tag!\n\n--> %s\n";
            pXVar5 = _s_Data;
            goto LAB_0000ce54;
          }
          pXVar7 = _s_Data + -(int)pXVar5;
          in_r0[3] = pXVar7;
          if (pXVar7 == (XMLNode *)0x0) {
            pcVar6 = "XMLNode::Parse(...) : ERROR! Empty tag!\n\n--> %s\n";
            goto LAB_0000ce54;
          }
          FormatTag();
          if (_s_Data[-1] == (XMLNode)0x2f) {
            _s_Data = _s_Data + 1;
            return;
          }
        }
      }
      else if (XVar2 == (XMLNode)0x5c) {
        if ((_s_Data[1] == (XMLNode)0x22) && (!bVar4)) {
          pcVar6 = 
          "XMLNode::Parse(...) : ERROR! Found invalid syntax inside tag but not in string!\n\n--> %s\n"
          ;
          goto LAB_0000ce54;
        }
      }
      else if (XVar2 == (XMLNode)0x22) {
        bVar4 = (bool)(bVar4 ^ 1);
      }
    }
    _s_Data = _s_Data + 1;
  } while( true );
}



// Core::XMLNode::Attribute(char const*, char const*, bool)

char * __thiscall Core::XMLNode::Attribute(XMLNode *this,char *param_1,char *param_2,bool param_3)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char acStack_a0 [128];
  
  _memset(acStack_a0,0,0x80);
  _strcpy(acStack_a0,param_1);
  _strcat(acStack_a0,"=\"");
  iVar5 = *(int *)(this + 0xc);
  iVar3 = 0;
  do {
    if (iVar3 == iVar5) {
      if (param_3) {
        _printf("XMLNode::Attribute(\"%s\") : WARNING! Attribute doesn\'t exist\n",param_1);
      }
      return param_2;
    }
    if (*(char *)(*(int *)(this + 8) + iVar3) == '\0') {
      iVar4 = *(int *)(this + 8) + 1;
      pcVar1 = _strstr((char *)(iVar4 + iVar3),acStack_a0);
      if ((char *)(iVar4 + iVar3) == pcVar1) {
        sVar2 = _strlen(acStack_a0);
        return (char *)(iVar4 + iVar3 + sVar2);
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



// Core::XMLNode::AttributeFloat(char const*, float, bool)

float __thiscall
Core::XMLNode::AttributeFloat(XMLNode *this,char *param_1,float param_2,bool param_3)

{
  char *pcVar1;
  double dVar2;
  
  pcVar1 = (char *)Attribute(this,param_1,(char *)0x0,false);
  if (pcVar1 == (char *)0x0) {
    if (param_3) {
      _printf("XMLNode::AttributeFloat(...) : WARNING! Attribute \"%s\" is missing\n",param_1);
    }
  }
  else {
    dVar2 = _atof(pcVar1);
    param_2 = (float)(double)(((ulonglong)dVar2 & 0xffffffff00000000) +
                             ((ulonglong)dVar2 & 0xffffffff));
  }
  return param_2;
}



// Core::XMLNode::AttributeInt(char const*, int, bool)

int __thiscall Core::XMLNode::AttributeInt(XMLNode *this,char *param_1,int param_2,bool param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)Attribute(this,param_1,(char *)0x0,false);
  if (pcVar1 == (char *)0x0) {
    if (param_3) {
      _printf("XMLNode::AttributeInt(...) : WARNING! Attribute \"%s\" is missing\n",param_1);
    }
  }
  else {
    param_2 = _atoi(pcVar1);
  }
  return param_2;
}



// Core::XMLDocument::Load(char const*, Core::Heap&)

byte __thiscall Core::XMLDocument::Load(XMLDocument *this,char *param_1,Heap *param_2)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  XMLNode *this_00;
  uint uVar4;
  undefined uVar5;
  bool bVar6;
  File aFStack_28 [4];
  uint local_24;
  
  File::File(aFStack_28);
  iVar2 = File::Open(aFStack_28,param_1);
  if (iVar2 == 0) {
    _printf("XMLDocument::LoadFile(...) : WARNING! Failed to open \"%s\"\n",param_1);
    bVar1 = 0;
  }
  else {
    pvVar3 = (void *)(***(code ***)param_2)(param_2,local_24 + 1,1);
    File::Read(aFStack_28,pvVar3,local_24);
    File::Close();
    _s_End = (int)pvVar3 + local_24;
    *(undefined *)((int)pvVar3 + local_24) = 0;
    for (uVar4 = 0; uVar4 != local_24; uVar4 = uVar4 + 1) {
      bVar1 = *(byte *)(uVar4 + (int)pvVar3);
      if ((bVar1 == 0xff || bVar1 == 0x1a) || (bVar1 == 0x1b)) {
        uVar5 = 0;
LAB_0000d158:
        *(undefined *)(uVar4 + (int)pvVar3) = uVar5;
      }
      else {
        bVar6 = 0xc < bVar1;
        if (bVar1 != 0xd) {
          bVar6 = bVar1 != 9;
        }
        if ((!bVar6 || (bVar1 == 0xd || bVar1 == 10)) || (bVar1 == 0xc)) {
          uVar5 = 0x20;
          goto LAB_0000d158;
        }
      }
    }
    _s_Error = 0;
    _s_Heap = param_2;
    _s_Data = pvVar3;
    this_00 = (XMLNode *)(***(code ***)param_2)(param_2,0x14,4);
    if (this_00 != (XMLNode *)0x0) {
      XMLNode::XMLNode(this_00);
    }
    *(XMLNode **)this = this_00;
    XMLNode::Parse();
    bVar1 = _s_Error ^ 1;
  }
  return bVar1;
}



// Core::Localize::Filename(char const*)

char * Core::Localize::Filename(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char acStack_b8 [128];
  char *apcStack_38 [4];
  char *pcStack_28;
  char *pcStack_24;
  char *pcStack_20;
  char *pcStack_1c;
  char *local_18;
  
  iVar1 = Filename(char_const*)::usingFilename * 0x400;
  pcVar3 = &Filename(char_const*)::filenames + iVar1;
  Filename(char_const*)::usingFilename = (Filename(char_const*)::usingFilename + 1) % 5;
  _strcpy(&Filename(char_const*)::filenames + iVar1,param_1);
  pcVar2 = _strchr(pcVar3,0x2e);
  if (pcVar2 == (char *)0x0) {
    _printf("Localize::Filename(...) : WARNING! Couldn\'t localize \"%s\"\n",param_1);
  }
  else {
    *pcVar2 = '\0';
    _memset(acStack_b8,0,0x80);
    apcStack_38[0] = "_EN.";
    apcStack_38[1] = "_FR.";
    apcStack_38[2] = "_DE.";
    apcStack_38[3] = "_ES.";
    pcStack_28 = "_IT.";
    pcStack_24 = "_GK.";
    pcStack_20 = "_JP.";
    pcStack_1c = "_CH.";
    local_18 = "_KO.";
    _strcpy(acStack_b8,pcVar2 + 1);
    _strcat(pcVar3,apcStack_38[m_CurrentLang]);
    _strcat(pcVar3,acStack_b8);
    param_1 = pcVar3;
  }
  return param_1;
}



// Core::Localize::InsertToken(unsigned short*, unsigned int, unsigned short const*)

size_t Core::Localize::InsertToken(ushort *param_1,uint param_2,ushort *param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    if (m_NumberOfTokens <= uVar4) {
      sVar3 = _wcslen((wchar_t *)param_3);
LAB_0000d39c:
      _memcpy(param_1,param_3,(sVar3 + 1) * 2);
      return sVar3;
    }
    iVar1 = uVar4 * 0x100;
    iVar2 = _wcscmp((wchar_t *)param_3,(wchar_t *)(iVar1 + m_Tokens));
    if (iVar2 == 0) {
      sVar3 = _wcslen((wchar_t *)(iVar1 + m_Tokens + 0x80));
      param_3 = (ushort *)(iVar1 + m_Tokens + 0x80);
      goto LAB_0000d39c;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}



// Core::Localize::String(unsigned int, unsigned short*, unsigned int)

undefined4 Core::Localize::String(uint param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  bool bVar9;
  ushort local_a0 [64];
  
  if (param_2 != (ushort *)0x0 && param_3 != 0) {
    _memset(local_a0,0,0x80);
    bVar9 = false;
    iVar4 = 0;
    puVar2 = *(ushort **)(m_Strings + param_1 * 4);
    while( true ) {
      puVar5 = puVar2 + 1;
      uVar1 = *puVar2;
      if (uVar1 == 0) break;
      if (bVar9) {
        if (uVar1 == 0x20 || uVar1 == 0x25) {
          if (iVar4 == 0) {
            if (param_3 < 2) {
              *param_2 = 0;
LAB_0000d4d4:
              return *(undefined4 *)(param_1 * 4 + m_Strings);
            }
            uVar6 = param_3 - 1;
            puVar7 = param_2 + 1;
            *param_2 = 0x25;
            puVar8 = puVar7;
            if ((uVar6 != 1) && (*puVar2 == 0x20)) {
              uVar6 = param_3 - 2;
              puVar8 = param_2 + 2;
              *puVar7 = 0x20;
            }
            bVar9 = false;
            param_3 = uVar6;
            param_2 = puVar8;
            puVar2 = puVar5;
          }
          else {
            local_a0[iVar4] = 0;
            iVar3 = InsertToken(param_2,param_3,local_a0);
            bVar9 = false;
            local_a0[0] = 0;
            param_3 = param_3 - iVar3;
            iVar4 = 0;
            param_2 = param_2 + iVar3;
            puVar2 = puVar5;
          }
        }
        else {
          local_a0[iVar4] = uVar1;
          iVar4 = iVar4 + 1;
          puVar2 = puVar5;
        }
      }
      else if (uVar1 == 0x25) {
        bVar9 = true;
        puVar2 = puVar5;
      }
      else {
        if (param_3 < 2) {
          *param_2 = 0;
          goto LAB_0000d4d4;
        }
        param_3 = param_3 - 1;
        *param_2 = uVar1;
        param_2 = param_2 + 1;
        puVar2 = puVar5;
      }
    }
    *param_2 = 0;
  }
  return *(undefined4 *)(m_Strings + param_1 * 4);
}



// Core::Localize::Load(char const*)

void Core::Localize::Load(char *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  wchar_t local_536 [256];
  char acStack_134 [256];
  File aFStack_34 [4];
  uint local_30;
  uint local_2c;
  ushort local_24;
  undefined2 local_22;
  
  StackHeap::Push();
  _memset(acStack_134,0,0x100);
  _strcpy(acStack_134,param_1);
  switch(m_CurrentLang) {
  case 1:
    pcVar5 = "_FR.txt";
    break;
  case 2:
    pcVar5 = "_DE.txt";
    break;
  case 3:
    pcVar5 = "_ES.txt";
    break;
  case 4:
    pcVar5 = "_IT.txt";
    break;
  case 5:
    pcVar5 = "_GK.txt";
    break;
  case 6:
    pcVar5 = "_JP.txt";
    break;
  case 7:
    pcVar5 = "_CH.txt";
    break;
  case 8:
    pcVar5 = "_KO.txt";
    break;
  default:
    pcVar5 = "_EN.txt";
  }
  _strcat(acStack_134,pcVar5);
  File::File(aFStack_34);
  iVar3 = File::Open(aFStack_34,acStack_134);
  if (iVar3 == 0) {
    return;
  }
  local_22 = 0;
  File::Read(aFStack_34,&local_22,2);
  _memset(local_536,0,0x402);
  do {
    bVar2 = true;
    do {
      iVar3 = 0;
      iVar6 = 0;
      while( true ) {
        iVar1 = m_Strings;
        if (local_30 <= local_2c) {
          if (!bVar2) {
            *(undefined2 *)((int)local_536 + iVar6 * 2) = 0;
            uVar4 = (**(code **)*m_Heap)(m_Heap,(iVar6 + 1) * 2,2);
            *(undefined4 *)(iVar1 + iVar3 * 4) = uVar4;
            _wcscpy(*(wchar_t **)(m_Strings + iVar3 * 4),local_536);
          }
          File::Close();
          return;
        }
        local_24 = 0;
        File::Read(aFStack_34,&local_24,2);
        iVar1 = m_Strings;
        if (local_24 == 0xd || local_24 == 10) break;
        if (bVar2) {
          switch(local_24) {
          case 0x20:
            File::Read(aFStack_34,&local_24,2);
            File::Read(aFStack_34,&local_24,2);
            bVar2 = false;
            break;
          case 0x30:
            iVar3 = iVar3 * 10;
            break;
          case 0x31:
            iVar3 = iVar3 * 10 + 1;
            break;
          case 0x32:
            iVar3 = iVar3 * 10 + 2;
            break;
          case 0x33:
            iVar3 = iVar3 * 10 + 3;
            break;
          case 0x34:
            iVar3 = iVar3 * 10 + 4;
            break;
          case 0x35:
            iVar3 = iVar3 * 10 + 5;
            break;
          case 0x36:
            iVar3 = iVar3 * 10 + 6;
            break;
          case 0x37:
            iVar3 = iVar3 * 10 + 7;
            break;
          case 0x38:
            iVar3 = iVar3 * 10 + 8;
            break;
          case 0x39:
            iVar3 = iVar3 * 10 + 9;
          }
        }
        else {
          iVar1 = iVar6 * 2;
          iVar6 = iVar6 + 1;
          *(ushort *)((int)local_536 + iVar1) = local_24;
        }
      }
    } while (bVar2);
    *(undefined2 *)((int)local_536 + iVar6 * 2) = 0;
    uVar4 = (**(code **)*m_Heap)(m_Heap,(iVar6 + 1) * 2,2);
    *(undefined4 *)(iVar1 + iVar3 * 4) = uVar4;
    _wcscpy(*(wchar_t **)(m_Strings + iVar3 * 4),local_536);
  } while( true );
}



// Core::Localize::Init(Core::StackHeap&, unsigned int, unsigned int)

void Core::Localize::Init(StackHeap *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  
  m_Heap = (undefined4 *)param_1;
  m_Strings = (***(code ***)param_1)(param_1,param_2 << 2,4);
  m_Tokens = (**(code **)*m_Heap)(m_Heap,param_3 << 8,4);
  m_NumberOfTokens = 0;
  m_MaxStrings = param_2;
  m_MaxTokens = param_3;
  for (uVar4 = 0; uVar4 < m_MaxStrings; uVar4 = uVar4 + 1) {
    *(undefined4 *)(m_Strings + uVar4 * 4) = 0;
  }
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = _objc_msgSend(uVar1,"objectForKey:",&cf_AppleLanguages);
  uVar1 = _objc_msgSend(uVar1,"objectAtIndex:");
  pcVar2 = (char *)_objc_msgSend(uVar1,"UTF8String");
  _printf("Localize::Init(...) : Current language is \"%s\"\n",pcVar2);
  iVar3 = _strcmp(pcVar2,"en");
  if (((iVar3 != 0) && (iVar3 = _strcmp(pcVar2,"en-US"), iVar3 != 0)) &&
     (iVar3 = _strcmp(pcVar2,"en-GB"), iVar3 != 0)) {
    iVar3 = _strcmp(pcVar2,"fr");
    if (iVar3 == 0) {
      iVar3 = 1;
      goto LAB_0000db6c;
    }
    iVar3 = _strcmp(pcVar2,"de");
    if (iVar3 == 0) {
      iVar3 = 2;
      goto LAB_0000db6c;
    }
    iVar3 = _strcmp(pcVar2,"es");
    if (iVar3 == 0) {
      iVar3 = 3;
      goto LAB_0000db6c;
    }
    iVar3 = _strcmp(pcVar2,"it");
    if (iVar3 == 0) {
      iVar3 = 4;
      goto LAB_0000db6c;
    }
    iVar3 = _strcmp(pcVar2,"el");
    if (iVar3 == 0) {
      iVar3 = 5;
      goto LAB_0000db6c;
    }
    iVar3 = _strcmp(pcVar2,"ja");
    if (iVar3 == 0) {
      iVar3 = 6;
      goto LAB_0000db6c;
    }
    iVar3 = _strcmp(pcVar2,"zh");
    if (((iVar3 == 0) || (iVar3 = _strcmp(pcVar2,"zh-Hans"), iVar3 == 0)) ||
       (iVar3 = _strcmp(pcVar2,"zh-Hant"), iVar3 == 0)) {
      iVar3 = 7;
      goto LAB_0000db6c;
    }
    iVar3 = _strcmp(pcVar2,"ko");
    if (iVar3 == 0) {
      iVar3 = 8;
      goto LAB_0000db6c;
    }
  }
  iVar3 = 0;
LAB_0000db6c:
  if ((&m_Supported)[iVar3] == '\0') {
    _printf("Localize::Init(...) : WARNING! language \"%s\" is not supported. Defaulting to English\n"
            ,pcVar2);
    m_CurrentLang = 0;
    iVar3 = m_CurrentLang;
  }
  m_CurrentLang = iVar3;
  return;
}



// Core::File::File()

void __thiscall Core::File::File(File *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (File)0x0;
  return;
}



// Core::File::File()

void __thiscall Core::File::File(File *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (File)0x0;
  return;
}



// Core::File::Read(void*, unsigned int)

int __thiscall Core::File::Read(File *this,void *param_1,uint param_2)

{
  size_t sVar1;
  
  sVar1 = _fread(param_1,param_2,1,*(FILE **)this);
  if (0 < (int)sVar1) {
    *(uint *)(this + 8) = *(int *)(this + 8) + param_2 * sVar1;
    return param_2 * sVar1;
  }
  _printf("File::Read(...) : WARNING! Error reading. Code %i\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::File::Close()

void Core::File::Close(void)

{
  FILE **in_r0;
  
  if (*in_r0 != (FILE *)0x0) {
    _fclose(*in_r0);
  }
  *in_r0 = (FILE *)0x0;
  in_r0[1] = (FILE *)0x0;
  in_r0[2] = (FILE *)0x0;
  return;
}



// Core::File::Open(char const*)

bool __thiscall Core::File::Open(File *this,char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  FILE *pFVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = _objc_msgSend(uVar1,"resourcePath");
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s,param_1);
  uVar1 = _objc_msgSend(uVar1,"stringByAppendingPathComponent:",uVar2);
  pcVar3 = (char *)_objc_msgSend(uVar1,"cStringUsingEncoding:",1);
  pFVar4 = _fopen(pcVar3,"rb");
  *(FILE **)this = pFVar4;
  if (pFVar4 != (FILE *)0x0) {
    local_20 = 0;
    uStack_1c = 0;
    _fseek(pFVar4,0,2);
    _fgetpos(*(FILE **)this,(fpos_t *)&local_20);
    _fseek(*(FILE **)this,0,0);
    *(undefined4 *)(this + 4) = local_20;
    *(undefined4 *)(this + 8) = 0;
    this[0xc] = (File)0x0;
  }
  else {
    _printf("File::Open(...) : WARNING! File \"%s\" failed to open\n",param_1);
  }
  return pFVar4 != (FILE *)0x0;
}



// Function Stack Size: 0x10 bytes

void ImageView::touchesBegan_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Core::Input::TouchesBegan((NSSet *)param_3,(UIEvent *)param_4,(UIView *)param_1);
  return;
}



// Function Stack Size: 0x10 bytes

void ImageView::touchesMoved_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Core::Input::TouchesMoved((NSSet *)param_3,(UIEvent *)param_4,(UIView *)param_1);
  return;
}



// Function Stack Size: 0x10 bytes

void ImageView::touchesEnded_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Core::Input::TouchesEnded((NSSet *)param_3,(UIEvent *)param_4,(UIView *)param_1);
  return;
}



// Function Stack Size: 0x10 bytes

void ImageView::touchesCancelled_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Core::Input::TouchesCancelled((NSSet *)param_3,(UIEvent *)param_4,(UIView *)param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// GUIComponent::Reset()

void GUIComponent::Reset(void)

{
  int in_r0;
  
  *(undefined2 *)(in_r0 + 8) = 0xffff;
  *(undefined *)(in_r0 + 4) = 1;
  *(undefined *)(in_r0 + 5) = 1;
  *(undefined *)(in_r0 + 6) = 0;
  *(undefined4 *)(in_r0 + 0x18) = 0;
  *(undefined4 *)(in_r0 + 0xc) = 0;
  *(undefined4 *)(in_r0 + 0x10) = 0;
  *(undefined4 *)(in_r0 + 0x14) = 0;
  *(undefined4 *)(in_r0 + 0x1c) = 0;
  *(undefined4 *)(in_r0 + 0x20) = 0;
  return;
}



// GUI::Init(ImageView*)

void GUI::Init(ImageView *param_1)

{
  m_View = param_1;
  return;
}



// GUI::RegisterCallback(void (*)(void*, unsigned short), void (*)(void*, unsigned short,
// Core::Touch*, bool), void*)

void GUI::RegisterCallback
               (_func_void_void_ptr_ushort *param_1,
               _func_void_void_ptr_ushort_Touch_ptr_bool *param_2,void *param_3)

{
  m_Callback = param_1;
  m_DragCallback = param_2;
  m_CallbackUser = param_3;
  return;
}



// GUI::FindComponent(unsigned short)

undefined1 * GUI::FindComponent(ushort param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (param_1 != 0xffff) {
    puVar3 = &m_Components;
    for (iVar2 = 0; iVar2 != m_ComponentCount; iVar2 = iVar2 + 1) {
      puVar1 = (ushort *)(puVar3 + 8);
      puVar3 = puVar3 + 0x24;
      if (*puVar1 == param_1) {
        return &m_Components + iVar2 * 0x24;
      }
    }
  }
  return (undefined1 *)0x0;
}



// GUI::HandleTextEditReturn(GUIComponent*)

void GUI::HandleTextEditReturn(GUIComponent *param_1)

{
  if (m_Callback == (code *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x0000df60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*m_Callback)(m_CallbackUser,*(undefined2 *)&param_1->field2_0x8);
  return;
}



// Function Stack Size: 0xc bytes

ID TextEditHandler::initWith_(ID param_1,SEL param_2,GUIComponent *param_3)

{
  ID IVar1;
  ID local_14;
  class_t *local_10;
  
  local_10 = &objc::class_t::TextEditHandler;
  local_14 = param_1;
  IVar1 = _objc_msgSendSuper2(&local_14,"init");
  if (IVar1 != 0) {
    *(GUIComponent **)(IVar1 + m_Component) = param_3;
    *(undefined4 *)(IVar1 + m_Limit) = 0xffffffff;
    *(undefined4 *)(IVar1 + m_MinLimit) = 0;
  }
  return IVar1;
}



// GUI::CreateTextEdit(unsigned short, unsigned short, unsigned short, unsigned short, unsigned
// short)

undefined1 *
GUI::CreateTextEdit(ushort param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  
  iVar2 = m_ComponentCount;
  uVar8 = (ulonglong)CONCAT24(param_1,(uint)param_2);
  iVar1 = m_ComponentCount * 0x24;
  m_ComponentCount = m_ComponentCount + 1;
  GUIComponent::Reset();
  *(undefined4 *)(&m_Components + iVar1) = 5;
  (&DAT_0001a5fc)[iVar2 * 0x12] = param_5;
  uVar3 = _objc_msgSend(&_OBJC_CLASS___UITextField,"alloc");
  uVar4 = VectorUnsignedToFloat((uint)param_4,(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = VectorUnsignedToFloat((uint)param_3,(byte)(in_fpscr >> 0x15) & 3);
  uVar6 = VectorUnsignedToFloat((int)uVar8,(byte)(in_fpscr >> 0x15) & 3);
  uVar7 = VectorUnsignedToFloat((int)(uVar8 >> 0x20),(byte)(in_fpscr >> 0x15) & 3);
  uVar3 = _objc_msgSend(uVar3,"initWithFrame:",uVar7,uVar6,uVar5,uVar4);
  uVar3 = _objc_msgSend(uVar3,"autorelease");
  *(undefined4 *)(&DAT_0001a610 + iVar1) = uVar3;
  uVar3 = _objc_msgSend(&_OBJC_CLASS___UIColor,"clearColor");
  _objc_msgSend(*(undefined4 *)(&DAT_0001a610 + iVar1),"setBackgroundColor:",uVar3);
  uVar3 = _objc_msgSend(&_OBJC_CLASS___UIColor,"whiteColor");
  _objc_msgSend(*(undefined4 *)(&DAT_0001a610 + iVar1),"setTextColor:",uVar3);
  _objc_msgSend(*(undefined4 *)(&DAT_0001a610 + iVar1),"setBorderStyle:",0);
  _objc_msgSend(*(undefined4 *)(&DAT_0001a610 + iVar1),"setTextAlignment:",1);
  uVar3 = _objc_msgSend(&objc::class_t::TextEditHandler,"alloc");
  uVar3 = _objc_msgSend(uVar3,"initWith:",&m_Components + iVar1);
  _objc_msgSend(*(undefined4 *)(&DAT_0001a610 + iVar1),"setDelegate:",uVar3);
  _objc_msgSend(m_View,"addSubview:",*(undefined4 *)(&DAT_0001a610 + iVar1));
  return &m_Components + iVar1;
}



// GUI::CreateText(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short
// const*, unsigned short)

undefined1 *
GUI::CreateText(ushort param_1,ushort param_2,ushort param_3,ushort param_4,ushort *param_5,
               ushort param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  
  iVar2 = m_ComponentCount;
  uVar8 = (ulonglong)CONCAT24(param_1,(uint)param_2);
  iVar1 = m_ComponentCount * 0x24;
  m_ComponentCount = m_ComponentCount + 1;
  GUIComponent::Reset();
  *(undefined4 *)(&m_Components + iVar1) = 3;
  (&DAT_0001a5fc)[iVar2 * 0x12] = param_6;
  uVar3 = _objc_msgSend(&objc::class_t::GUIText,"alloc");
  uVar4 = VectorUnsignedToFloat((uint)param_4,(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = VectorUnsignedToFloat((uint)param_3,(byte)(in_fpscr >> 0x15) & 3);
  uVar6 = VectorUnsignedToFloat((int)uVar8,(byte)(in_fpscr >> 0x15) & 3);
  uVar7 = VectorUnsignedToFloat((int)(uVar8 >> 0x20),(byte)(in_fpscr >> 0x15) & 3);
  uVar3 = _objc_msgSend(uVar3,"initWithFrame:",uVar7,uVar6,uVar5,uVar4);
  uVar3 = _objc_msgSend(uVar3,"autorelease");
  (&DAT_0001a60c)[iVar2 * 9] = uVar3;
  if (param_5 != (ushort *)0x0) {
    uVar4 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__S,param_5,uVar5,uVar4);
    _objc_msgSend(uVar3,"setText:",uVar4);
  }
  _objc_msgSend(m_View,"addSubview:",(&DAT_0001a60c)[iVar2 * 9]);
  return &m_Components + iVar1;
}



// GUI::CreateTextButton(unsigned short, unsigned short, unsigned short, unsigned short, unsigned
// short const*, unsigned short, SoundDesc)

void GUI::CreateTextButton
               (ushort param_1,ushort param_2,ushort param_3,ushort param_4,ushort *param_5,
               ushort param_6,SoundDesc param_7)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CreateText(param_1,param_2,param_3,param_4,param_5,param_6);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 4;
    puVar1[8] = param_7;
  }
  return;
}



// GUI::CreateDragable(unsigned short, unsigned short, char const*, char const*, unsigned short,
// SoundDesc)

undefined1 *
GUI::CreateDragable(ushort param_1,ushort param_2,char *param_3,char *param_4,ushort param_5,
                   SoundDesc param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = m_ComponentCount;
  iVar1 = m_ComponentCount * 0x24;
  m_ComponentCount = m_ComponentCount + 1;
  GUIComponent::Reset();
  (&DAT_0001a5fc)[iVar2 * 0x12] = param_5;
  *(undefined4 *)(&m_Components + iVar1) = 2;
  *(SoundDesc *)(&DAT_0001a614 + iVar1) = param_6;
  if (param_3 != (char *)0x0) {
    uVar3 = _objc_msgSend(&objc::class_t::GUIImage,"alloc");
    uVar3 = _objc_msgSend(uVar3,"initWithFile:withX:withY:",param_3,param_1,param_2);
    uVar3 = _objc_msgSend(uVar3,"autorelease");
    (&DAT_0001a600)[iVar2 * 9] = uVar3;
    _objc_msgSend(m_View,"addSubview:",uVar3);
  }
  if (param_4 != (char *)0x0) {
    uVar3 = _objc_msgSend(&objc::class_t::GUIImage,"alloc");
    uVar3 = _objc_msgSend(uVar3,"initWithFile:withX:withY:",param_4,param_1,param_2);
    uVar3 = _objc_msgSend(uVar3,"autorelease");
    (&DAT_0001a608)[iVar2 * 9] = uVar3;
    _objc_msgSend(uVar3,"Show:",0);
    _objc_msgSend(m_View,"addSubview:",(&DAT_0001a608)[iVar2 * 9]);
  }
  return &m_Components + iVar1;
}



// GUI::CreateButton(unsigned short, unsigned short, char const*, char const*, unsigned short,
// SoundDesc)

undefined1 *
GUI::CreateButton(ushort param_1,ushort param_2,char *param_3,char *param_4,ushort param_5,
                 SoundDesc param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = m_ComponentCount;
  iVar1 = m_ComponentCount * 0x24;
  m_ComponentCount = m_ComponentCount + 1;
  GUIComponent::Reset();
  (&DAT_0001a5fc)[iVar2 * 0x12] = param_5;
  *(undefined4 *)(&m_Components + iVar1) = 1;
  *(SoundDesc *)(&DAT_0001a614 + iVar1) = param_6;
  if (param_3 != (char *)0x0) {
    uVar3 = _objc_msgSend(&objc::class_t::GUIImage,"alloc");
    uVar3 = _objc_msgSend(uVar3,"initWithFile:withX:withY:",param_3,param_1,param_2);
    uVar3 = _objc_msgSend(uVar3,"autorelease");
    (&DAT_0001a600)[iVar2 * 9] = uVar3;
    _objc_msgSend(m_View,"addSubview:",uVar3);
  }
  if (param_4 != (char *)0x0) {
    uVar3 = _objc_msgSend(&objc::class_t::GUIImage,"alloc");
    uVar3 = _objc_msgSend(uVar3,"initWithFile:withX:withY:",param_4,param_1,param_2);
    uVar3 = _objc_msgSend(uVar3,"autorelease");
    (&DAT_0001a604)[iVar2 * 9] = uVar3;
    _objc_msgSend(uVar3,"Show:",0);
    _objc_msgSend(m_View,"addSubview:",(&DAT_0001a604)[iVar2 * 9]);
  }
  return &m_Components + iVar1;
}



// GUI::CreateStatic(unsigned short, unsigned short, char const*, unsigned short)

undefined1 * GUI::CreateStatic(ushort param_1,ushort param_2,char *param_3,ushort param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = m_ComponentCount;
  iVar1 = m_ComponentCount * 0x24;
  m_ComponentCount = m_ComponentCount + 1;
  GUIComponent::Reset();
  *(undefined4 *)(&m_Components + iVar1) = 0;
  (&DAT_0001a5fc)[iVar2 * 0x12] = param_4;
  if (param_3 != (char *)0x0) {
    uVar3 = _objc_msgSend(&objc::class_t::GUIImage,"alloc");
    uVar3 = _objc_msgSend(uVar3,"initWithFile:withX:withY:",param_3,param_1,param_2);
    uVar3 = _objc_msgSend(uVar3,"autorelease");
    (&DAT_0001a600)[iVar2 * 9] = uVar3;
    _objc_msgSend(m_View,"addSubview:",uVar3);
  }
  return &m_Components + iVar1;
}



// GUI::Enabled(unsigned short, bool)

void GUI::Enabled(ushort param_1,bool param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  puVar2 = &m_Components;
  for (uVar3 = 0; uVar3 < m_ComponentCount; uVar3 = uVar3 + 1) {
    if (*(ushort *)(puVar2 + 8) == param_1) {
      puVar2[4] = param_2;
      if (param_2) {
        if (*(int *)(puVar2 + 0xc) != 0) {
          _objc_msgSend(*(int *)(puVar2 + 0xc),"Show:",1);
        }
        if (*(int *)(puVar2 + 0x10) != 0) {
          _objc_msgSend(*(int *)(puVar2 + 0x10),"Show:",0);
        }
        iVar1 = *(int *)(puVar2 + 0x18);
      }
      else {
        if (*(int *)(puVar2 + 0xc) != 0) {
          _objc_msgSend(*(int *)(puVar2 + 0xc),"Show:",0);
        }
        if (*(int *)(puVar2 + 0x10) != 0) {
          _objc_msgSend(*(int *)(puVar2 + 0x10),"Show:",0);
        }
        if (*(int *)(puVar2 + 0x14) != 0) {
          _objc_msgSend(*(int *)(puVar2 + 0x14),"Show:",0);
        }
        iVar1 = *(int *)(puVar2 + 0x18);
      }
      if (iVar1 != 0) {
        _objc_msgSend(iVar1,"Show:");
      }
    }
    puVar2 = puVar2 + 0x24;
  }
  return;
}



// GUIComponent::TurnOff(bool)

void __thiscall GUIComponent::TurnOff(GUIComponent *this,bool param_1)

{
  int iVar1;
  
  if (this->field0_0x0 != 2) {
    return;
  }
  if (this->field3_0xc != 0) {
    _objc_msgSend(this->field3_0xc,"Show:",!param_1);
  }
  iVar1 = *(int *)((int)&this->field5_0x12 + 2);
  if (iVar1 != 0) {
    _objc_msgSend(iVar1,"Show:",param_1);
  }
  *(bool *)((int)&this->field1_0x4 + 2) = param_1;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// GUIComponent::Destroy()

void GUIComponent::Destroy(void)

{
  int in_r0;
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(in_r0 + 0x18) != 0) {
    _objc_msgSend(*(int *)(in_r0 + 0x18),"removeFromSuperview");
    *(undefined4 *)(in_r0 + 0x18) = 0;
  }
  if (*(int *)(in_r0 + 0xc) != 0) {
    _objc_msgSend(*(int *)(in_r0 + 0xc),"removeFromSuperview");
    *(undefined4 *)(in_r0 + 0xc) = 0;
  }
  if (*(int *)(in_r0 + 0x10) != 0) {
    _objc_msgSend(*(int *)(in_r0 + 0x10),"removeFromSuperview");
    *(undefined4 *)(in_r0 + 0x10) = 0;
  }
  if (*(int *)(in_r0 + 0x14) != 0) {
    _objc_msgSend(*(int *)(in_r0 + 0x14),"removeFromSuperview");
    *(undefined4 *)(in_r0 + 0x14) = 0;
  }
  if (*(int *)(in_r0 + 0x1c) == 0) {
    return;
  }
  iVar1 = _objc_msgSend(*(int *)(in_r0 + 0x1c),"delegate");
  if (iVar1 != 0) {
    uVar2 = _objc_msgSend(*(undefined4 *)(in_r0 + 0x1c),"delegate");
    _objc_msgSend(uVar2,"release");
    _objc_msgSend(*(undefined4 *)(in_r0 + 0x1c),"setDelegate:",0);
  }
  _objc_msgSend(*(undefined4 *)(in_r0 + 0x1c),"removeFromSuperview");
  *(undefined4 *)(in_r0 + 0x1c) = 0;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// GUI::RemoveComponentsUntilDisable()

void GUI::RemoveComponentsUntilDisable(void)

{
  int iVar1;
  int *piVar2;
  
  do {
    if (m_ComponentCount == 0) break;
    m_ComponentCount = m_ComponentCount + -1;
    iVar1 = m_ComponentCount * 0x24;
    GUIComponent::Destroy();
  } while (*(int *)(&m_Components + iVar1) != 6);
  piVar2 = (int *)(&m_Components + m_ComponentCount * 0x24);
  iVar1 = m_ComponentCount;
  do {
    if (iVar1 == 0) {
      return;
    }
    *(undefined *)((int)piVar2 + -0x1f) = 1;
    piVar2 = piVar2 + -9;
    iVar1 = iVar1 + -1;
  } while (*piVar2 != 6);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// GUI::RemoveAllComponents()

void GUI::RemoveAllComponents(void)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < m_ComponentCount; uVar1 = uVar1 + 1) {
    GUIComponent::Destroy();
  }
  m_ComponentCount = 0;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// GUIComponent::GetPosition()

void GUIComponent::GetPosition(void)

{
  int in_r0;
  int iVar1;
  
  iVar1 = *(int *)(in_r0 + 0xc);
  if (((iVar1 == 0) && (iVar1 = *(int *)(in_r0 + 0x10), iVar1 == 0)) &&
     (iVar1 = *(int *)(in_r0 + 0x14), iVar1 == 0)) {
    if (*(int *)(in_r0 + 0x18) == 0) {
      return;
    }
    _objc_msgSend(*(int *)(in_r0 + 0x18),"Position");
    return;
  }
  _objc_msgSend(iVar1,"Position");
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// GUIComponent::GetBounds()

void GUIComponent::GetBounds(void)

{
  int in_r0;
  int iVar1;
  
  iVar1 = *(int *)(in_r0 + 0xc);
  if (((iVar1 == 0) && (iVar1 = *(int *)(in_r0 + 0x10), iVar1 == 0)) &&
     (iVar1 = *(int *)(in_r0 + 0x14), iVar1 == 0)) {
    if (*(int *)(in_r0 + 0x18) == 0) {
      return;
    }
    _objc_msgSend(*(int *)(in_r0 + 0x18),"Bounds");
    return;
  }
  _objc_msgSend(iVar1,"Bounds");
  return;
}



// GUI::HandleRelease(Core::Touch*)

undefined4 GUI::HandleRelease(Touch *param_1)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  int in_r12;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  
  if (m_TrackingTouch == 0) {
    if (m_TrackingComponent == (int *)0x0) {
      return 0;
    }
  }
  else if (m_TrackingComponent == (int *)0x0) {
    m_TrackingTouch = 0;
    m_TrackingComponent = (int *)0x0;
    return 1;
  }
  if (m_TrackingComponent[4] != 0) {
    _objc_msgSend(m_TrackingComponent[4],"Show:",0);
    if (m_TrackingComponent[3] != 0) {
      _objc_msgSend(m_TrackingComponent[3],"Show:",1);
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  psVar2 = (short *)GUIComponent::GetPosition();
  uVar5 = 0xec44;
  psVar3 = (short *)GUIComponent::GetBounds();
  if (psVar2 != (short *)0x0 && psVar3 != (short *)0x0) {
    uVar7 = VectorFloatToUnsigned((int)uVar8,3);
    iVar4 = (int)*psVar2;
    uVar7 = uVar7 & 0xffff;
    bVar6 = SBORROW4(uVar7,iVar4);
    iVar1 = uVar7 - iVar4;
    if (iVar4 <= (int)uVar7) {
      uVar5 = VectorFloatToUnsigned((int)((ulonglong)uVar8 >> 0x20),3);
      in_r12 = (int)psVar2[1];
      uVar5 = uVar5 & 0xffff;
      bVar6 = SBORROW4(uVar5,in_r12);
      iVar1 = uVar5 - in_r12;
    }
    if (iVar1 < 0 == bVar6) {
      iVar4 = *psVar3 + iVar4;
      bVar6 = SBORROW4(uVar7,iVar4);
      iVar1 = uVar7 - iVar4;
      if ((int)uVar7 < iVar4) {
        bVar6 = SBORROW4(uVar5,psVar3[1] + in_r12);
        iVar1 = uVar5 - (psVar3[1] + in_r12);
      }
      if (iVar1 < 0 != bVar6) goto joined_r0x0000ecd0;
    }
  }
  if (*m_TrackingComponent != 2) {
    m_TrackingTouch = 0;
    m_TrackingComponent = (int *)0x0;
    return 1;
  }
joined_r0x0000ecd0:
  if ((m_Callback != (code *)0x0) && (*(char *)((int)m_TrackingComponent + 5) != '\0')) {
    (*m_Callback)(m_CallbackUser,*(undefined2 *)(m_TrackingComponent + 2));
  }
  m_TrackingComponent = (int *)0x0;
  m_TrackingTouch = 0;
  return 1;
}



// GUI::HandleDragged(Core::Touch*)

undefined4 GUI::HandleDragged(Touch *param_1)

{
  int iVar1;
  undefined2 uVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  uint unaff_r9;
  int iVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  
  if (m_TrackingTouch == 0) {
    if (m_TrackingComponent == (uint *)0x0) {
      return 0;
    }
  }
  else if (m_TrackingComponent == (uint *)0x0) {
    return 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  psVar3 = (short *)GUIComponent::GetPosition();
  iVar6 = 0xed80;
  psVar4 = (short *)GUIComponent::GetBounds();
  if ((*(char *)((int)m_TrackingComponent + 5) != '\0') &&
     (psVar3 != (short *)0x0 && psVar4 != (short *)0x0)) {
    uVar8 = VectorFloatToUnsigned((int)uVar9,3);
    iVar5 = (int)*psVar3;
    uVar8 = uVar8 & 0xffff;
    bVar7 = SBORROW4(uVar8,iVar5);
    iVar1 = uVar8 - iVar5;
    if (iVar5 <= (int)uVar8) {
      uVar10 = VectorFloatToUnsigned((int)((ulonglong)uVar9 >> 0x20),3);
      iVar6 = (int)psVar3[1];
      unaff_r9 = uVar10 & 0xffff;
      bVar7 = SBORROW4(unaff_r9,iVar6);
      iVar1 = unaff_r9 - iVar6;
    }
    if (iVar1 < 0 == bVar7) {
      iVar5 = *psVar4 + iVar5;
      bVar7 = SBORROW4(uVar8,iVar5);
      iVar1 = uVar8 - iVar5;
      if ((int)uVar8 < iVar5) {
        bVar7 = SBORROW4(unaff_r9,psVar4[1] + iVar6);
        iVar1 = unaff_r9 - (psVar4[1] + iVar6);
      }
      if (iVar1 < 0 != bVar7) {
        if (m_TrackingComponent[4] != 0) {
          _objc_msgSend(m_TrackingComponent[4],"Show:",1);
          if (m_TrackingComponent[3] != 0) {
            _objc_msgSend(m_TrackingComponent[3],"Show:",0);
          }
        }
        uVar8 = *m_TrackingComponent;
        bVar7 = uVar8 != 2;
        if (!bVar7) {
          uVar8 = (uint)*(byte *)((int)m_TrackingComponent + 6);
        }
        if (bVar7 || uVar8 != 0) {
          return 1;
        }
        if (m_DragCallback == (code *)0x0) {
          return 1;
        }
        uVar2 = *(undefined2 *)(m_TrackingComponent + 2);
        uVar8 = 1;
        goto LAB_0000eedc;
      }
    }
  }
  if (m_TrackingComponent[4] != 0) {
    _objc_msgSend(m_TrackingComponent[4],"Show:",0);
    if (m_TrackingComponent[3] != 0) {
      _objc_msgSend(m_TrackingComponent[3],"Show:",1);
    }
  }
  uVar8 = *m_TrackingComponent;
  bVar7 = uVar8 != 2;
  if (!bVar7) {
    uVar8 = (uint)*(byte *)((int)m_TrackingComponent + 6);
  }
  if (bVar7 || uVar8 != 0) {
    return 1;
  }
  if (m_DragCallback == (code *)0x0) {
    return 1;
  }
  uVar2 = *(undefined2 *)(m_TrackingComponent + 2);
LAB_0000eedc:
  (*m_DragCallback)(m_CallbackUser,uVar2,param_1,uVar8);
  return 1;
}



// Function Stack Size: 0xc bytes

char TextEditHandler::textFieldShouldReturn_(ID param_1,SEL param_2,ID param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = _objc_msgSend(param_3,"text");
  uVar2 = _objc_msgSend(uVar1,"length");
  if (*(uint *)(param_1 + m_MinLimit) <= uVar2) {
    GUI::HandleTextEditReturn(*(GUIComponent **)(param_1 + m_Component));
  }
  return '\0';
}



// Function Stack Size: 0x18 bytes

char TextEditHandler::textField_shouldChangeCharactersInRange_replacementString_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,ID param_5)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = _objc_msgSend(param_3,"text");
  uVar2 = _objc_msgSend(uVar1,"length");
  if (uVar2 < *(uint *)(param_1 + m_Limit)) {
    param_4.field0_0x0 = 1;
  }
  else if (param_4.field0_0x0 != 0) {
    param_4.field0_0x0 = 1;
  }
  return (char)param_4.field0_0x0;
}



// GUI::HandlePressed(Core::Touch*)

undefined4 GUI::HandlePressed(Touch *param_1)

{
  int iVar1;
  bool bVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  
  if (m_TrackingTouch == (Touch *)0x0) {
    if (m_TrackingComponent == (undefined1 *)0x0) {
      puVar8 = (uint *)&m_Components;
      uVar9 = 0;
      uVar11 = VectorFloatToUnsigned(*(undefined4 *)(param_1 + 8),3);
      uVar11 = uVar11 & 0xffff;
      uVar12 = VectorFloatToUnsigned(*(undefined4 *)(param_1 + 0xc),3);
      uVar12 = uVar12 & 0xffff;
      do {
        if (m_ComponentCount <= uVar9) {
          return 0;
        }
        uVar6 = (uint)*(byte *)(puVar8 + 1);
        bVar10 = uVar6 != 0;
        if (bVar10) {
          uVar6 = (uint)*(byte *)((int)puVar8 + 5);
        }
        bVar2 = uVar6 != 0;
        if (bVar10 && bVar2) {
          uVar6 = *puVar8;
        }
        if (((bVar10 && bVar2) && uVar6 != 0) && (uVar6 != 3)) {
          psVar3 = (short *)GUIComponent::GetPosition();
          uVar13 = GUIComponent::GetBounds();
          iVar5 = (int)((ulonglong)uVar13 >> 0x20);
          psVar4 = (short *)uVar13;
          if (psVar3 != (short *)0x0 && psVar4 != (short *)0x0) {
            iVar7 = (int)*psVar3;
            bVar10 = SBORROW4(uVar11,iVar7);
            iVar1 = uVar11 - iVar7;
            if (iVar7 <= (int)uVar11) {
              iVar5 = (int)psVar3[1];
              bVar10 = SBORROW4(uVar12,iVar5);
              iVar1 = uVar12 - iVar5;
            }
            if (((iVar1 < 0 == bVar10) && ((int)uVar11 < *psVar4 + iVar7)) &&
               ((int)uVar12 < psVar4[1] + iVar5)) {
              m_TrackingTouch = param_1;
              m_TrackingComponent = &m_Components + uVar9 * 0x24;
              if ((&DAT_0001a604)[uVar9 * 9] != 0) {
                _objc_msgSend((&DAT_0001a604)[uVar9 * 9],"Show:",1);
                if ((&DAT_0001a600)[uVar9 * 9] != 0) {
                  _objc_msgSend((&DAT_0001a600)[uVar9 * 9],"Show:",0);
                }
              }
              if ((&DAT_0001a5fa)[uVar9 * 0x24] == '\0') {
                Sounds::Play(*(SoundDesc *)(&DAT_0001a614 + uVar9 * 0x24),false);
              }
              return 1;
            }
          }
        }
        uVar9 = uVar9 + 1;
        puVar8 = puVar8 + 9;
      } while( true );
    }
  }
  else if (m_TrackingComponent == (undefined1 *)0x0) {
    m_TrackingTouch = (Touch *)0x0;
    m_TrackingComponent = (undefined1 *)0x0;
    return 0;
  }
  if (*(int *)((int)m_TrackingComponent + 0x10) != 0) {
    _objc_msgSend(*(int *)((int)m_TrackingComponent + 0x10),"Show:",0);
    if (*(int *)((int)m_TrackingComponent + 0xc) != 0) {
      _objc_msgSend(*(int *)((int)m_TrackingComponent + 0xc),"Show:",1);
    }
  }
  m_TrackingComponent = (undefined1 *)0x0;
  m_TrackingTouch = (Touch *)0x0;
  return 0;
}



// GUIComponent::Reposition(float, float)

void __thiscall GUIComponent::Reposition(GUIComponent *this,float param_1,float param_2)

{
  short *psVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined4 uVar4;
  
  psVar1 = (short *)GetBounds();
  if (psVar1 != (short *)0x0) {
    uVar4 = VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x15) & 3);
    uVar3 = VectorSignedToFloat((int)psVar1[1],(byte)(in_fpscr >> 0x15) & 3);
    if (this->field3_0xc != 0) {
      _objc_msgSend(this->field3_0xc,"UpdateBounds:",param_1,param_2,uVar4,uVar3);
    }
    if (*(int *)&this->field4_0x10 != 0) {
      _objc_msgSend(*(int *)&this->field4_0x10,"UpdateBounds:",param_1,param_2,uVar4,uVar3);
    }
    iVar2 = *(int *)((int)&this->field5_0x12 + 2);
    if (iVar2 != 0) {
      _objc_msgSend(iVar2,"UpdateBounds:",param_1,param_2,uVar4,uVar3);
    }
    iVar2 = *(int *)((int)&this->field6_0x16 + 2);
    if (iVar2 != 0) {
      _objc_msgSend(iVar2,"UpdateBounds:",param_1,param_2,uVar4,uVar3);
    }
  }
  return;
}



// GUI::CreateScreenDisable(unsigned short)

undefined1 * GUI::CreateScreenDisable(ushort param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  
  iVar1 = m_ComponentCount;
  puVar3 = &DAT_0001a5f9;
  for (iVar4 = 0; iVar4 != m_ComponentCount; iVar4 = iVar4 + 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 0x24;
  }
  iVar4 = m_ComponentCount * 0x24;
  m_ComponentCount = m_ComponentCount + 1;
  GUIComponent::Reset();
  *(undefined4 *)(&m_Components + iVar4) = 6;
  *(undefined4 *)(&DAT_0001a614 + iVar4) = 2;
  (&DAT_0001a5fc)[iVar1 * 0x12] = param_1;
  uVar2 = _objc_msgSend(&objc::class_t::GUIText,"alloc");
  uVar2 = _objc_msgSend(uVar2,"initWithFrame:",0,0,0x43f00000,0x43a00000);
  uVar2 = _objc_msgSend(uVar2,"autorelease");
  (&DAT_0001a60c)[iVar1 * 9] = uVar2;
  _objc_msgSend(m_View,"addSubview:",uVar2);
  return &m_Components + iVar4;
}



// Sounds::Enabled(bool, bool)

void Sounds::Enabled(bool param_1,bool param_2)

{
  _s_SoundsEnabled = param_1;
  _s_MusicEnabled = param_2;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Sounds::IsStreaming()

undefined Sounds::IsStreaming(void)

{
  return _Streaming;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Sounds::Vibrate()

void Sounds::Vibrate(void)

{
  _AudioServicesPlaySystemSound(0xfff);
  return;
}



// Sounds::PrepareToPlay(char const*)

void Sounds::PrepareToPlay(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((_s_Streamer == 0) && (_s_MusicEnabled != '\0')) {
    uVar1 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar1 = _objc_msgSend(uVar1,"resourcePath");
    uVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s,param_1);
    uVar1 = _objc_msgSend(uVar1,"stringByAppendingPathComponent:",uVar2);
    uVar2 = _objc_msgSend(&_OBJC_CLASS___AVAudioPlayer,"alloc");
    uVar1 = _objc_msgSend(&_OBJC_CLASS___NSURL,"fileURLWithPath:",uVar1);
    _s_Streamer = _objc_msgSend(uVar2,"initWithContentsOfURL:error:",uVar1,0);
    if (_s_Streamer != 0) {
      _objc_msgSend(_s_Streamer,"setDelegate:",_s_Delegate);
      _objc_msgSend(_s_Streamer,"prepareToPlay");
    }
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Sounds::StopStream()

void Sounds::StopStream(void)

{
  if (_s_Streamer == 0) {
    return;
  }
  _objc_msgSend(_s_Streamer,"stop");
  _objc_msgSend(_s_Streamer,"release");
  _s_Streamer = 0;
  _Streaming = 0;
  return;
}



// Sounds::Stream(char const*)

void Sounds::Stream(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((_s_Streamer == 0) && (_s_MusicEnabled != '\0')) {
    uVar1 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar1 = _objc_msgSend(uVar1,"resourcePath");
    uVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s,param_1);
    uVar1 = _objc_msgSend(uVar1,"stringByAppendingPathComponent:",uVar2);
    uVar2 = _objc_msgSend(&_OBJC_CLASS___AVAudioPlayer,"alloc");
    uVar1 = _objc_msgSend(&_OBJC_CLASS___NSURL,"fileURLWithPath:",uVar1);
    _s_Streamer = _objc_msgSend(uVar2,"initWithContentsOfURL:error:",uVar1,0);
    if (_s_Streamer != 0) {
      _objc_msgSend(_s_Streamer,"setDelegate:",_s_Delegate);
      _objc_msgSend(_s_Streamer,"prepareToPlay");
      _objc_msgSend(_s_Streamer,"play");
      _objc_msgSend(_s_Streamer,"setNumberOfLoops:",0xffffffff);
      _Streaming = 1;
    }
  }
  return;
}



// Sounds::Play(SoundDesc, bool)

void Sounds::Play(SoundDesc param_1,bool param_2)

{
  if (((_s_SoundsEnabled != '\0') && (param_1 != 0)) && ((&_s_SoundPlaying)[param_1] == '\0')) {
    (&_s_SoundPlaying)[param_1] = param_2;
    if (param_2) {
      _AudioServicesAddSystemSoundCompletion
                (*(undefined4 *)(&_s_SoundID + param_1 * 4),0,0,CompletionCallback,param_1);
    }
    _AudioServicesPlaySystemSound(*(undefined4 *)(&_s_SoundID + param_1 * 4));
  }
  return;
}



// CompletionCallback(unsigned long, void*)

void CompletionCallback(ulong param_1,void *param_2)

{
  *(undefined *)((int)param_2 + 0x19c80) = 0;
  _AudioServicesRemoveSystemSoundCompletion();
  return;
}



// Sounds::Init(GameDelegate*)

void Sounds::Init(GameDelegate *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  do {
    uVar1 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar1 = _objc_msgSend(uVar1,"resourcePath");
    uVar1 = _objc_msgSend(uVar1,"stringByAppendingPathComponent:",
                          *(undefined4 *)(&_s_Filenames + iVar3 * 4));
    uVar1 = _objc_msgSend(&_OBJC_CLASS___NSURL,"fileURLWithPath:",uVar1);
    iVar2 = _AudioServicesCreateSystemSoundID(uVar1,&_s_SoundID + iVar3 * 4);
    if (iVar2 != 0) {
      _printf("Sounds::LoadAll(...) : WARNING! Failed to load sound %i\n",iVar3);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x2a);
  _s_Delegate = param_1;
  return;
}



// Core::Sprite::Render(Core::Math::Vector2 const&, Core::Math::Vector2 const&, unsigned int)

void __thiscall Core::Sprite::Render(Sprite *this,Vector2 *param_1,Vector2 *param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  
  iVar3 = *(int *)this;
  if (iVar3 != 0) {
    if (Render(Core::Math::Vector2_const&,Core::Math::Vector2_const&,unsigned_int)::verts == '\0') {
      iVar3 = ___cxa_guard_acquire
                        (&Render(Core::Math::Vector2_const&,Core::Math::Vector2_const&,unsigned_int)
                          ::verts);
      if (iVar3 != 0) {
        ___cxa_guard_release
                  (&Render(Core::Math::Vector2_const&,Core::Math::Vector2_const&,unsigned_int)::
                    verts);
      }
      iVar3 = *(int *)this;
    }
    uVar1 = *(undefined2 *)(this + 8);
    fVar6 = 0.25;
    uVar8 = (uint)*(ushort *)(this + 4);
    fVar7 = (float)VectorSignedToFloat((uint)*(ushort *)(iVar3 + 0x10),(byte)(in_fpscr >> 0x15) & 3)
    ;
    iVar2 = ___umodsi3(param_3,uVar1);
    fVar4 = (float)VectorUnsignedToFloat(uVar8 * iVar2,(byte)(in_fpscr >> 0x15) & 3);
    uVar10 = (uint)*(ushort *)(this + 6);
    fVar9 = (float)VectorSignedToFloat((uint)*(ushort *)(iVar3 + 0x12),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar5 = (fVar4 + fVar6) / fVar7;
    iVar3 = ___udivsi3(param_3,uVar1);
    DAT_0001cffc = *(undefined4 *)(param_1 + 4);
    Render(Core::Math::Vector2_const&,Core::Math::Vector2_const&,unsigned_int)::verts =
         *(undefined4 *)param_1;
    fVar4 = (float)VectorUnsignedToFloat(uVar10 * iVar3,(byte)(in_fpscr >> 0x15) & 3);
    DAT_0001d004 = (fVar4 + fVar6) / fVar9;
    DAT_0001d008 = *(float *)param_1 + *(float *)param_2;
    fVar4 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
    DAT_0001d00c = *(undefined4 *)(param_1 + 4);
    DAT_0001d010 = fVar5 + (fVar4 - fVar6) / fVar7;
    DAT_0001d01c = *(float *)(param_1 + 4) + *(float *)(param_2 + 4);
    DAT_0001d018 = *(undefined4 *)param_1;
    fVar4 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
    DAT_0001d024 = DAT_0001d004 + (fVar4 - fVar6) / fVar9;
    DAT_0001d02c = *(float *)(param_1 + 4) + *(float *)(param_2 + 4);
    DAT_0001d028 = *(float *)param_1 + *(float *)param_2;
    DAT_0001d000 = fVar5;
    DAT_0001d014 = DAT_0001d004;
    DAT_0001d020 = fVar5;
    DAT_0001d030 = DAT_0001d010;
    DAT_0001d034 = DAT_0001d024;
    Texture::Begin(*(Texture **)this,0);
    _glVertexPointer(2,0x1406,0x10,
                     &Render(Core::Math::Vector2_const&,Core::Math::Vector2_const&,unsigned_int)::
                      verts);
    _glTexCoordPointer(2,0x1406,0x10,&DAT_0001d000);
    _glDrawArrays(5,0,4);
    Texture::End(*(Texture **)this,0);
  }
  return;
}



// Core::Sprite::Render(Core::Math::Vector2 const&, unsigned int)

void __thiscall Core::Sprite::Render(Sprite *this,Vector2 *param_1,uint param_2)

{
  uint in_fpscr;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(int *)this != 0) {
    local_c = VectorUnsignedToFloat((uint)*(ushort *)(this + 6),(byte)(in_fpscr >> 0x15) & 3);
    local_10 = VectorUnsignedToFloat((uint)*(ushort *)(this + 4),(byte)(in_fpscr >> 0x15) & 3);
    Render(this,param_1,(Vector2 *)&local_10,param_2);
  }
  return;
}



// Core::Sprite::Init(char const*, unsigned short, unsigned short, unsigned int)

void __thiscall
Core::Sprite::Init(Sprite *this,char *param_1,ushort param_2,ushort param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  *(ushort *)(this + 4) = param_2;
  *(ushort *)(this + 6) = param_3;
  *(undefined2 *)(this + 8) = (undefined2)param_4;
  iVar2 = TextureManager::LoadTexture((Heap *)PTR_m_Heap_000180a4,param_1);
  *(int *)this = iVar2;
  if (iVar2 == 0) {
    return;
  }
  Texture::Load();
  if (*(short *)(this + 8) != 0) {
    return;
  }
  uVar1 = ___udivsi3(*(undefined2 *)(*(int *)this + 0xc),*(undefined2 *)(this + 4));
  *(undefined2 *)(this + 8) = uVar1;
  return;
}



// Core::Sprite::Render(Core::Math::Vector2 const&, Core::Math::Vector2 const&, unsigned int, float,
// float)

void __thiscall
Core::Sprite::Render
          (Sprite *this,Vector2 *param_1,Vector2 *param_2,uint param_3,float param_4,float param_5)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  undefined4 in_cr7;
  undefined4 in_cr8;
  float fVar6;
  undefined8 in_d8;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar5 = *(int *)this;
  if (iVar5 != 0) {
    if (Render(Core::Math::Vector2_const&,Core::Math::Vector2_const&,unsigned_int,float,float)::
        verts == '\0') {
      iVar5 = ___cxa_guard_acquire
                        (&Render(Core::Math::Vector2_const&,Core::Math::Vector2_const&,unsigned_int,float,float)
                          ::verts);
      if (iVar5 != 0) {
        ___cxa_guard_release
                  (&Render(Core::Math::Vector2_const&,Core::Math::Vector2_const&,unsigned_int,float,float)
                    ::verts);
      }
      iVar5 = *(int *)this;
    }
    uVar1 = *(undefined2 *)(this + 8);
    uVar2 = *(ushort *)(this + 4);
    fVar8 = 0.25;
    fVar10 = (float)VectorSignedToFloat((uint)*(ushort *)(iVar5 + 0x10),(byte)(in_fpscr >> 0x15) & 3
                                       );
    iVar4 = ___umodsi3(param_3,uVar1);
    uVar3 = *(ushort *)(this + 6);
    fVar9 = (float)VectorSignedToFloat((uint)*(ushort *)(iVar5 + 0x12),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar6 = (float)VectorUnsignedToFloat((uint)uVar2 * iVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (fVar6 + fVar8) / fVar10;
    iVar5 = ___udivsi3(param_3,uVar1);
    fVar6 = (float)VectorUnsignedToFloat((uint)uVar3 * iVar5,(byte)(in_fpscr >> 0x15) & 3);
    DAT_0001cfbc = (fVar6 + fVar8) / fVar9;
    coprocessor_function(10,6,4,in_cr8,in_cr7,in_cr7);
    coprocessor_function(10,2,4,in_cr8,in_cr7,in_cr7);
    DAT_0001cfc0 = (float)((ulonglong)in_d8 >> 0x20);
    Render(Core::Math::Vector2_const&,Core::Math::Vector2_const&,unsigned_int,float,float)::verts =
         -DAT_0001cfc0;
    DAT_0001cfd4 = (float)in_d8;
    DAT_0001cfb4 = -DAT_0001cfd4;
    fVar6 = (float)VectorSignedToFloat((uint)uVar2,(byte)(in_fpscr >> 0x15) & 3);
    DAT_0001cfc8 = fVar7 + (fVar6 - fVar8) / fVar10;
    fVar6 = (float)VectorSignedToFloat((uint)uVar3,(byte)(in_fpscr >> 0x15) & 3);
    DAT_0001cfdc = DAT_0001cfbc + (fVar6 - fVar8) / fVar9;
    DAT_0001cfb8 = fVar7;
    DAT_0001cfc4 = DAT_0001cfb4;
    DAT_0001cfcc = DAT_0001cfbc;
    DAT_0001cfd0 = Render(Core::Math::Vector2_const&,Core::Math::Vector2_const&,unsigned_int,float,float)
                   ::verts;
    DAT_0001cfd8 = fVar7;
    DAT_0001cfe0 = DAT_0001cfc0;
    DAT_0001cfe4 = DAT_0001cfd4;
    DAT_0001cfe8 = DAT_0001cfc8;
    DAT_0001cfec = DAT_0001cfdc;
    Texture::Begin(*(Texture **)this,0);
    _glPushMatrix();
    _glTranslatef((float)((ulonglong)in_d8 >> 0x20) + *(float *)param_1,
                  (float)in_d8 + *(float *)(param_1 + 4),0);
    _glRotatef(param_4 / 0.01745329,0,0,0x3f800000);
    _glScalef(param_5,param_5,0x3f800000);
    _glVertexPointer(2,0x1406,0x10,
                     &Render(Core::Math::Vector2_const&,Core::Math::Vector2_const&,unsigned_int,float,float)
                      ::verts);
    _glTexCoordPointer(2,0x1406,0x10,&DAT_0001cfb8);
    _glDrawArrays(5,0,4);
    _glPopMatrix();
    Texture::End(*(Texture **)this,0);
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Creep::PathStartDirection()

undefined4 Creep::PathStartDirection(void)

{
  int in_r0;
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(PTR_m_Entrance_000180f0 + (uint)*(byte *)(in_r0 + 0x43) * 0xc + 8);
  if (fVar2 == 0.0 || fVar2 < 0.0 != NAN(fVar2)) {
    fVar1 = *(float *)(PTR_m_Entrance_000180f0 + (uint)*(byte *)(in_r0 + 0x43) * 0xc + 4);
    if (fVar1 < 0.0) {
      return 1;
    }
    if (fVar2 < 0.0) {
      return 2;
    }
    if (fVar1 != 0.0 && fVar1 < 0.0 == NAN(fVar1)) {
      return 3;
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Creep::PathEndDirection()

undefined4 Creep::PathEndDirection(void)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(PTR_m_Exit_000180e8 + 8);
  if (0.0 <= fVar2) {
    fVar1 = *(float *)(PTR_m_Exit_000180e8 + 4);
    if (fVar1 != 0.0 && fVar1 < 0.0 == NAN(fVar1)) {
      return 1;
    }
    if (fVar2 != 0.0 && fVar2 < 0.0 == NAN(fVar2)) {
      return 2;
    }
    if (fVar1 < 0.0) {
      return 3;
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Creep::NextGridIndex()

uint Creep::NextGridIndex(void)

{
  int in_r0;
  
  switch(*(undefined *)(in_r0 + 0x42)) {
  case 0:
    return (uint)*(ushort *)(in_r0 + 0x40) - (uint)*(ushort *)PTR_m_GridSize_0001806c;
  case 1:
    return *(ushort *)(in_r0 + 0x40) + 1;
  case 2:
    return (uint)*(ushort *)PTR_m_GridSize_0001806c + (uint)*(ushort *)(in_r0 + 0x40);
  case 3:
    return *(ushort *)(in_r0 + 0x40) - 1;
  default:
    return (uint)*(ushort *)(in_r0 + 0x40);
  }
}



// Creep::FollowPath(float)

float __thiscall Creep::FollowPath(Creep *this,float param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 0.0;
  uVar2 = *(undefined4 *)PTR_m_CellSize_00018064;
  do {
    if (param_1 == 0.0 || param_1 < 0.0 != NAN(param_1)) {
      return fVar6;
    }
    fVar4 = *(float *)(this + 0x28);
    fVar5 = fVar4;
    if (param_1 == fVar4 || param_1 < fVar4 != (NAN(param_1) || NAN(fVar4))) {
      fVar5 = param_1;
    }
    switch(this[0x42]) {
    case (Creep)0x0:
      fVar3 = *(float *)(this + 0x1c) - fVar5;
      break;
    case (Creep)0x1:
      fVar3 = *(float *)(this + 0x18) + fVar5;
      goto LAB_0001002c;
    case (Creep)0x2:
      fVar3 = *(float *)(this + 0x1c) + fVar5;
      break;
    case (Creep)0x3:
      fVar3 = *(float *)(this + 0x18) - fVar5;
LAB_0001002c:
      *(float *)(this + 0x18) = fVar3;
    default:
      goto switchD_0000ffe4_caseD_4;
    }
    *(float *)(this + 0x1c) = fVar3;
switchD_0000ffe4_caseD_4:
    *(float *)(this + 0x28) = fVar4 - fVar5;
    if (fVar4 - fVar5 <= 0.0) {
      *(undefined4 *)(this + 0x28) = uVar2;
      this[0x42] = (Creep)(*(byte *)((uint)*(ushort *)(this + 0x40) * 4 +
                                     *(int *)PTR_m_GridInfo_000180e4 + 3) >> 5);
      uVar1 = NextGridIndex();
      *(undefined2 *)(this + 0x40) = uVar1;
    }
    fVar6 = fVar6 + fVar5;
    param_1 = param_1 - fVar5;
  } while( true );
}



// Creep::Init(CreepType, unsigned int, float)

void __thiscall Creep::Init(Creep *this,CreepType param_1,uint param_2,float param_3)

{
  _memset(this + 0x10,0,0x3c);
  *(undefined4 *)(this + 0x34) = 0x3f800000;
  *(CreepType *)(this + 0x10) = param_1;
  *(float *)(this + 0x20) = param_3;
  this[0x43] = SUB41(param_2,0);
  if (PTR_m_Info_00018054[param_1 * 0x6c + 0x44] != '\0') {
    _gettimeofday((timeval *)this,(void *)0x0);
  }
  return;
}



// Creep::Creep()

void __thiscall Creep::Creep(Creep *this)

{
  Init(this,0,0,0.0);
  *(undefined4 *)(this + 0x14) = 7;
  return;
}



// Creep::Creep()

void __thiscall Creep::Creep(Creep *this)

{
  Init(this,0,0,0.0);
  *(undefined4 *)(this + 0x14) = 7;
  return;
}



// Creep::FreezeTower(Core::Math::Vector2 const&, unsigned char)

void Creep::FreezeTower(Vector2 *param_1,uchar param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  puVar1 = PTR_m_Info_00018054;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = Level::GetTowerInRange
                    ((Vector2 *)(uint)param_2,*(float *)(PTR_m_Info_00018054 + iVar3 * 0x6c + 0x48))
  ;
  if (iVar2 == 0) {
    return;
  }
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(puVar1 + iVar3 * 0x6c + 0x4c);
  fVar4 = *(float *)(param_1 + 0x3c);
  if (fVar4 == 0.5 || fVar4 < 0.5 != NAN(fVar4)) {
    fVar4 = 0.5;
  }
  *(float *)(param_1 + 0x3c) = fVar4;
  Sounds::Play(0x12,false);
  return;
}



// Creep::SlowDown(float, float)

void __thiscall Creep::SlowDown(Creep *this,float param_1,float param_2)

{
  float fVar1;
  
  if (PTR_m_Info_00018054[*(int *)(this + 0x10) * 0x6c + 0x41] != '\0') {
    return;
  }
  fVar1 = *(float *)(this + 0x34);
  if (fVar1 == param_1 || fVar1 < param_1 != (NAN(fVar1) || NAN(param_1))) {
    param_1 = fVar1;
  }
  *(float *)(this + 0x34) = param_1;
  fVar1 = *(float *)(this + 0x38);
  if (fVar1 == param_2 || fVar1 < param_2 != (NAN(fVar1) || NAN(param_2))) {
    fVar1 = param_2;
  }
  *(float *)(this + 0x38) = fVar1;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Creep::RenderHealth()

void Creep::RenderHealth(void)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  int in_r0;
  undefined4 uVar4;
  uint in_fpscr;
  uint uVar5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  float fVar6;
  float fVar7;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  fVar6 = *(float *)(in_r0 + 0x30);
  if ((0.0 < fVar6) && (*(int *)(in_r0 + 0x14) - 1U < 4)) {
    fVar7 = *(float *)(in_r0 + 0x2c) /
            *(float *)(PTR_m_Info_00018054 +
                      (uint)*(ushort *)PTR_m_Difficulty_00018070 * 0xc +
                      *(int *)(in_r0 + 0x10) * 0x6c + 0x58);
    sVar2 = (short)(int)*(float *)(in_r0 + 0x18);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < 1.0) << 0x1f;
    uVar5 = uVar1 | (uint)NAN(fVar6) << 0x1c;
    local_34 = sVar2 + 0xd;
    if ((byte)(uVar1 >> 0x1f) != ((byte)(uVar5 >> 0x1c) & 1)) {
      coprocessor_function(10,6,5,in_cr7,in_cr6,in_cr7);
    }
    local_38 = sVar2 + -0xd;
    sVar3 = (short)(int)(*(float *)(in_r0 + 0x1c) - 24.0);
    local_36 = sVar3 + -2;
    local_2e = sVar3 + 2;
    local_32 = local_36;
    local_30 = local_38;
    local_2c = local_34;
    local_2a = local_2e;
    AssetManager::UpdateDecl(3,&local_38);
    _glColor4ub(0,0,0,0xff);
    _glDrawArrays(5,0,4);
    fVar6 = (float)VectorSignedToFloat(sVar2 + -0xc,(byte)(uVar5 >> 0x15) & 3);
    coprocessor_function(10,6,1,in_cr7,in_cr8,in_cr7);
    local_34 = (short)(int)(fVar6 + 24.0);
    local_38 = sVar2 + -0xc;
    local_36 = sVar3 + -1;
    local_32 = sVar3 + -1;
    local_30 = sVar2 + -0xc;
    local_2e = sVar3 + 1;
    local_2c = local_34;
    local_2a = sVar3 + 1;
    AssetManager::UpdateDecl(3,&local_38);
    if (fVar7 == 0.6 || fVar7 < 0.6 != NAN(fVar7)) {
      if (fVar7 == 0.3 || fVar7 < 0.3 != NAN(fVar7)) {
        uVar4 = 0xff;
      }
      else {
        uVar4 = 0xff;
      }
    }
    else {
      uVar4 = 0;
    }
    _glColor4ub(uVar4);
    _glDrawArrays(5,0,4);
    _glColor4ub(0xff,0xff,0xff,0xff);
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Creep::Render()

void Creep::Render(void)

{
  int in_r0;
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  Sprite *this;
  int iVar5;
  bool bVar6;
  uint in_fpscr;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  float fVar7;
  float fVar8;
  int iVar9;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  
  iVar4 = *(int *)(in_r0 + 0x10);
  if (PTR_m_Info_00018054[iVar4 * 0x6c + 0x40] != '\0') {
    if (*(int *)(in_r0 + 0x14) == 7 || *(int *)(in_r0 + 0x14) == 0) {
      return;
    }
    local_20 = *(float *)(in_r0 + 0x18) - 32.0;
    local_1c = (*(float *)(in_r0 + 0x28) - 16.0) + *(float *)(in_r0 + 0x1c);
    Core::Sprite::Render((Sprite *)PTR_m_Shadow_000180ec,(Vector2 *)&local_20,0);
  }
  iVar5 = *(int *)(in_r0 + 0x14);
  switch(iVar5) {
  case 1:
  case 2:
  case 3:
  case 4:
    if (*(char *)(in_r0 + 0x45) != '\0') {
      local_28 = 0x42000000;
      local_24 = 0x42000000;
      local_20 = *(float *)(in_r0 + 0x18) - 16.0;
      fVar8 = 24.0;
      local_1c = *(float *)(in_r0 + 0x1c) - 24.0;
      if (PTR_m_Info_00018054[iVar4 * 0x6c + 0x40] != '\0') {
        fVar8 = 38.0;
      }
      if (PTR_m_Info_00018054[iVar4 * 0x6c + 0x40] != '\0') {
        local_1c = local_1c - fVar8;
        fVar8 = 1.5;
      }
      else {
        fVar8 = 1.2;
      }
      fVar7 = (float)VectorSignedToFloat((uint)*(ushort *)
                                                (PTR_m_Info_00018054 + iVar4 * 0x6c + 0x28),
                                         (byte)(in_fpscr >> 0x15) & 3);
      coprocessor_function(10,6,4,in_cr7,in_cr7,in_cr7);
      uVar1 = VectorFloatToUnsigned(*(float *)(in_r0 + 0x24) / fVar7,3);
      Core::Sprite::Render
                ((Sprite *)PTR_m_Suck_000180e0,(Vector2 *)&local_20,(Vector2 *)&local_28,uVar1 & 7,
                 0.0,fVar8);
    }
    this = (Sprite *)(PTR_m_Info_00018054 + iVar4 * 0x6c);
    uVar1 = (uint)*(byte *)(in_r0 + 0x42);
    bVar6 = uVar1 == 3;
    local_38 = *(float *)(in_r0 + 0x18) - *(float *)(this + 0x34) * *(float *)(this + 0x18);
    if (bVar6) {
      uVar1 = 1;
    }
    local_34 = *(float *)(in_r0 + 0x1c) - *(float *)(this + 0x34) * *(float *)(this + 0x1c);
    local_30 = (float)(uint)*(ushort *)(this + 4);
    VectorUnsignedToFloat((uint)*(ushort *)(this + 6),(byte)(in_fpscr >> 0x15) & 3);
    local_2c = (float)VectorUnsignedToFloat(local_30,(byte)(in_fpscr >> 0x15) & 3);
    coprocessor_function(10,2,5,in_cr7,in_cr7,in_cr6);
    coprocessor_function(10,6,5,in_cr7,in_cr5,in_cr6);
    if (bVar6) {
      local_38 = local_38 + local_30;
      local_30 = -local_30;
    }
    iVar5 = VectorFloatToUnsigned(*(undefined4 *)(in_r0 + 0x24),3);
    fVar8 = *(float *)(in_r0 + 0x38);
    uVar1 = *(ushort *)(PTR_m_Info_00018054 + iVar4 * 0x6c + 0x28) * uVar1 + iVar5;
    if (fVar8 == 0.0 || fVar8 < 0.0 != NAN(fVar8)) {
      Core::Sprite::Render(this,(Vector2 *)&local_38,(Vector2 *)&local_30,uVar1);
    }
    else {
      _glColor4ub(0x80,0xff,0x80,0xff);
      Core::Sprite::Render(this,(Vector2 *)&local_38,(Vector2 *)&local_30,uVar1);
      _glColor4ub(0xff,0xff,0xff,0xff);
    }
    fVar8 = *(float *)(in_r0 + 0x3c);
    if (fVar8 != 0.0 && fVar8 < 0.0 == NAN(fVar8)) {
      _glColor4ub(0,0x40,0xff,0);
      pfVar2 = &local_38;
      pfVar3 = &local_30;
      goto LAB_0001084c;
    }
    break;
  case 6:
    fVar8 = *(float *)(in_r0 + 0x20) / 255.0;
    _glColor4f(fVar8,fVar8,fVar8,fVar8);
    iVar5 = *(int *)(in_r0 + 0x14);
  case 5:
    iVar9 = iVar4 * 0x6c;
    this = (Sprite *)(PTR_m_Info_00018054 + iVar9 + 0xc);
    uVar1 = (uint)*(byte *)(in_r0 + 0x42);
    local_30 = *(float *)(in_r0 + 0x18) -
               *(float *)(PTR_m_Info_00018054 + iVar9 + 0x38) *
               *(float *)(PTR_m_Info_00018054 + iVar9 + 0x20);
    bVar6 = uVar1 == 3;
    if (bVar6) {
      uVar1 = 1;
    }
    local_2c = *(float *)(in_r0 + 0x1c) -
               *(float *)(PTR_m_Info_00018054 + iVar9 + 0x38) *
               *(float *)(PTR_m_Info_00018054 + iVar9 + 0x24);
    local_38 = (float)(uint)*(ushort *)(PTR_m_Info_00018054 + iVar9 + 0x10);
    VectorUnsignedToFloat
              ((uint)*(ushort *)(PTR_m_Info_00018054 + iVar9 + 0x12),(byte)(in_fpscr >> 0x15) & 3);
    local_34 = (float)VectorUnsignedToFloat(local_38,(byte)(in_fpscr >> 0x15) & 3);
    coprocessor_function(10,2,5,in_cr7,in_cr7,in_cr6);
    coprocessor_function(10,6,5,in_cr7,in_cr5,in_cr6);
    if (bVar6) {
      local_30 = local_30 + local_38;
      local_38 = -local_38;
    }
    iVar9 = VectorFloatToUnsigned(*(undefined4 *)(in_r0 + 0x24),3);
    uVar1 = *(ushort *)(PTR_m_Info_00018054 + iVar4 * 0x6c + 0x2a) * uVar1 + iVar9;
    if ((iVar5 == 6) ||
       (fVar8 = *(float *)(in_r0 + 0x38), fVar8 == 0.0 || fVar8 < 0.0 != NAN(fVar8))) {
      Core::Sprite::Render(this,(Vector2 *)&local_30,(Vector2 *)&local_38,uVar1);
    }
    else {
      _glColor4ub(0x80,0xff,0x80,0xff);
      pfVar2 = &local_30;
      pfVar3 = &local_38;
LAB_0001084c:
      Core::Sprite::Render(this,(Vector2 *)pfVar2,(Vector2 *)pfVar3,uVar1);
      _glColor4ub(0xff,0xff,0xff,0xff);
    }
    break;
  default:
    goto switchD_00010504_caseD_6;
  }
  iVar5 = *(int *)(in_r0 + 0x14);
switchD_00010504_caseD_6:
  if (iVar5 == 6) {
    _glColor4ub(0xff,0xff,0xff,0xff);
  }
  return;
}



// Creep::Hurt(float)

void __thiscall Creep::Hurt(Creep *this,float param_1)

{
  bool bVar1;
  bool bVar2;
  SoundDesc SVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  
  uVar5 = *(uint *)(this + 0x14);
  bVar6 = 3 < uVar5;
  if (uVar5 != 4) {
    bVar6 = uVar5 != 1;
  }
  if ((bVar6 && (uVar5 != 4 && uVar5 != 2)) && (uVar5 != 3)) {
    return;
  }
  fVar7 = *(float *)(this + 0x2c);
  bVar6 = fVar7 < param_1;
  bVar1 = fVar7 != param_1;
  bVar2 = NAN(fVar7);
  if (bVar1 && bVar6 == (bVar2 || NAN(param_1))) {
    fVar7 = fVar7 - param_1;
    *(undefined4 *)(this + 0x30) = 0x40800000;
  }
  if (!bVar1 || bVar6 != (bVar2 || NAN(param_1))) {
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x14) = 5;
    iVar4 = (uint)*(ushort *)PTR_m_Difficulty_00018070 * 0xc + *(int *)(this + 0x10) * 0x6c;
    LoL::Score(*(LoL **)PTR_m_Instance_000180d4,
               (uint)*(ushort *)(PTR_m_Info_00018054 + iVar4 + 0x5c),
               (uint)*(ushort *)(PTR_m_Info_00018054 + iVar4 + 0x5e));
    switch(*(undefined4 *)(this + 0x10)) {
    case 0:
      iVar4 = Core::Math::Rand(3);
      SVar3 = iVar4 + 0x14;
      break;
    case 1:
      iVar4 = Core::Math::Rand(3);
      SVar3 = iVar4 + 0x17;
      break;
    case 2:
      iVar4 = Core::Math::Rand(3);
      SVar3 = iVar4 + 0x1a;
      break;
    case 3:
      SVar3 = 0x1d;
      break;
    case 4:
      SVar3 = 0x1e;
      break;
    case 5:
      Sounds::Play(0x1f,false);
    default:
      return;
    }
    Sounds::Play(SVar3,false);
    return;
  }
  *(float *)(this + 0x2c) = fVar7;
  return;
}



// Creep::DestroyTower(Core::Math::Vector2 const&, unsigned char)

void __thiscall Creep::DestroyTower(Creep *this,Vector2 *param_1,uchar param_2)

{
  int iVar1;
  uint local_14;
  uint local_10;
  
  Level::GetGridCoord(param_1,&local_10,&local_14);
  if (param_2 == '\x03') {
    if (local_10 != 0) {
      local_10 = local_10 - 1;
      goto LAB_00010ac8;
    }
  }
  else if (param_2 == '\x01') {
    if (local_10 < *(ushort *)PTR_m_GridSize_0001806c - 1) {
      local_10 = local_10 + 1;
      goto LAB_00010ac8;
    }
  }
  else if (param_2 == '\0') {
    if (local_14 != 0) {
      local_14 = local_14 - 1;
    }
    goto LAB_00010ac8;
  }
  if ((param_2 == '\x02') && (local_14 < *(ushort *)(PTR_m_GridSize_0001806c + 2) - 1)) {
    local_14 = local_14 + 1;
  }
LAB_00010ac8:
  iVar1 = (local_14 * *(ushort *)PTR_m_GridSize_0001806c + local_10) * 8;
  if ((*(byte *)(iVar1 + *(int *)PTR_m_Grid_0001808c) & 4) != 0) {
    Level::RemoveTower(*(Tower **)(iVar1 + *(int *)PTR_m_Grid_0001808c + 4));
    Level::DestructionAt(local_10,local_14);
    Sounds::Play(0x13,false);
  }
  return;
}



// Creep::Update(float)

void __thiscall Creep::Update(Creep *this,float param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  Creep CVar6;
  Creep CVar7;
  undefined2 uVar8;
  int iVar9;
  uint in_fpscr;
  uint uVar10;
  uint uVar11;
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  float in_s12;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 in_d8;
  float in_s18;
  float local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  fVar15 = (float)((ulonglong)in_d8 >> 0x20);
  iVar9 = *(int *)(this + 0x10);
  uVar1 = *(ushort *)PTR_m_Difficulty_00018070;
  this[0x45] = (Creep)0x0;
  this[0x46] = (Creep)0x0;
  this[0x47] = (Creep)0x0;
  this[0x48] = (Creep)0x0;
  puVar5 = PTR_m_Exit_000180e8;
  puVar4 = PTR_m_Info_00018054;
  switch(*(undefined4 *)(this + 0x14)) {
  case 0:
    fVar15 = *(float *)(this + 0x20) - param_1;
    uVar10 = in_fpscr & 0xfffffff | (uint)(fVar15 == 0.0) << 0x1e | (uint)(0.0 <= fVar15) << 0x1d;
    *(float *)(this + 0x20) = fVar15;
    bVar2 = (byte)(uVar10 >> 0x18);
    if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
      *(undefined4 *)(this + 0x14) = 1;
      puVar5 = PTR_m_Entrance_000180f0;
      iVar3 = (uint)(byte)this[0x43] * 0xc;
      Level::GetGridPos((Level *)&local_40,(uint)*(ushort *)(PTR_m_Entrance_000180f0 + iVar3),
                        (uint)*(ushort *)(PTR_m_Entrance_000180f0 + iVar3 + 2));
      puVar4 = PTR_m_GridSize_0001806c;
      fVar15 = *(float *)(puVar5 + iVar3 + 8);
      *(float *)(this + 0x18) = *(float *)(puVar5 + iVar3 + 4) + local_40;
      *(float *)(this + 0x1c) = fVar15 + fStack_3c;
      *(short *)(this + 0x40) =
           *(short *)(puVar5 + iVar3 + 2) * *(short *)puVar4 + *(short *)(puVar5 + iVar3);
      puVar4 = PTR_m_Info_00018054;
      iVar9 = iVar9 * 0x6c;
      uVar14 = Core::Math::Rand((uint)*(ushort *)(PTR_m_Info_00018054 + iVar9 + 0x28));
      uVar14 = VectorUnsignedToFloat(uVar14,(byte)(uVar10 >> 0x15) & 3);
      *(undefined4 *)(this + 0x24) = uVar14;
      CVar6 = (Creep)PathStartDirection();
      this[0x42] = CVar6;
      *(undefined4 *)(this + 0x2c) = *(undefined4 *)(puVar4 + (uint)uVar1 * 0xc + iVar9 + 0x58);
      this[0x44] = SUB21(*(undefined2 *)(puVar4 + iVar9 + 0x50),0);
      if (puVar4[iVar9 + 0x40] != '\0') {
        this[0x42] = (Creep)0x0;
        *(undefined4 *)(this + 0x14) = 3;
        *(undefined4 *)(this + 0x28) = *(undefined4 *)(puVar4 + iVar9 + 0x3c);
      }
    }
    break;
  case 1:
    Level::GetGridPos((Level *)&local_40,
                      (uint)*(ushort *)(PTR_m_Entrance_000180f0 + (uint)(byte)this[0x43] * 0xc),
                      (uint)*(ushort *)(PTR_m_Entrance_000180f0 + (uint)(byte)this[0x43] * 0xc + 2))
    ;
    local_38 = local_40 - *(float *)(this + 0x18);
    local_34 = fStack_3c - *(float *)(this + 0x1c);
    coprocessor_function(10,6,5,in_cr7,in_cr7,in_cr7);
    fVar13 = *(float *)(this + 0x34);
    coprocessor_function(10,0xb,7,in_cr9,in_cr1,in_cr7);
    coprocessor_function(10,6,4,in_cr7,in_cr7,in_cr7);
    coprocessor_function(10,6,4,in_cr8,in_cr7,in_cr8);
    uVar10 = in_fpscr & 0xfffffff | (uint)(in_s18 < fVar15) << 0x1f |
             (uint)(in_s18 == fVar15) << 0x1e;
    uVar11 = uVar10 | (uint)(NAN(in_s18) || NAN(fVar15)) << 0x1c;
    bVar2 = (byte)(uVar10 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar11 >> 0x1c) & 1)) {
      *(undefined4 *)(this + 0x14) = 4;
      *(float *)(this + 0x1c) = fStack_3c;
      *(float *)(this + 0x18) = local_40;
      in_s18 = fVar15 - in_s18;
      *(undefined4 *)(this + 0x28) = *(undefined4 *)PTR_m_CellSize_00018064;
      this[0x42] = (Creep)(*(byte *)((uint)*(ushort *)(this + 0x40) * 4 +
                                     *(int *)PTR_m_GridInfo_000180e4 + 3) >> 5);
      uVar8 = NextGridIndex();
      *(undefined2 *)(this + 0x40) = uVar8;
      FollowPath(this,in_s18);
    }
    else {
      Core::Math::Vector2::operator/=((Vector2 *)&local_38,in_s18);
      coprocessor_function(10,2,5,in_cr7,in_cr7,in_cr8);
      coprocessor_function(10,6,5,in_cr6,in_cr7,in_cr8);
      *(float *)(this + 0x18) = *(float *)(this + 0x18) + fVar13;
      *(float *)(this + 0x1c) = *(float *)(this + 0x1c) + local_40;
    }
    puVar4 = PTR_m_Info_00018054;
    coprocessor_function(10,2,1,in_cr7,in_cr8,in_cr7);
    fVar15 = *(float *)(this + 0x24) + fVar13 * fVar15;
    while( true ) {
      *(float *)(this + 0x24) = fVar15;
      fVar13 = (float)VectorSignedToFloat((uint)*(ushort *)(puVar4 + iVar9 * 0x6c + 0x28),
                                          (byte)(uVar11 >> 0x15) & 3);
      uVar10 = uVar11 & 0xfffffff | (uint)(fVar15 < fVar13) << 0x1f;
      uVar11 = uVar10 | (uint)(NAN(fVar15) || NAN(fVar13)) << 0x1c;
      if ((byte)(uVar10 >> 0x1f) != ((byte)(uVar11 >> 0x1c) & 1)) break;
      fVar15 = fVar15 - fVar13;
    }
    break;
  case 2:
  case 3:
    Level::GetGridPos((Level *)&local_40,(uint)*(ushort *)PTR_m_Exit_000180e8,
                      (uint)*(ushort *)(PTR_m_Exit_000180e8 + 2));
    fVar13 = *(float *)(puVar5 + 8) + fStack_3c;
    local_38 = (*(float *)(puVar5 + 4) + local_40) - *(float *)(this + 0x18);
    local_34 = fVar13 - *(float *)(this + 0x1c);
    coprocessor_function(10,6,5,in_cr7,in_cr7,in_cr7);
    fVar12 = *(float *)(this + 0x34);
    coprocessor_function(10,0xf,7,in_cr6,in_cr1,in_cr7);
    coprocessor_function(10,6,4,in_cr7,in_cr7,in_cr7);
    coprocessor_function(10,6,4,in_cr8,in_cr7,in_cr8);
    uVar10 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar15) << 0x1f;
    uVar11 = uVar10 | (uint)(NAN(fVar13) || NAN(fVar15)) << 0x1c;
    if ((byte)(uVar10 >> 0x1f) == ((byte)(uVar11 >> 0x1c) & 1)) {
      Core::Math::Vector2::operator/=((Vector2 *)&local_38,fVar13);
      coprocessor_function(10,2,5,in_cr7,in_cr7,in_cr8);
      coprocessor_function(10,6,5,in_cr6,in_cr7,in_cr8);
      *(float *)(this + 0x18) = *(float *)(this + 0x18) + fVar12;
      *(float *)(this + 0x1c) = *(float *)(this + 0x1c) + fVar13;
    }
    else {
      LoL::HurtPlayer(*(LoL **)PTR_m_Instance_000180d4,1);
      *(undefined4 *)(this + 0x14) = 7;
    }
    puVar4 = PTR_m_Info_00018054;
    coprocessor_function(10,2,1,in_cr7,in_cr8,in_cr7);
    fVar15 = *(float *)(this + 0x24) + fVar12 * fVar15;
    while( true ) {
      *(float *)(this + 0x24) = fVar15;
      fVar13 = (float)VectorSignedToFloat((uint)*(ushort *)(puVar4 + iVar9 * 0x6c + 0x28),
                                          (byte)(uVar11 >> 0x15) & 3);
      uVar10 = uVar11 & 0xfffffff | (uint)(fVar15 < fVar13) << 0x1f;
      uVar11 = uVar10 | (uint)(NAN(fVar15) || NAN(fVar13)) << 0x1c;
      if ((byte)(uVar10 >> 0x1f) != ((byte)(uVar11 >> 0x1c) & 1)) break;
      fVar15 = fVar15 - fVar13;
    }
    break;
  case 4:
    local_38 = *(float *)(this + 0x18);
    local_34 = *(float *)(this + 0x1c);
    uVar14 = *(undefined4 *)(this + 0x28);
    uVar8 = *(undefined2 *)(this + 0x40);
    CVar6 = this[0x42];
    fVar13 = *(float *)(this + 0x34);
    coprocessor_function(10,6,4,in_cr7,in_cr7,in_cr7);
    coprocessor_function(10,2,4,in_cr6,in_cr7,in_cr8);
    fVar15 = (float)FollowPath(this,in_s12);
    if (this[0x42] == (Creep)0x4) {
      CVar7 = (Creep)PathEndDirection();
      *(undefined4 *)(this + 0x14) = 2;
      this[0x42] = CVar7;
    }
    if (puVar4[iVar9 * 0x6c + 0x42] == '\0') {
LAB_000110bc:
      if (PTR_m_Info_00018054[iVar9 * 0x6c + 0x44] != '\0') {
        Core::Timer::CheckPeriod();
        fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(this + 8),(byte)(in_fpscr >> 0x15) & 3);
        fVar12 = (float)VectorSignedToFloat((uint)(byte)this[0x44],(byte)(in_fpscr >> 0x15) & 3);
        uVar10 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar12) << 0x1f;
        in_fpscr = uVar10 | (uint)(NAN(fVar13) || NAN(fVar12)) << 0x1c;
        if ((byte)(uVar10 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
          FreezeTower((Vector2 *)this,(char)&stack0xffffffe0 + 0xe8);
          Core::Timer::Update();
        }
      }
      fVar12 = *(float *)(this + 0x38);
    }
    else {
      fVar12 = *(float *)(this + 0x38);
      uVar10 = in_fpscr & 0xfffffff;
      in_fpscr = uVar10 | (uint)(fVar12 == 0.0) << 0x1e | (uint)(0.0 <= fVar12) << 0x1d;
      bVar2 = (byte)(in_fpscr >> 0x18);
      if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) goto LAB_000110bc;
      if (this[0x42] == CVar6) {
        fVar13 = 0.5;
        *(float *)(this + 0x34) = *(float *)(this + 0x34) + param_1 * 0.5;
      }
      else {
        fVar13 = *(float *)(this + 0x34);
        uVar10 = uVar10 | (uint)(fVar13 < 2.5) << 0x1f;
        in_fpscr = uVar10 | (uint)NAN(fVar13) << 0x1c;
        if ((byte)(uVar10 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
          DestroyTower(this,(Vector2 *)&local_38,(uchar)CVar6);
          fVar12 = *(float *)(this + 0x38);
          this[0x42] = CVar6;
          *(float *)(this + 0x18) = local_38;
          *(float *)(this + 0x1c) = local_34;
          *(undefined4 *)(this + 0x28) = uVar14;
          *(undefined2 *)(this + 0x40) = uVar8;
        }
        *(undefined4 *)(this + 0x34) = 0x3f800000;
      }
    }
    puVar4 = PTR_m_Info_00018054;
    coprocessor_function(10,2,1,in_cr7,in_cr8,in_cr7);
    fVar15 = *(float *)(this + 0x24) + fVar15 * fVar13;
    while( true ) {
      *(float *)(this + 0x24) = fVar15;
      fVar13 = (float)VectorSignedToFloat((uint)*(ushort *)(puVar4 + iVar9 * 0x6c + 0x28),
                                          (byte)(in_fpscr >> 0x15) & 3);
      uVar10 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar13) << 0x1f;
      in_fpscr = uVar10 | (uint)(NAN(fVar15) || NAN(fVar13)) << 0x1c;
      if ((byte)(uVar10 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) break;
      fVar15 = fVar15 - fVar13;
    }
    goto LAB_00011258;
  case 5:
    fVar13 = *(float *)(this + 0x24) +
             param_1 * *(float *)(PTR_m_Info_00018054 + iVar9 * 0x6c + 0x30);
    *(float *)(this + 0x24) = fVar13;
    uVar1 = *(ushort *)(puVar4 + iVar9 * 0x6c + 0x2a);
    fVar15 = (float)VectorSignedToFloat((uint)uVar1,(byte)(in_fpscr >> 0x15) & 3);
    uVar10 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar15) << 0x1f;
    if (SUB41(uVar10 >> 0x1f,0) == (NAN(fVar13) || NAN(fVar15))) {
      *(undefined4 *)(this + 0x20) = 0x437f0000;
      uVar14 = VectorSignedToFloat(uVar1 - 1,(byte)(uVar10 >> 0x15) & 3);
      *(undefined4 *)(this + 0x14) = 6;
      *(undefined4 *)(this + 0x24) = uVar14;
    }
    if ((puVar4[iVar9 * 0x6c + 0x40] != '\0') && (*(float *)(this + 0x24) < 12.0)) {
      coprocessor_function(10,2,1,in_cr7,in_cr8,in_cr7);
      *(float *)(this + 0x20) = *(float *)(this + 0x20) + param_1 * 235.2;
      *(float *)(this + 0x1c) = *(float *)(this + 0x1c) + 235.2;
      *(float *)(this + 0x28) = *(float *)(this + 0x28) - 235.2;
    }
    break;
  case 6:
    fVar15 = *(float *)(this + 0x20) + param_1 * -128.0;
    *(float *)(this + 0x20) = fVar15;
    if (fVar15 <= 0.0) {
      *(undefined4 *)(this + 0x20) = 0;
      *(undefined4 *)(this + 0x14) = 7;
    }
  }
  fVar12 = *(float *)(this + 0x38);
LAB_00011258:
  if ((fVar12 != 0.0 && fVar12 < 0.0 == NAN(fVar12)) &&
     (*(float *)(this + 0x38) = fVar12 - param_1, fVar12 - param_1 <= 0.0)) {
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x34) = 0x3f800000;
  }
  fVar15 = *(float *)(this + 0x3c);
  if ((fVar15 != 0.0 && fVar15 < 0.0 == NAN(fVar15)) &&
     (*(float *)(this + 0x3c) = fVar15 - param_1, fVar15 - param_1 <= 0.0)) {
    *(undefined4 *)(this + 0x3c) = 0;
  }
  fVar15 = *(float *)(this + 0x30);
  *(float *)(this + 0x30) = fVar15 - param_1;
  if (fVar15 - param_1 < 0.0) {
    *(undefined4 *)(this + 0x30) = 0;
  }
  return;
}



// Core::Math::Vector2::TEMPNAMEPLACEHOLDERVALUE(float)

void __thiscall Core::Math::Vector2::operator/=(Vector2 *this,float param_1)

{
  *(float *)this = *(float *)this / param_1;
  *(float *)(this + 4) = *(float *)(this + 4) / param_1;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Core::Timer::CheckPeriod()

void Core::Timer::CheckPeriod(void)

{
  int *in_r0;
  timeval local_14;
  
  _gettimeofday(&local_14,(void *)0x0);
  in_r0[2] = local_14.tv_sec - *in_r0;
  local_14.tv_usec = local_14.tv_usec - in_r0[1];
  in_r0[3] = local_14.tv_usec;
  if (local_14.tv_usec < 0) {
    in_r0[2] = (local_14.tv_sec - *in_r0) + -1;
    in_r0[3] = local_14.tv_usec + 1000000;
  }
  return;
}



// Function Stack Size: 0x8 bytes

short * GUIImage::Bounds(ID param_1,SEL param_2)

{
  return (short *)(param_1 + m_Bounds);
}



// Function Stack Size: 0x8 bytes

short * GUIImage::Position(ID param_1,SEL param_2)

{
  return (short *)(param_1 + m_Position);
}



// Function Stack Size: 0x18 bytes

void GUIImage::UpdateBounds_(ID param_1,SEL param_2,CGRect param_3)

{
  int iVar1;
  float in_r2;
  float in_r3;
  
  iVar1 = param_1 + m_Position;
  *(short *)(param_1 + m_Position) = (short)(int)in_r2;
  *(short *)(iVar1 + 2) = (short)(int)in_r3;
  iVar1 = param_1 + m_Bounds;
  *(short *)(param_1 + m_Bounds) = (short)(int)param_3.field0_0x0.field0_0x0;
  *(short *)(iVar1 + 2) = (short)(int)param_3.field0_0x0.field1_0x4;
  _objc_msgSend(param_1,"setCenter:",in_r2 + param_3.field0_0x0.field0_0x0 * 0.5,
                in_r3 + param_3.field0_0x0.field1_0x4 * 0.5);
  return;
}



// Function Stack Size: 0xc bytes

void GUIImage::Show_(ID param_1,SEL param_2,bool param_3)

{
  _objc_msgSend(param_1,"setHidden:",param_3 & 0xff ^ 1);
  return;
}



// Function Stack Size: 0x14 bytes

ID GUIImage::initWithFile_withX_withY_
             (ID param_1,SEL param_2,const_char__ param_3,int param_4,int param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  char acStack_238 [512];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ID local_28;
  class_t *local_24;
  
  pcVar1 = _strstr(param_3,".png");
  _memset(acStack_238,0,0x200);
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar2 = _objc_msgSend(uVar2,"resourcePath");
  uVar2 = _objc_msgSend(uVar2,"UTF8String");
  _sprintf(acStack_238,"%s/%s",uVar2,param_3);
  iVar3 = _CGDataProviderCreateWithFilename(acStack_238);
  if (iVar3 == 0) {
    _printf("GUIImage::initWithFile() : WARNING! Couldn\'t open image \"%s\"\n",param_3);
  }
  else {
    if (pcVar1 != (char *)0x0) {
      pcVar1 = (char *)0x1;
    }
    if (pcVar1 == (char *)0x0) {
      uVar2 = _CGImageCreateWithJPEGDataProvider(iVar3,0,0,0);
    }
    else {
      uVar2 = _CGImageCreateWithPNGDataProvider(iVar3,0,0,0);
    }
    _CGDataProviderRelease(iVar3);
    uVar4 = _CGImageGetWidth(uVar2);
    uVar5 = _CGImageGetHeight(uVar2);
    local_24 = &objc::class_t::GUIImage;
    local_2c = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    local_30 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    local_34 = VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
    local_38 = VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    local_28 = param_1;
    param_1 = _objc_msgSendSuper2(&local_28,"initWithFrame:",local_38,local_34,local_30,local_2c);
    if (param_1 != 0) {
      uVar6 = _objc_msgSend(&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",0,0,0,0);
      _objc_msgSend(param_1,"setBackgroundColor:",uVar6);
      _objc_msgSend(param_1,"setOpaque:",(uint)pcVar1 ^ 1);
      *(undefined4 *)(param_1 + m_Image) = uVar2;
      *(short *)(param_1 + m_Bounds) = (short)uVar4;
      *(short *)(param_1 + m_Bounds + 2) = (short)uVar5;
      *(short *)(param_1 + m_Position) = (short)param_4;
      *(undefined2 *)(param_1 + m_Position + 2) = (undefined2)param_5;
    }
  }
  return param_1;
}



// Function Stack Size: 0x8 bytes

void GUIImage::dealloc(ID param_1,SEL param_2)

{
  ID local_18;
  class_t *local_14;
  
  if (*(int *)(param_1 + m_Image) != 0) {
    _CGImageRelease();
    *(undefined4 *)(param_1 + m_Image) = 0;
  }
  local_14 = &objc::class_t::GUIImage;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_18,"dealloc");
  return;
}



// Function Stack Size: 0x18 bytes

void GUIImage::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r2;
  float in_r3;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_1 + m_Image) != 0) {
    uVar1 = _UIGraphicsGetCurrentContext();
    uVar2 = _CGRectGetMaxY(in_r2,in_r3,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x4);
    _CGContextTranslateCTM(uVar1,0,uVar2);
    _CGContextScaleCTM(uVar1,0x3f800000,0xbf800000);
    _CGRectOffset(&local_34,in_r2,in_r3,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x4,
                  0,-in_r3);
    _CGContextDrawImage(uVar1,local_34,uStack_30,uStack_2c,uStack_28,
                        *(undefined4 *)(param_1 + m_Image));
  }
  return;
}



// Creeps::Init(char const*)

void Creeps::Init(char *param_1)

{
  undefined *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  char *pcVar10;
  XMLNode *this;
  XMLNode **local_28;
  undefined4 *local_24;
  
  _memset(&m_Info,0,0x288);
  Core::Sprite::Init((Sprite *)&m_Shadow,"Textures/Sprites/Shadow.png",0x40,0x20,0);
  puVar1 = PTR_m_ScrapHeap_00018088;
  Core::StackHeap::Push();
  Core::XMLDocument::XMLDocument((XMLDocument *)&local_24);
  iVar5 = Core::XMLDocument::Load((XMLDocument *)&local_24,param_1,(Heap *)puVar1);
  if (iVar5 != 0) {
    for (local_28 = (XMLNode **)*local_24; local_28 != (XMLNode **)0x0;
        local_28 = (XMLNode **)local_28[1]) {
      local_28[2][(int)local_28[3]] = (XMLNode)0x0;
      iVar5 = _strcmp((char *)local_28[2],"Creep");
      if (iVar5 == 0) {
        iVar5 = Core::XMLNode::AttributeInt((XMLNode *)local_28,"type",0,true);
        iVar5 = iVar5 + -1;
        for (this = *local_28; this != (XMLNode *)0x0; this = *(XMLNode **)(this + 4)) {
          *(undefined *)(*(int *)(this + 8) + *(int *)(this + 0xc)) = 0;
          pcVar10 = *(char **)(this + 8);
          iVar6 = _strcmp(pcVar10,"Walk");
          if (iVar6 == 0) {
            pcVar10 = (char *)Core::XMLNode::Attribute(this,"filename",(char *)0x0,true);
            uVar2 = Core::XMLNode::AttributeInt(this,"x",0,true);
            uVar3 = Core::XMLNode::AttributeInt(this,"y",0,true);
            iVar6 = iVar5 * 0x6c;
            Core::Sprite::Init((Sprite *)(&m_Info + iVar6),pcVar10,uVar2,uVar3,0);
            uVar4 = Core::XMLNode::AttributeInt(this,"frames",0,true);
            *(undefined2 *)(&DAT_0001ab44 + iVar6) = uVar4;
            uVar7 = Core::XMLNode::AttributeFloat(this,"centerX",0.0,true);
            uVar8 = Core::XMLNode::AttributeFloat(this,"centerY",0.0,true);
            *(undefined4 *)(&DAT_0001ab34 + iVar6) = uVar7;
            *(undefined4 *)(&DAT_0001ab38 + iVar6) = uVar8;
            uVar7 = Core::XMLNode::AttributeFloat(this,"animSpeed",0.0,true);
            *(undefined4 *)(&DAT_0001ab48 + iVar6) = uVar7;
            uVar7 = Core::XMLNode::AttributeFloat(this,"scale",1.0,true);
            *(undefined4 *)(&DAT_0001ab50 + iVar6) = uVar7;
          }
          else {
            pcVar10[*(int *)(this + 0xc)] = '\0';
            pcVar10 = *(char **)(this + 8);
            iVar6 = _strcmp(pcVar10,"Death");
            if (iVar6 == 0) {
              pcVar10 = (char *)Core::XMLNode::Attribute(this,"filename",(char *)0x0,true);
              uVar2 = Core::XMLNode::AttributeInt(this,"x",0,true);
              uVar3 = Core::XMLNode::AttributeInt(this,"y",0,true);
              iVar6 = iVar5 * 0x6c;
              Core::Sprite::Init((Sprite *)(&DAT_0001ab28 + iVar6),pcVar10,uVar2,uVar3,0);
              uVar4 = Core::XMLNode::AttributeInt(this,"frames",0,true);
              *(undefined2 *)(&DAT_0001ab46 + iVar6) = uVar4;
              uVar7 = Core::XMLNode::AttributeFloat(this,"centerX",0.0,true);
              uVar8 = Core::XMLNode::AttributeFloat(this,"centerY",0.0,true);
              *(undefined4 *)(&DAT_0001ab3c + iVar6) = uVar7;
              *(undefined4 *)(&DAT_0001ab40 + iVar6) = uVar8;
              uVar7 = Core::XMLNode::AttributeFloat(this,"animSpeed",0.0,true);
              *(undefined4 *)(&DAT_0001ab4c + iVar6) = uVar7;
              uVar7 = Core::XMLNode::AttributeFloat(this,"scale",1.0,true);
              *(undefined4 *)(&DAT_0001ab54 + iVar6) = uVar7;
            }
            else {
              pcVar10[*(int *)(this + 0xc)] = '\0';
              pcVar10 = *(char **)(this + 8);
              iVar6 = _strcmp(pcVar10,"General");
              if (iVar6 == 0) {
                iVar6 = Core::XMLNode::AttributeInt(this,"difficulty",0,true);
                uVar7 = Core::XMLNode::AttributeFloat(this,"speed",0.0,true);
                iVar6 = iVar6 * 0xc + iVar5 * 0x6c;
                *(undefined4 *)(&DAT_0001ab70 + iVar6) = uVar7;
                uVar7 = Core::XMLNode::AttributeFloat(this,"health",0.0,true);
                *(undefined4 *)(&DAT_0001ab74 + iVar6) = uVar7;
                uVar4 = Core::XMLNode::AttributeInt(this,"money",0,true);
                *(undefined2 *)(&DAT_0001ab7a + iVar6) = uVar4;
                uVar4 = Core::XMLNode::AttributeInt(this,"score",0,true);
                *(undefined2 *)(&DAT_0001ab78 + iVar6) = uVar4;
              }
              else {
                pcVar10[*(int *)(this + 0xc)] = '\0';
                pcVar10 = *(char **)(this + 8);
                iVar6 = _strcmp(pcVar10,"Flying");
                if (iVar6 == 0) {
                  (&DAT_0001ab5c)[iVar5 * 0x6c] = 1;
                  uVar7 = Core::XMLNode::AttributeFloat(this,"height",32.0,true);
                  *(undefined4 *)(&DAT_0001ab58 + iVar5 * 0x6c) = uVar7;
                }
                else {
                  pcVar10[*(int *)(this + 0xc)] = '\0';
                  pcVar10 = *(char **)(this + 8);
                  iVar6 = _strcmp(pcVar10,"GooImmune");
                  if (iVar6 == 0) {
                    (&DAT_0001ab5d)[iVar5 * 0x6c] = 1;
                  }
                  else {
                    pcVar10[*(int *)(this + 0xc)] = '\0';
                    pcVar10 = *(char **)(this + 8);
                    iVar6 = _strcmp(pcVar10,"TowerFreeze");
                    if (iVar6 == 0) {
                      iVar6 = iVar5 * 0x6c;
                      (&DAT_0001ab60)[iVar6] = 1;
                      uVar4 = Core::XMLNode::AttributeInt(this,"repeat",1,true);
                      *(undefined2 *)(&DAT_0001ab6c + iVar6) = uVar4;
                      uVar7 = Core::XMLNode::AttributeFloat(this,"for",2.0,true);
                      fVar9 = 100.0;
                      *(undefined4 *)(&DAT_0001ab68 + iVar6) = uVar7;
LAB_00011d80:
                      uVar7 = Core::XMLNode::AttributeFloat(this,"range",fVar9,true);
                      *(undefined4 *)(&DAT_0001ab64 + iVar5 * 0x6c) = uVar7;
                    }
                    else {
                      pcVar10[*(int *)(this + 0xc)] = '\0';
                      pcVar10 = *(char **)(this + 8);
                      iVar6 = _strcmp(pcVar10,"TowerDestroy");
                      if (iVar6 == 0) {
                        (&DAT_0001ab5e)[iVar5 * 0x6c] = 1;
                      }
                      else {
                        pcVar10[*(int *)(this + 0xc)] = '\0';
                        iVar6 = _strcmp(*(char **)(this + 8),"TowerTaunt");
                        if (iVar6 == 0) {
                          fVar9 = 90.0;
                          (&DAT_0001ab5f)[iVar5 * 0x6c] = 1;
                          goto LAB_00011d80;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  Core::StackHeap::Pop();
  return;
}



// Towers::Init(char const*)

void Towers::Init(char *param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  XMLNode *this;
  XMLNode **this_00;
  undefined4 *local_2c;
  undefined4 *local_24;
  
  _memset(&m_Info,0,0x3d0);
  puVar1 = PTR_m_ScrapHeap_00018088;
  Core::StackHeap::Push();
  Core::XMLDocument::XMLDocument((XMLDocument *)&local_24);
  iVar6 = Core::XMLDocument::Load((XMLDocument *)&local_24,param_1,(Heap *)puVar1);
  if (iVar6 != 0) {
    for (local_2c = (undefined4 *)*local_24; local_2c != (undefined4 *)0x0;
        local_2c = (undefined4 *)local_2c[1]) {
      *(undefined *)(local_2c[2] + local_2c[3]) = 0;
      iVar6 = _strcmp((char *)local_2c[2],"Tower");
      if (iVar6 == 0) {
        iVar6 = Core::XMLNode::AttributeInt((XMLNode *)local_2c,"type",0,true);
        iVar6 = iVar6 + -1;
        uVar7 = Core::XMLNode::AttributeInt((XMLNode *)local_2c,"levels",1,true);
        *(undefined4 *)(&DAT_0001aea0 + iVar6 * 0xf4) = uVar7;
        for (this_00 = (XMLNode **)*local_2c; this_00 != (XMLNode **)0x0;
            this_00 = (XMLNode **)this_00[1]) {
          this_00[2][(int)this_00[3]] = (XMLNode)0x0;
          iVar8 = _strcmp((char *)this_00[2],"Level");
          if (iVar8 == 0) {
            iVar8 = Core::XMLNode::AttributeInt((XMLNode *)this_00,"level",0,true);
            iVar8 = iVar8 + -1;
            uVar2 = Core::XMLNode::AttributeInt((XMLNode *)this_00,"cost",5,true);
            (&m_Info)[iVar6 * 0x7a + iVar8 * 0x28] = uVar2;
            uVar2 = Core::XMLNode::AttributeInt((XMLNode *)this_00,"resell",3,true);
            *(undefined2 *)(&DAT_0001adb2 + iVar8 * 0x50 + iVar6 * 0xf4) = uVar2;
            for (this = *this_00; this != (XMLNode *)0x0; this = *(XMLNode **)(this + 4)) {
              *(undefined *)(*(int *)(this + 8) + *(int *)(this + 0xc)) = 0;
              pcVar11 = *(char **)(this + 8);
              iVar9 = _strcmp(pcVar11,"Idle");
              if (iVar9 == 0) {
                pcVar11 = (char *)Core::XMLNode::Attribute(this,"filename",(char *)0x0,true);
                uVar3 = Core::XMLNode::AttributeInt(this,"x",0,true);
                uVar4 = Core::XMLNode::AttributeInt(this,"y",0,true);
                iVar9 = iVar8 * 0x50 + iVar6 * 0xf4;
                Core::Sprite::Init((Sprite *)(iVar9 + 0x1adc4),pcVar11,uVar3,uVar4,0);
                uVar2 = Core::XMLNode::AttributeInt(this,"frames",0,true);
                *(undefined2 *)(&DAT_0001add8 + iVar9) = uVar2;
                uVar7 = Core::XMLNode::AttributeFloat(this,"centerX",0.0,true);
                uVar10 = Core::XMLNode::AttributeFloat(this,"centerY",0.0,true);
                *(undefined4 *)(&DAT_0001add0 + iVar9) = uVar7;
                *(undefined4 *)(&DAT_0001add4 + iVar9) = uVar10;
                uVar7 = Core::XMLNode::AttributeFloat(this,"scale",1.0,true);
                *(undefined4 *)(&DAT_0001addc + iVar9) = uVar7;
              }
              else {
                pcVar11[*(int *)(this + 0xc)] = '\0';
                pcVar11 = *(char **)(this + 8);
                iVar9 = _strcmp(pcVar11,"Shoot");
                if (iVar9 == 0) {
                  pcVar11 = (char *)Core::XMLNode::Attribute(this,"filename",(char *)0x0,true);
                  uVar3 = Core::XMLNode::AttributeInt(this,"x",0,true);
                  uVar4 = Core::XMLNode::AttributeInt(this,"y",0,true);
                  iVar9 = iVar8 * 0x50 + iVar6 * 0xf4;
                  Core::Sprite::Init((Sprite *)(iVar9 + 0x1adb8),pcVar11,uVar3,uVar4,0);
                  (&DAT_0001adb4)[iVar9] = 1;
                }
                else {
                  pcVar11[*(int *)(this + 0xc)] = '\0';
                  iVar9 = _strcmp(*(char **)(this + 8),"Projectile");
                  if (iVar9 == 0) {
                    pcVar11 = (char *)Core::XMLNode::Attribute(this,"type",(char *)0x0,true);
                    iVar9 = _strcmp(pcVar11,"suck");
                    if (iVar9 == 0) {
                      iVar9 = iVar8 * 0x50 + iVar6 * 0xf4;
                      *(undefined4 *)(&DAT_0001ade0 + iVar9) = 1;
                      uVar7 = Core::XMLNode::AttributeFloat(this,"wait",0.0,true);
                      *(undefined4 *)(&DAT_0001adec + iVar9) = uVar7;
                      uVar7 = Core::XMLNode::AttributeFloat(this,"damage",0.0,true);
                      *(undefined4 *)(&DAT_0001ade8 + iVar9) = uVar7;
                      sVar5 = Core::XMLNode::AttributeInt(this,"level",0,true);
                      *(short *)(&DAT_0001ade4 + iVar9) = sVar5 + -1;
                      uVar7 = Core::XMLNode::AttributeFloat(this,"aimSpeed",0.0,true);
                      *(undefined4 *)(&DAT_0001adf4 + iVar9) = uVar7;
                      uVar7 = Core::XMLNode::AttributeFloat(this,"range",0.0,true);
                      *(undefined4 *)(&DAT_0001adf0 + iVar9) = uVar7;
                    }
                    else {
                      iVar9 = _strcmp(pcVar11,"goo");
                      if (iVar9 != 0) {
                        iVar9 = _strcmp(pcVar11,"area");
                        if (iVar9 == 0) {
                          iVar9 = iVar8 * 0x50 + iVar6 * 0xf4;
                          *(undefined4 *)(&DAT_0001ade0 + iVar9) = 3;
                        }
                        else {
                          iVar9 = _strcmp(pcVar11,"zap");
                          if (iVar9 != 0) {
                            _printf("Towers::Init(...) : WARNING! Didn\'t understand projectile type \"%s\"\n"
                                    ,pcVar11);
                            goto LAB_000124ec;
                          }
                          iVar9 = iVar8 * 0x50 + iVar6 * 0xf4;
                          *(undefined4 *)(&DAT_0001ade0 + iVar9) = 4;
                        }
                        uVar7 = Core::XMLNode::AttributeFloat(this,"wait",0.0,true);
                        *(undefined4 *)(&DAT_0001adec + iVar9) = uVar7;
                        uVar7 = Core::XMLNode::AttributeFloat(this,"damage",0.0,true);
                        *(undefined4 *)(&DAT_0001ade8 + iVar9) = uVar7;
                        sVar5 = Core::XMLNode::AttributeInt(this,"level",0,true);
                        *(short *)(&DAT_0001ade4 + iVar9) = sVar5 + -1;
                        uVar7 = Core::XMLNode::AttributeFloat(this,"range",0.0,true);
                        *(undefined4 *)(&DAT_0001adf4 + iVar9) = 0x447a0000;
                        *(undefined4 *)(&DAT_0001adf0 + iVar9) = uVar7;
                        goto LAB_000124ec;
                      }
                      iVar9 = iVar8 * 0x50 + iVar6 * 0xf4;
                      *(undefined4 *)(&DAT_0001ade0 + iVar9) = 2;
                      uVar7 = Core::XMLNode::AttributeFloat(this,"wait",0.0,true);
                      *(undefined4 *)(&DAT_0001adec + iVar9) = uVar7;
                      uVar7 = Core::XMLNode::AttributeFloat(this,"speed",0.0,true);
                      *(undefined4 *)(&DAT_0001ade8 + iVar9) = uVar7;
                      uVar7 = Core::XMLNode::AttributeFloat(this,"duration",0.0,true);
                      *(undefined4 *)(&DAT_0001adf8 + iVar9) = uVar7;
                      sVar5 = Core::XMLNode::AttributeInt(this,"level",0,true);
                      *(short *)(&DAT_0001ade4 + iVar9) = sVar5 + -1;
                      uVar7 = Core::XMLNode::AttributeFloat(this,"aimSpeed",0.0,true);
                      *(undefined4 *)(&DAT_0001adf4 + iVar9) = uVar7;
                      uVar7 = Core::XMLNode::AttributeFloat(this,"range",0.0,true);
                      *(undefined4 *)(&DAT_0001adf0 + iVar9) = uVar7;
                    }
                    uVar7 = Core::XMLNode::AttributeFloat(this,"bulletSpeed",0.0,true);
                    *(undefined4 *)(&DAT_0001adfc + iVar9) = uVar7;
                  }
                }
              }
LAB_000124ec:
            }
          }
        }
      }
    }
  }
  Core::StackHeap::Pop();
  return;
}



// Tower::Tower()

void __thiscall Tower::Tower(Tower *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this = 0;
  uVar1 = *(undefined4 *)PTR__ZERO_000180d0;
  uVar2 = *(undefined4 *)(PTR__ZERO_000180d0 + 4);
  this[0x14] = (Tower)0x0;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  return;
}



// Tower::Tower()

void __thiscall Tower::Tower(Tower *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this = 0;
  uVar1 = *(undefined4 *)PTR__ZERO_000180d0;
  uVar2 = *(undefined4 *)(PTR__ZERO_000180d0 + 4);
  this[0x14] = (Tower)0x0;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  return;
}



// Tower::Init(TowerType, unsigned short, unsigned short)

void __thiscall Tower::Init(Tower *this,TowerType param_1,ushort param_2,ushort param_3)

{
  ushort uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  *(TowerType *)this = param_1;
  Level::GetGridPos((Level *)&local_18,(uint)param_2,(uint)param_3);
  this[0x14] = (Tower)0x0;
  *(undefined4 *)(this + 4) = local_18;
  *(undefined4 *)(this + 8) = uStack_14;
  uVar1 = *(ushort *)(PTR_m_Info_0001807c + param_1 * 0xf4 + 0x28);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  this[0x15] = SUB21(uVar1 >> 1,0);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Tower::ResaleValue()

undefined2 Tower::ResaleValue(void)

{
  int *in_r0;
  
  return *(undefined2 *)
          (PTR_m_Info_0001807c + (uint)*(byte *)(in_r0 + 5) * 0x50 + *in_r0 * 0xf4 + 2);
}



// Tower::CanUpgrade(unsigned int)

bool __thiscall Tower::CanUpgrade(Tower *this,uint param_1)

{
  if ((uint)(byte)this[0x14] < *(int *)(PTR_m_Info_0001807c + *(int *)this * 0xf4 + 0xf0) - 1U) {
    return *(ushort *)(PTR_m_Info_0001807c + ((byte)this[0x14] + 1) * 0x50 + *(int *)this * 0xf4) <=
           param_1;
  }
  return false;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Tower::Upgrade()

undefined2 Tower::Upgrade(void)

{
  char cVar1;
  int *in_r0;
  
  cVar1 = *(char *)(in_r0 + 5);
  *(byte *)(in_r0 + 5) = cVar1 + 1U;
  return *(undefined2 *)(PTR_m_Info_0001807c + (uint)(byte)(cVar1 + 1U) * 0x50 + *in_r0 * 0xf4);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Tower::Range()

undefined4 Tower::Range(void)

{
  int *in_r0;
  
  return *(undefined4 *)
          (PTR_m_Info_0001807c + (uint)*(byte *)(in_r0 + 5) * 0x50 + *in_r0 * 0xf4 + 0x40);
}



// Tower::SetDirection(unsigned char)

void __thiscall Tower::SetDirection(Tower *this,uchar param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint in_fpscr;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_s16;
  
  this[0x15] = (Tower)param_1;
  VectorSignedToFloat((uint)*(ushort *)
                             (PTR_m_Info_0001807c +
                             (uint)(byte)this[0x14] * 0x50 + *(int *)this * 0xf4 + 0x28),
                      (byte)(in_fpscr >> 0x15) & 3);
  VectorSignedToFloat((uint)param_1,(byte)(in_fpscr >> 0x15) & 3);
  coprocessor_function(10,2,1,in_cr8,in_cr7,in_cr7);
  uVar1 = _sinf();
  *(undefined4 *)(this + 0xc) = uVar1;
  uVar2 = _cosf(in_s16);
  *(uint *)(this + 0x10) = uVar2 ^ 0x80000000;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Tower::Render()

void Tower::Render(void)

{
  uint uVar1;
  byte bVar2;
  int *in_r0;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  Sprite *this;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  uint uVar10;
  undefined4 in_cr6;
  undefined4 in_cr7;
  float fVar11;
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  
  fVar11 = (float)in_r0[8];
  iVar8 = *in_r0;
  uVar7 = (uint)*(byte *)(in_r0 + 5);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar11 < 0.0) << 0x1f | (uint)(fVar11 == 0.0) << 0x1e;
  uVar10 = uVar1 | (uint)NAN(fVar11) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar10 >> 0x1c) & 1)) {
    local_2c = 64.0;
    local_24 = (float)in_r0[1] - 32.0;
    local_28 = 0x42800000;
    local_20 = (float)in_r0[2] - 52.0;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar11 < 1.0) << 0x1f | (uint)(fVar11 == 1.0) << 0x1e;
    uVar10 = uVar1 | (uint)NAN(fVar11) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar10 >> 0x1c) & 1)) {
      fVar11 = 1.0;
    }
    coprocessor_function(10,6,5,in_cr7,in_cr6,in_cr7);
    Core::Sprite::Render
              ((Sprite *)PTR_m_TowerFreeze_000180f4,(Vector2 *)&local_24,(Vector2 *)&local_2c,0,0.0,
               fVar11);
  }
  if (*(char *)(in_r0 + 9) != '\0') {
    iVar5 = in_r0[10];
    iVar6 = iVar5 + 1;
    in_r0[10] = iVar6;
    if (iVar6 == 9) {
      in_r0[10] = iVar5 + -8;
    }
  }
  if (*(char *)((int)in_r0 + 0x16) == '\0') {
    iVar5 = uVar7 << 4;
    iVar6 = uVar7 << 6;
    iVar3 = iVar8 << 6;
  }
  else {
    iVar3 = iVar8 * 0x40;
    iVar5 = uVar7 * 0x10;
    iVar6 = uVar7 * 0x40;
    iVar4 = uVar7 * 0x50 + iVar8 * 0xf4;
    iVar9 = iVar8 << 2;
    if (PTR_m_Info_0001807c[iVar4 + 4] != '\0') {
      iVar4 = iVar4 + 8;
      goto LAB_00012994;
    }
  }
  iVar9 = iVar8 * 4;
  iVar4 = iVar5 + iVar6 + (iVar3 + iVar8 * -3) * 4 + 0x14;
LAB_00012994:
  this = (Sprite *)(PTR_m_Info_0001807c + iVar4);
  iVar8 = iVar5 + iVar6 + ((iVar3 - iVar9) + iVar8) * 4;
  local_2c = (float)in_r0[1] -
             *(float *)(PTR_m_Info_0001807c + iVar8 + 0x2c) *
             *(float *)(PTR_m_Info_0001807c + iVar8 + 0x20);
  local_20 = (float)in_r0[2] -
             *(float *)(PTR_m_Info_0001807c + iVar8 + 0x2c) *
             *(float *)(PTR_m_Info_0001807c + iVar8 + 0x24);
  VectorUnsignedToFloat((uint)*(ushort *)(this + 4),(byte)(uVar10 >> 0x15) & 3);
  coprocessor_function(10,2,5,in_cr7,in_cr6,in_cr7);
  local_28 = VectorUnsignedToFloat((uint)*(ushort *)(this + 6),(byte)(uVar10 >> 0x15) & 3);
  coprocessor_function(10,6,5,in_cr7,in_cr6,in_cr7);
  local_24 = local_2c;
  if ((*(char *)(in_r0 + 9) != '\0') && (*in_r0 != 2)) {
    _glColor4ub(0xff,0xa0,0xa0,0xff);
  }
  Core::Sprite::Render
            (this,(Vector2 *)&local_24,(Vector2 *)&local_2c,(uint)*(byte *)((int)in_r0 + 0x15));
  if (*(char *)(in_r0 + 9) != '\0') {
    _glColor4ub(0xff,0xff,0xff,0xff);
  }
  return;
}



// Tower::AngleToDirection(unsigned int)

void __thiscall Tower::AngleToDirection(Tower *this,uint param_1)

{
  Tower TVar1;
  uint in_fpscr;
  double dVar2;
  float fVar3;
  
  dVar2 = (double)_atan2(SUB84((double)*(float *)(this + 0xc),0),
                         (int)((ulonglong)(double)*(float *)(this + 0xc) >> 0x20),
                         SUB84((double)-*(float *)(this + 0x10),0),
                         (int)((ulonglong)(double)-*(float *)(this + 0x10) >> 0x20));
  fVar3 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  TVar1 = (Tower)___umodsi3((int)(((float)dVar2 + 3.141593 + 3.141593) / (6.283185 / fVar3)),param_1
                           );
  this[0x15] = TVar1;
  return;
}



// Tower::Update(float)

void __thiscall Tower::Update(Tower *this,float param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  Tower TVar5;
  uint uVar6;
  uint uVar7;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_30;
  float local_2c;
  undefined *puVar8;
  
  fVar13 = *(float *)(this + 0x20);
  bVar11 = fVar13 < 0.0;
  bVar10 = fVar13 != 0.0;
  bVar1 = NAN(fVar13);
  if (this[0x16] != (Tower)0x0) {
    this[0x16] = (Tower)((char)this[0x16] + -1);
  }
  puVar8 = PTR_m_Info_0001807c;
  if (bVar10 && bVar11 == bVar1) {
    fVar13 = fVar13 - param_1;
  }
  if (bVar10 && bVar11 == bVar1) {
    *(float *)(this + 0x20) = fVar13;
  }
  else {
    iVar9 = *(int *)this;
    uVar6 = (uint)(byte)this[0x14];
    iVar4 = uVar6 * 0x50 + iVar9 * 0xf4;
    if (*(int *)(PTR_m_Info_0001807c + iVar4 + 0x30) != 0) {
      fVar13 = *(float *)(this + 0x1c);
      bVar11 = fVar13 < 0.0;
      bVar10 = fVar13 != 0.0;
      bVar1 = NAN(fVar13);
      if (bVar10 && bVar11 == bVar1) {
        fVar13 = fVar13 - param_1;
      }
      if (bVar10 && bVar11 == bVar1) {
        *(float *)(this + 0x1c) = fVar13;
      }
      puVar2 = PTR_m_Info_0001807c;
      if (*(int *)(this + 0x18) != 0) {
        uVar7 = *(uint *)(*(int *)(this + 0x18) + 0x14);
        bVar11 = 3 < uVar7;
        if (uVar7 != 4) {
          bVar11 = uVar7 != 1;
        }
        if ((!bVar11 || (uVar7 == 4 || uVar7 == 2)) || (uVar7 == 3)) {
          iVar4 = Level::GetAlistarInRange((Vector2 *)(this + 4),*(float *)(puVar8 + iVar4 + 0x40));
          if (iVar4 != 0) {
            *(int *)(this + 0x18) = iVar4;
            this[0x24] = (Tower)0x1;
          }
          if (iVar4 == 0) {
            this[0x24] = (Tower)0x0;
          }
          puVar8 = PTR_m_Info_0001807c;
          fVar12 = *(float *)(*(int *)(this + 0x18) + 0x18) - *(float *)(this + 4);
          local_2c = *(float *)(*(int *)(this + 0x18) + 0x1c) - *(float *)(this + 8);
          iVar4 = uVar6 * 0x50 + iVar9 * 0xf4;
          coprocessor_function(10,6,5,in_cr6,in_cr7,in_cr7);
          fVar14 = *(float *)(PTR_m_Info_0001807c + iVar4 + 0x40);
          fVar13 = *(float *)(this + 8) + fVar12 * fVar12;
          coprocessor_function(10,6,5,in_cr7,in_cr7,in_cr7);
          if (fVar13 != fVar14 && fVar13 < fVar14 == (NAN(fVar13) || NAN(fVar14))) {
            *(undefined4 *)(this + 0x18) = 0;
            return;
          }
          if (fVar13 == 0.0 || fVar13 < 0.0 != NAN(fVar13)) {
            return;
          }
          coprocessor_function(10,0xf,7,in_cr6,in_cr1,in_cr6);
          local_30 = fVar12;
          Core::Math::Vector2::operator/=((Vector2 *)&local_30,fVar13);
          coprocessor_function(10,2,1,in_cr7,in_cr8,in_cr7);
          Core::Math::Vector2::NLerp
                    ((Vector2 *)(this + 0xc),(Vector2 *)(this + 0xc),(Vector2 *)&local_30,fVar12);
          AngleToDirection(this,(uint)*(ushort *)(puVar8 + iVar4 + 0x28));
          coprocessor_function(10,6,1,in_cr7,in_cr7,in_cr7);
          if (((0.2 <= ABS((local_2c + *(float *)(this + 0xc) * local_30) - 1.0)) &&
              (iVar4 = *(int *)(puVar8 + iVar4 + 0x30), iVar4 != 4)) && (iVar4 != 3)) {
            return;
          }
          *(char *)(*(int *)this + *(int *)(this + 0x18) + 0x45) =
               *(char *)(*(int *)this + *(int *)(this + 0x18) + 0x45) + '\x01';
          if (0.0 < *(float *)(this + 0x1c)) {
            return;
          }
          Projectiles::Fire(this,*(Creep **)(this + 0x18));
          *(undefined4 *)(this + 0x1c) =
               *(undefined4 *)(PTR_m_Info_0001807c + uVar6 * 0x50 + iVar9 * 0xf4 + 0x3c);
          uVar6 = *(uint *)(*(int *)(this + 0x18) + 0x14);
          iVar4 = uVar6 - 1;
          bVar11 = 3 < uVar6;
          bVar10 = uVar6 == 4;
          if (!bVar10) {
            bVar11 = iVar4 != 0;
          }
          bVar1 = iVar4 == 1;
          if (bVar11 && (!bVar10 && !bVar1)) {
            iVar4 = 0;
          }
          if (!bVar11 || (bVar10 || bVar1)) {
            iVar4 = 1;
          }
          if ((bVar11 && (!bVar10 && !bVar1)) && (uVar6 != 3)) {
            *(int *)(this + 0x18) = iVar4;
          }
          this[0x16] = (Tower)0xf;
          return;
        }
      }
      iVar9 = uVar6 * 0x50 + iVar9 * 0xf4;
      puVar8 = PTR_m_Info_0001807c;
      iVar4 = Level::GetAlistarInRange
                        ((Vector2 *)(this + 4),*(float *)(PTR_m_Info_0001807c + iVar9 + 0x40));
      TVar5 = SUB41(puVar8,0);
      if (iVar4 != 0) {
        TVar5 = (Tower)0x1;
      }
      *(int *)(this + 0x18) = iVar4;
      if (iVar4 != 0) {
        this[0x24] = TVar5;
      }
      else {
        uVar3 = Level::GetCreepInRange((Vector2 *)(this + 4),*(float *)(puVar2 + iVar9 + 0x40));
        this[0x24] = (Tower)0x0;
        *(undefined4 *)(this + 0x18) = uVar3;
      }
    }
  }
  return;
}



// Core::Math::Vector2::NLerp(Core::Math::Vector2 const&, Core::Math::Vector2 const&, float)

Vector2 * __thiscall
Core::Math::Vector2::NLerp(Vector2 *this,Vector2 *param_1,Vector2 *param_2,float param_3)

{
  uint uVar1;
  undefined4 uVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = 3.141593;
  dVar3 = (double)_atan2(SUB84((double)*(float *)param_1,0),
                         (int)((ulonglong)(double)*(float *)param_1 >> 0x20),
                         SUB84((double)-*(float *)(param_1 + 4),0),
                         (int)((ulonglong)(double)-*(float *)(param_1 + 4) >> 0x20));
  fVar6 = (float)dVar3 + fVar5;
  dVar3 = (double)_atan2(SUB84((double)*(float *)param_2,0),
                         (int)((ulonglong)(double)*(float *)param_2 >> 0x20),
                         SUB84((double)-*(float *)(param_2 + 4),0),
                         (int)((ulonglong)(double)-*(float *)(param_2 + 4) >> 0x20));
  fVar4 = ((float)dVar3 + fVar5) - fVar6;
  if (fVar4 == fVar5 || fVar4 < fVar5 != (NAN(fVar4) || NAN(fVar5))) {
    if (fVar4 < -3.141593) {
      fVar4 = fVar5 - (fVar4 + fVar5);
    }
  }
  else {
    fVar4 = (fVar4 - fVar5) - fVar5;
  }
  if ((((fVar4 == 0.0 || fVar4 < 0.0 != NAN(fVar4)) ||
       (fVar5 = param_3, fVar4 == param_3 || fVar4 < param_3 != (NAN(fVar4) || NAN(param_3)))) &&
      (fVar5 = fVar4, fVar4 < 0.0)) && (fVar4 < -param_3)) {
    fVar5 = -param_3;
  }
  fVar5 = fVar5 + fVar6;
  uVar1 = _sinf(fVar5);
  *(uint *)this = uVar1 ^ 0x80000000;
  uVar2 = _cosf(fVar5);
  *(undefined4 *)(this + 4) = uVar2;
  return this;
}



// Core::SaveGame::Save(void*, unsigned int)

void Core::SaveGame::Save(void *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"alloc");
  uVar1 = _objc_msgSend(uVar1,"initWithCapacity:",param_2 >> 2);
  for (uVar4 = 0; uVar4 != param_2 >> 2; uVar4 = uVar4 + 1) {
    uVar2 = _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithUnsignedInteger:",
                          *(undefined4 *)((int)param_1 + uVar4 * 4));
    _objc_msgSend(uVar1,"addObject:",uVar2);
  }
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s,m_Key);
  _objc_msgSend(uVar2,"setObject:forKey:",uVar1,uVar3);
  _objc_msgSend(uVar1,"release");
  return;
}



// Core::SaveGame::Load(void*, unsigned int)

undefined4 Core::SaveGame::Load(void *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (m_Key != 0) {
    uVar1 = _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    uVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s,m_Key);
    uVar1 = _objc_msgSend(uVar1,"objectForKey:",uVar2);
    iVar3 = _objc_msgSend(uVar1,"mutableCopy");
    if (iVar3 != 0) {
      iVar4 = _objc_msgSend(iVar3,"count");
      if (param_2 == iVar4 * 4) {
        for (uVar6 = 0; uVar5 = _objc_msgSend(iVar3,"count"), uVar6 < uVar5; uVar6 = uVar6 + 1) {
          uVar1 = _objc_msgSend(iVar3,"objectAtIndex:",uVar6);
          uVar1 = _objc_msgSend(uVar1,"unsignedIntegerValue");
          *(undefined4 *)((int)param_1 + uVar6 * 4) = uVar1;
        }
        _objc_msgSend(iVar3,"release");
        return 1;
      }
      _objc_msgSend(iVar3,"release");
    }
  }
  return 0;
}



// Function Stack Size: 0x8 bytes

short * GUIText::Bounds(ID param_1,SEL param_2)

{
  return (short *)(param_1 + m_Bounds);
}



// Function Stack Size: 0x8 bytes

short * GUIText::Position(ID param_1,SEL param_2)

{
  return (short *)(param_1 + m_Position);
}



// Function Stack Size: 0x18 bytes

void GUIText::UpdateBounds_(ID param_1,SEL param_2,CGRect param_3)

{
  int iVar1;
  float in_r2;
  float in_r3;
  
  iVar1 = param_1 + m_Position;
  *(short *)(param_1 + m_Position) = (short)(int)in_r2;
  *(short *)(iVar1 + 2) = (short)(int)in_r3;
  iVar1 = param_1 + m_Bounds;
  *(short *)(param_1 + m_Bounds) = (short)(int)param_3.field0_0x0.field0_0x0;
  *(short *)(iVar1 + 2) = (short)(int)param_3.field0_0x0.field1_0x4;
  _objc_msgSend(param_1,"setCenter:",in_r2 + param_3.field0_0x0.field0_0x0 * 0.5,
                in_r3 + param_3.field0_0x0.field1_0x4 * 0.5);
  return;
}



// Function Stack Size: 0xc bytes

void GUIText::Show_(ID param_1,SEL param_2,bool param_3)

{
  _objc_msgSend(param_1,"setHidden:",param_3 & 0xff ^ 1);
  return;
}



// Function Stack Size: 0x18 bytes

ID GUIText::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  undefined4 uVar2;
  float in_r2;
  float in_r3;
  ID local_40;
  class_t *local_3c;
  
  local_3c = &objc::class_t::GUIText;
  local_40 = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithFrame:",in_r2,in_r3,param_3.field0_0x0.field0_0x0,
                              param_3.field0_0x0.field1_0x4);
  if (IVar1 != 0) {
    *(short *)(IVar1 + m_Position) = (short)(int)in_r2;
    *(short *)(IVar1 + m_Position + 2) = (short)(int)in_r3;
    *(short *)(IVar1 + m_Bounds) = (short)(int)param_3.field0_0x0.field0_0x0;
    *(short *)(IVar1 + m_Bounds + 2) = (short)(int)param_3.field0_0x0.field1_0x4;
    uVar2 = _objc_msgSend(&_OBJC_CLASS___UIFont,"systemFontOfSize:",0x41800000);
    _objc_msgSend(IVar1,"setFont:",uVar2);
    uVar2 = _objc_msgSend(&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",0,0,0,0);
    _objc_msgSend(IVar1,"setBackgroundColor:",uVar2);
    uVar2 = _objc_msgSend(&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",0x3f800000,
                          0x3f800000,0x3f800000,0x3f800000);
    _objc_msgSend(IVar1,"setTextColor:",uVar2);
    uVar2 = _objc_msgSend(&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",0,0,0,0x3f800000);
    _objc_msgSend(IVar1,"setShadowColor:",uVar2);
    _objc_msgSend(IVar1,"setShadowOffset:",0x3fc00000,0x3fc00000);
    _objc_msgSend(IVar1,"setTextAlignment:",1);
    _objc_msgSend(IVar1,"setNumberOfLines:",1);
  }
  return IVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Projectiles::Destroy()

void Projectiles::Destroy(void)

{
  m_ProjectileCount = 0;
  m_ProjectileMax = 0;
  m_BoltCount = 0;
  m_ShockWaveCount = 0;
  m_Projectiles = 0;
  m_Bolts = 0;
  m_ShockWaves = 0;
  return;
}



// Projectiles::Zap(Bolt*, unsigned int, unsigned int)

void Projectiles::Zap(Bolt *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  while (uVar1 = param_2 + param_3 >> 1, uVar1 != param_3 && uVar1 != param_2) {
    fVar4 = *(float *)(param_1 + param_3 * 8 + 0x14);
    fVar3 = *(float *)(param_1 + param_2 * 8 + 0x14);
    fVar2 = 0.5;
    fVar6 = *(float *)(param_1 + param_3 * 8 + 0x10);
    fVar5 = *(float *)(param_1 + param_2 * 8 + 0x10);
    coprocessor_function(10,6,4,in_cr7,in_cr7,in_cr8);
    *(float *)(param_1 + uVar1 * 8 + 0x14) = fVar4 + fVar3;
    coprocessor_function(10,6,4,in_cr7,in_cr7,in_cr8);
    *(float *)(param_1 + uVar1 * 8 + 0x10) = fVar6 + fVar5;
    fVar5 = (float)Core::Math::RandF();
    fVar5 = -((fVar4 - fVar3) * (fVar5 - fVar2));
    *(float *)(param_1 + uVar1 * 8 + 0x10) = *(float *)(param_1 + uVar1 * 8 + 0x10) + fVar5 * 0.6;
    coprocessor_function(10,2,5,in_cr7,in_cr7,in_cr6);
    *(float *)(param_1 + uVar1 * 8 + 0x14) = *(float *)(param_1 + uVar1 * 8 + 0x14) + fVar5 * 0.6;
    Zap(param_1,param_2,uVar1);
    param_2 = uVar1;
  }
  return;
}



// Projectiles::SoldTower(Tower*)

void Projectiles::SoldTower(Tower *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  for (uVar6 = 0; uVar6 < m_ProjectileCount; uVar6 = uVar6 + 1) {
    puVar7 = (undefined4 *)(uVar6 * 0x2c + m_Projectiles);
    if ((Tower *)puVar7[1] == param_1) {
      uVar2 = m_ProjectileCount - 1;
      uVar6 = uVar6 - 1;
      m_ProjectileCount = (ushort)uVar2;
      puVar1 = (undefined4 *)((uVar2 & 0xffff) * 0x2c + m_Projectiles);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      uVar3 = puVar1[5];
      uVar4 = puVar1[6];
      uVar5 = puVar1[7];
      puVar7[4] = puVar1[4];
      puVar7[5] = uVar3;
      puVar7[6] = uVar4;
      puVar7[7] = uVar5;
      uVar3 = puVar1[9];
      uVar4 = puVar1[10];
      puVar7[8] = puVar1[8];
      puVar7[9] = uVar3;
      puVar7[10] = uVar4;
    }
  }
  return;
}



// Projectiles::Init(Core::Heap&)

void Projectiles::Init(Heap *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  Destroy();
  m_ProjectileMax = 0x200;
  m_Projectiles = (***(code ***)param_1)(param_1,0x5800,4);
  iVar5 = 4;
  puVar1 = (undefined4 *)(***(code ***)param_1)(param_1,200,4);
  m_Bolts = puVar1;
  uVar2 = (***(code ***)param_1)(param_1,0x88,4);
  *puVar1 = uVar2;
  do {
    puVar1 = m_Bolts;
    uVar2 = (***(code ***)param_1)(param_1,0x88,4);
    *(undefined4 *)(iVar5 + (int)puVar1) = uVar2;
    iVar5 = iVar5 + 4;
  } while (iVar5 != 200);
  puVar1 = (undefined4 *)(***(code ***)param_1)(param_1,200,4);
  m_ShockWaves = puVar1;
  uVar2 = (***(code ***)param_1)(param_1,0x20,4);
  *puVar1 = uVar2;
  iVar5 = 4;
  do {
    iVar3 = iVar5;
    puVar1 = m_ShockWaves;
    uVar2 = (***(code ***)param_1)(param_1,0x20,4);
    *(undefined4 *)(iVar3 + (int)puVar1) = uVar2;
    iVar5 = iVar3 + 4;
  } while (iVar3 + 4 != 200);
  uVar4 = iVar3 - 0xc4;
  Core::Sprite::Init((Sprite *)&m_Goo,"Textures/Sprites/Goo.png",0x40,0x20,uVar4);
  Core::Sprite::Init((Sprite *)&m_ShockWave,"Textures/Sprites/ShockWave.png",0x80,0x80,uVar4);
  Core::Sprite::Init((Sprite *)&m_Suck,"Textures/Sprites/Suck.png",0x20,0x20,uVar4);
  Core::Sprite::Init((Sprite *)&m_SuckSprite,"Textures/Sprites/SuckSprite.png",0x10,0x10,uVar4);
  Core::Sprite::Init((Sprite *)&m_Destruction,"Textures/Sprites/Destruction.png",0x40,0x60,uVar4);
  Core::Sprite::Init((Sprite *)&m_TowerFreeze,"Textures/Sprites/TowerFreeze.png",0x40,0x40,uVar4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Projectiles::Render()

void Projectiles::Render(void)

{
  Sprite *this;
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint in_fpscr;
  undefined4 in_cr6;
  undefined4 in_cr7;
  double dVar9;
  float fVar10;
  float fVar11;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  
  if (m_ProjectileCount != 0) {
    AssetManager::BeginDecl(0,(void *)0x0);
    iVar7 = 0;
    for (uVar6 = 0; uVar6 < m_ProjectileCount; uVar6 = uVar6 + 1) {
      iVar4 = iVar7 + m_Projectiles;
      iVar3 = *(int *)(*(int *)(iVar4 + 8) + 0x30);
      if (iVar3 == 1) {
        local_2c = 32.0;
        local_28 = 32.0;
        local_24 = *(float *)(iVar4 + 0xc) - 16.0;
        local_20 = *(float *)(iVar4 + 0x10) - 16.0;
        Core::Math::RandF();
        pfVar1 = &local_24;
        pfVar2 = &local_2c;
        this = (Sprite *)&m_SuckSprite;
        coprocessor_function(10,6,1,in_cr7,in_cr6,in_cr7);
        fVar10 = 6.283185;
        uVar8 = 0;
        fVar11 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(*(int *)(iVar4 + 4) + 0x14),
                                   (byte)(in_fpscr >> 0x15) & 3);
        fVar11 = fVar11 * 0.2 + 0.3;
LAB_00013a2c:
        Core::Sprite::Render(this,(Vector2 *)pfVar1,(Vector2 *)pfVar2,uVar8,fVar10,fVar11);
      }
      else if (iVar3 == 2) {
        local_24 = 64.0;
        local_20 = 32.0;
        local_2c = *(float *)(iVar4 + 0xc) - 32.0;
        local_28 = *(float *)(iVar4 + 0x10) - 16.0;
        iVar3 = VectorFloatToUnsigned(*(undefined4 *)(iVar4 + 0x28),3);
        uVar8 = (uint)*(ushort *)(*(int *)(iVar4 + 8) + 0x34) * 8 + iVar3;
        dVar9 = (double)_atan2(SUB84((double)*(float *)(iVar4 + 0x1c),0),
                               (int)((ulonglong)(double)*(float *)(iVar4 + 0x1c) >> 0x20),
                               SUB84((double)-*(float *)(iVar4 + 0x20),0),
                               (int)((ulonglong)(double)-*(float *)(iVar4 + 0x20) >> 0x20));
        pfVar2 = &local_24;
        fVar11 = 0.7;
        this = (Sprite *)&m_Goo;
        pfVar1 = &local_2c;
        fVar10 = (float)dVar9 + 3.141593 + 3.141593;
        goto LAB_00013a2c;
      }
      iVar7 = iVar7 + 0x2c;
    }
    AssetManager::EndDecl(0);
  }
  if (m_BoltCount != 0) {
    _glBlendFunc(0x302,0x303);
    AssetManager::BeginDecl(2,(void *)0x0);
    for (uVar6 = 0; uVar6 < m_BoltCount; uVar6 = uVar6 + 1) {
      puVar5 = *(undefined **)(m_Bolts + uVar6 * 4);
      AssetManager::UpdateDecl(2,puVar5 + 0x10);
      _glLineWidth(*(undefined4 *)(puVar5 + 0xc));
      _glColor4ub(*puVar5,puVar5[1],puVar5[2],(byte)puVar5[3] >> 1);
      _glDrawArrays(3,0,0xf);
      _glLineWidth(*(undefined4 *)(puVar5 + 8));
      _glColor4ub(*puVar5,puVar5[1],puVar5[2],puVar5[3]);
      _glDrawArrays(3,0,0xf);
    }
    AssetManager::EndDecl(2);
    _glBlendFunc(1,0x303);
    _glColor4ub(0xff,0xff,0xff,0xff);
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Projectiles::PreRender()

void Projectiles::PreRender(void)

{
  float *pfVar1;
  uint uVar2;
  undefined4 in_cr7;
  undefined4 in_cr8;
  uint uVar3;
  ulonglong in_d8;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  
  uVar2 = 0;
  while (uVar2 < m_ShockWaveCount) {
    in_d8 = in_d8 & 0xffffffff;
    pfVar1 = *(float **)(m_ShockWaves + uVar2 * 4);
    uVar2 = uVar2 + 1;
    local_30 = 0x43000000;
    local_28 = *pfVar1 - 64.0;
    local_2c = 0x43000000;
    local_24 = pfVar1[1] - 64.0;
    coprocessor_function(10,2,5,in_cr8,in_cr7,in_cr8);
    _glColor4ub(*(undefined *)(pfVar1 + 2),*(undefined *)((int)pfVar1 + 9),
                *(undefined *)((int)pfVar1 + 10),*(byte *)((int)pfVar1 + 0xb) >> 1);
    uVar3 = VectorFloatToUnsigned(pfVar1[7],3);
    Core::Sprite::Render
              ((Sprite *)&m_ShockWave,(Vector2 *)&local_28,(Vector2 *)&local_30,uVar3,0.0,
               (float)in_d8);
    coprocessor_function(10,2,5,in_cr8,in_cr7,in_cr8);
    _glColor4ub(*(undefined *)(pfVar1 + 2),*(undefined *)((int)pfVar1 + 9),
                *(undefined *)((int)pfVar1 + 10),*(undefined *)((int)pfVar1 + 0xb));
    uVar3 = VectorFloatToUnsigned(pfVar1[7],3);
    Core::Sprite::Render
              ((Sprite *)&m_ShockWave,(Vector2 *)&local_28,(Vector2 *)&local_30,uVar3,0.0,
               (float)in_d8);
  }
  _glColor4ub(0xff,0xff,0xff,0xff);
  return;
}



// Projectiles::Update(float)

void Projectiles::Update(float param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  Creep **ppCVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  float in_s9;
  float in_s10;
  float in_s11;
  float in_s12;
  float fVar10;
  Creep *pCVar11;
  Creep *pCVar12;
  float fVar13;
  Creep *pCVar14;
  undefined4 uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined8 in_d9;
  ulonglong uVar19;
  Creep *local_38;
  Creep *local_34;
  
  uVar19 = (ulonglong)(uint)param_1;
  uVar7 = 0;
  coprocessor_function(10,2,1,in_cr9,in_cr10,in_cr7);
  do {
    if (m_ProjectileCount <= uVar7) {
      uVar7 = 0;
      coprocessor_function(10,6,1,in_cr9,in_cr10,in_cr7);
      for (; uVar7 < m_BoltCount; uVar7 = uVar7 + 1) {
        iVar3 = *(int *)(m_Bolts + uVar7 * 4);
        fVar10 = *(float *)(iVar3 + 4) + (float)((ulonglong)in_d9 >> 0x20);
        *(float *)(iVar3 + 4) = fVar10;
        if (0.0 < fVar10) {
          uVar15 = VectorFloatToUnsigned(fVar10,3);
          iVar8 = 1;
          *(char *)(iVar3 + 3) = (char)uVar15;
          do {
            uVar15 = (undefined4)((ulonglong)in_d9 >> 0x20);
            fVar17 = *(float *)(iVar3 + 0x18);
            fVar10 = (float)Core::Math::RandF();
            fVar13 = 2.0;
            in_d9 = CONCAT44(uVar15,0x40800000);
            iVar8 = iVar8 + 1;
            fVar18 = *(float *)(iVar3 + 0x1c);
            *(float *)(iVar3 + 0x18) = fVar17 + (fVar10 * 4.0 - 2.0);
            fVar10 = (float)Core::Math::RandF();
            *(float *)(iVar3 + 0x1c) = fVar18 + (fVar10 * (float)in_d9 - fVar13);
            iVar3 = iVar3 + 8;
          } while (iVar8 != 0xe);
        }
        else {
          m_BoltCount = m_BoltCount - 1;
          *(undefined4 *)(m_Bolts + uVar7 * 4) = *(undefined4 *)(m_Bolts + m_BoltCount * 4);
          uVar7 = uVar7 - 1;
          *(int *)(m_Bolts + m_BoltCount * 4) = iVar3;
        }
      }
      uVar7 = 0;
      coprocessor_function(10,6,1,in_cr5,in_cr10,in_cr7);
      coprocessor_function(10,2,1,in_cr6,in_cr10,in_cr7);
      coprocessor_function(10,2,1,in_cr5,in_cr10,in_cr7);
      coprocessor_function(10,6,1,in_cr4,in_cr10,in_cr7);
      for (; uVar7 < m_ShockWaveCount; uVar7 = uVar7 + 1) {
        iVar3 = *(int *)(m_ShockWaves + uVar7 * 4);
        fVar10 = *(float *)(iVar3 + 0xc);
        fVar13 = *(float *)(iVar3 + 0x10) + in_s11 * fVar10;
        *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + in_s12 * fVar10;
        *(float *)(iVar3 + 0x10) = fVar13;
        if (fVar13 < *(float *)(iVar3 + 0x18) == (NAN(fVar13) || NAN(*(float *)(iVar3 + 0x18)))) {
          fVar10 = fVar10 + in_s10;
          *(float *)(iVar3 + 0xc) = fVar10;
          if (0.0 < fVar10) {
            uVar15 = VectorFloatToUnsigned(fVar10,3);
            *(char *)(iVar3 + 0xb) = (char)uVar15;
            fVar10 = *(float *)(iVar3 + 0x1c) + in_s9;
            *(float *)(iVar3 + 0x1c) = fVar10;
            uVar16 = VectorFloatToUnsigned(fVar10,3);
            if (7 < uVar16) {
              *(undefined4 *)(iVar3 + 0x1c) = 0x40e00000;
            }
          }
          else {
            m_ShockWaveCount = m_ShockWaveCount - 1;
            *(undefined4 *)(m_ShockWaves + uVar7 * 4) =
                 *(undefined4 *)(m_ShockWaves + m_ShockWaveCount * 4);
            uVar7 = uVar7 - 1;
            *(int *)(m_ShockWaves + m_ShockWaveCount * 4) = iVar3;
          }
        }
      }
      return;
    }
    iVar3 = uVar7 * 0x2c;
    ppCVar5 = (Creep **)(iVar3 + m_Projectiles);
    if (*(int *)(ppCVar5[2] + 0x30) == 1) {
      pCVar11 = (Creep *)((float)ppCVar5[5] - (float)ppCVar5[3]);
      local_34 = (Creep *)((float)ppCVar5[6] - (float)ppCVar5[4]);
      coprocessor_function(10,6,5,in_cr6,in_cr7,in_cr7);
      pCVar14 = (Creep *)((float)ppCVar5[6] + (float)pCVar11 * (float)pCVar11);
      coprocessor_function(10,2,1,in_cr8,in_cr10,in_cr7);
      coprocessor_function(10,6,0,in_cr7,in_cr8,in_cr8);
      local_38 = pCVar11;
      if ((float)pCVar14 <= *(float *)(ppCVar5[2] + 0x4c)) {
LAB_000141a4:
        uVar7 = uVar7 - 1;
        m_ProjectileCount = m_ProjectileCount - 1;
        puVar6 = (undefined4 *)(iVar3 + m_Projectiles);
        puVar1 = (undefined4 *)((uint)m_ProjectileCount * 0x2c + m_Projectiles);
        uVar15 = puVar1[1];
        uVar2 = puVar1[2];
        uVar4 = puVar1[3];
        *puVar6 = *puVar1;
        puVar6[1] = uVar15;
        puVar6[2] = uVar2;
        puVar6[3] = uVar4;
        uVar15 = puVar1[5];
        uVar2 = puVar1[6];
        uVar4 = puVar1[7];
        puVar6[4] = puVar1[4];
        puVar6[5] = uVar15;
        puVar6[6] = uVar2;
        puVar6[7] = uVar4;
        uVar15 = puVar1[9];
        uVar2 = puVar1[10];
        puVar6[8] = puVar1[8];
        puVar6[9] = uVar15;
        puVar6[10] = uVar2;
        goto LAB_00013f84;
      }
      coprocessor_function(10,0xf,7,in_cr6,in_cr1,in_cr6);
      fVar10 = 0.1;
      Core::Math::Vector2::operator/=((Vector2 *)&local_38,(float)pCVar14);
      ppCVar5[7] = local_38;
      ppCVar5[8] = local_34;
      coprocessor_function(10,2,4,in_cr7,in_cr7,in_cr8);
      coprocessor_function(10,6,4,in_cr6,in_cr7,in_cr8);
      pCVar12 = ppCVar5[4];
      ppCVar5[3] = (Creep *)((float)ppCVar5[3] + (float)pCVar11);
      ppCVar5[4] = (Creep *)((float)pCVar12 + (float)pCVar14);
      coprocessor_function(10,6,1,in_cr7,in_cr7,in_cr8);
      local_38 = pCVar11;
      local_34 = pCVar14;
      Core::Math::Sin((float)(Creep *)((float)pCVar12 + (float)pCVar14));
      pCVar14 = ppCVar5[4];
      Core::Math::Sin((float)pCVar14 * fVar10 + 1.570796);
      coprocessor_function(10,2,1,in_cr7,in_cr8,in_cr6);
      ppCVar5[3] = (Creep *)((float)ppCVar5[3] + (float)uVar19 * (float)pCVar14);
      coprocessor_function(10,2,5,in_cr7,in_cr7,in_cr6);
      pCVar14 = (Creep *)((float)ppCVar5[4] + (float)uVar19 * (float)pCVar14);
LAB_00013f80:
      ppCVar5[4] = pCVar14;
    }
    else if (*(int *)(ppCVar5[2] + 0x30) == 2) {
      if (*(char *)(ppCVar5 + 9) == '\0') {
        iVar3 = *(int *)(iVar3 + m_Projectiles);
        if (iVar3 == 0) {
LAB_00013ebc:
          *ppCVar5 = (Creep *)0x0;
        }
        else {
          uVar16 = *(uint *)(iVar3 + 0x14);
          bVar9 = 3 < uVar16;
          if (uVar16 != 4) {
            bVar9 = uVar16 != 1;
          }
          if ((bVar9 && (uVar16 != 4 && uVar16 != 2)) && (uVar16 != 3)) goto LAB_00013ebc;
          pCVar14 = (Creep *)(*(float *)(iVar3 + 0x18) - s_CreepOffset);
          pCVar11 = (Creep *)(*(float *)(iVar3 + 0x1c) - DAT_0001d03c);
          ppCVar5[5] = pCVar14;
          ppCVar5[6] = pCVar11;
          if ((*(int *)(iVar3 + 0x14) == 3) ||
             (PTR_m_Info_00018054[*(int *)(iVar3 + 0x10) * 0x6c + 0x40] != '\0')) {
            ppCVar5[5] = (Creep *)((float)pCVar14 - s_FlyingCreepOffset);
            ppCVar5[6] = (Creep *)((float)pCVar11 - DAT_0001d04c);
          }
        }
        pCVar12 = (Creep *)((float)ppCVar5[5] - (float)ppCVar5[3]);
        local_34 = (Creep *)((float)ppCVar5[6] - (float)ppCVar5[4]);
        coprocessor_function(10,6,5,in_cr6,in_cr7,in_cr7);
        pCVar14 = ppCVar5[2];
        pCVar11 = (Creep *)((float)ppCVar5[6] + (float)pCVar12 * (float)pCVar12);
        coprocessor_function(10,2,1,in_cr8,in_cr10,in_cr7);
        coprocessor_function(10,6,0,in_cr7,in_cr8,in_cr8);
        local_38 = pCVar12;
        if (*(float *)(pCVar14 + 0x4c) < (float)pCVar11) {
          coprocessor_function(10,0xf,7,in_cr6,in_cr1,in_cr6);
          Core::Math::Vector2::operator/=((Vector2 *)&local_38,(float)pCVar11);
          ppCVar5[7] = local_38;
          ppCVar5[8] = local_34;
          coprocessor_function(10,2,4,in_cr7,in_cr7,in_cr8);
          coprocessor_function(10,6,4,in_cr6,in_cr7,in_cr8);
          ppCVar5[3] = (Creep *)((float)ppCVar5[3] + (float)pCVar12);
          pCVar14 = (Creep *)((float)ppCVar5[4] + (float)pCVar11);
          local_38 = pCVar12;
          local_34 = pCVar11;
          goto LAB_00013f80;
        }
        if (*ppCVar5 != (Creep *)0x0) {
          Creep::SlowDown(*ppCVar5,*(float *)(pCVar14 + 0x38),*(float *)(pCVar14 + 0x48));
        }
        *(undefined *)(ppCVar5 + 9) = 1;
        Sounds::Play(0xc,false);
      }
      else {
        pCVar14 = (Creep *)((float)ppCVar5[10] + (float)in_d9);
        ppCVar5[10] = pCVar14;
        uVar16 = VectorFloatToUnsigned(pCVar14,3);
        if (7 < uVar16) {
          ppCVar5[10] = (Creep *)0x41000000;
          goto LAB_000141a4;
        }
      }
    }
LAB_00013f84:
    uVar7 = uVar7 + 1;
  } while( true );
}



// Projectiles::SpawnProjectile(Tower*, Creep*)

void Projectiles::SpawnProjectile(Tower *param_1,Creep *param_2)

{
  int iVar1;
  Tower TVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar6 = m_Projectiles;
  if ((uint)m_ProjectileMax <= (uint)m_ProjectileCount) {
    pcVar3 = "Projectiles::SpawnProjectile(...) : WARNING! Too many projectiles...";
LAB_000143d4:
    _puts(pcVar3);
    return;
  }
  TVar2 = param_1[0x14];
  iVar7 = *(int *)param_1;
  iVar1 = (uint)m_ProjectileCount * 0x2c;
  m_ProjectileCount = m_ProjectileCount + 1;
  iVar4 = iVar1 + m_Projectiles;
  *(Tower **)(iVar4 + 4) = param_1;
  *(Creep **)(iVar1 + iVar6) = param_2;
  puVar5 = PTR_m_Info_0001807c + (uint)(byte)TVar2 * 0x50 + iVar7 * 0xf4;
  *(undefined4 *)(iVar4 + 0x28) = 0;
  *(undefined **)(iVar4 + 8) = puVar5;
  *(undefined *)(iVar4 + 0x24) = 0;
  iVar6 = *(int *)(puVar5 + 0x30);
  if (iVar6 == 1) {
    fVar9 = *(float *)(param_1 + 8) - DAT_0001d044;
    *(float *)(iVar4 + 0xc) = *(float *)(param_1 + 4) - s_TowerOffset;
    fVar8 = *(float *)(param_2 + 0x18);
    *(float *)(iVar4 + 0x10) = fVar9;
    fVar8 = fVar8 - s_CreepOffset;
    fVar9 = *(float *)(param_2 + 0x1c) - DAT_0001d03c;
    *(float *)(iVar4 + 0x14) = fVar8;
    *(float *)(iVar4 + 0x18) = fVar9;
    if (*(int *)(param_2 + 0x14) == 3) goto LAB_000143b0;
    iVar6 = *(int *)(param_2 + 0x10);
  }
  else {
    if (iVar6 != 2) {
      pcVar3 = "Projectiles::SpawnProjectile(...) : WARNING! Unhandled projectile type...";
      goto LAB_000143d4;
    }
    fVar9 = *(float *)(param_1 + 8) - DAT_0001d044;
    *(float *)(iVar4 + 0xc) = *(float *)(param_1 + 4) - s_TowerOffset;
    fVar8 = *(float *)(param_2 + 0x18);
    *(float *)(iVar4 + 0x10) = fVar9;
    fVar8 = fVar8 - s_CreepOffset;
    fVar9 = *(float *)(param_2 + 0x1c) - DAT_0001d03c;
    *(float *)(iVar4 + 0x14) = fVar8;
    *(float *)(iVar4 + 0x18) = fVar9;
    if (*(int *)(param_2 + 0x14) == 3) goto LAB_000143b0;
    iVar6 = *(int *)(param_2 + 0x10);
  }
  if (PTR_m_Info_00018054[iVar6 * 0x6c + 0x40] == '\0') {
    return;
  }
LAB_000143b0:
  *(float *)(iVar4 + 0x14) = fVar8 - s_FlyingCreepOffset;
  *(float *)(iVar4 + 0x18) = fVar9 - DAT_0001d04c;
  return;
}



// Projectiles::Fire(Tower*, Creep*)

void Projectiles::Fire(Tower *param_1,Creep *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  SoundDesc SVar4;
  uint uVar5;
  Creep *this;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 in_cr7;
  undefined4 in_cr8;
  float fVar10;
  float in_s14;
  float fVar11;
  undefined8 in_d8;
  undefined local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  undefined local_30;
  undefined local_2f;
  undefined local_2e;
  undefined local_2d;
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  
  puVar2 = PTR_m_Info_0001807c;
  iVar7 = *(int *)param_1;
  uVar5 = (uint)(byte)param_1[0x14];
  switch(*(undefined4 *)(PTR_m_Info_0001807c + uVar5 * 0x50 + iVar7 * 0xf4 + 0x30)) {
  case 1:
    if (PTR_m_Info_00018054[*(int *)(param_2 + 0x10) * 0x6c + 0x43] == '\0') {
      fVar10 = *(float *)(PTR_m_Info_0001807c + uVar5 * 0x50 + iVar7 * 0xf4 + 0x38);
    }
    else {
      fVar10 = 0.2;
    }
    Creep::Hurt(param_2,fVar10);
    SpawnProjectile(param_1,param_2);
    SVar4 = 0xb;
    bVar9 = true;
    goto LAB_00014844;
  case 2:
    SpawnProjectile(param_1,param_2);
    iVar7 = Core::Math::Rand(2);
    SVar4 = iVar7 + 0xd;
    break;
  case 3:
    uVar6 = 0;
    coprocessor_function(10,2,5,in_cr8,in_cr7,in_cr7);
    uVar1 = *(ushort *)PTR_m_CreepCount_000180a8;
    for (; uVar6 != uVar1; uVar6 = uVar6 + 1) {
      this = *(Creep **)(PTR_m_Creeps_00018094 + uVar6 * 4);
      fVar10 = (float)Core::Math::Vector2::DistanceSqr
                                ((Vector2 *)(param_1 + 4),(Vector2 *)(this + 0x18));
      fVar11 = (float)in_d8;
      if (fVar11 != fVar10 && fVar11 < fVar10 == (NAN(fVar11) || NAN(fVar10))) {
        if (PTR_m_Info_00018054[*(int *)(this + 0x10) * 0x6c + 0x43] == '\0') {
          fVar10 = *(float *)(PTR_m_Info_0001807c + uVar5 * 0x50 + iVar7 * 0xf4 + 0x38);
        }
        else {
          fVar10 = 0.2;
        }
        Creep::Hurt(this,fVar10);
      }
    }
    if (m_ShockWaveCount < 0x32) {
      puVar8 = *(undefined4 **)(m_ShockWaves + m_ShockWaveCount * 4);
      m_ShockWaveCount = m_ShockWaveCount + 1;
      uVar3 = *(undefined4 *)(param_1 + 8);
      *puVar8 = *(undefined4 *)(param_1 + 4);
      puVar8[1] = uVar3;
      uVar3 = *(undefined4 *)PTR_White_000180f8;
      puVar8[4] = 0;
      puVar8[2] = uVar3;
      puVar8[5] = 0;
      puVar8[3] = 0x437f0000;
      uVar3 = *(undefined4 *)(PTR_m_Info_0001807c + uVar5 * 0x50 + iVar7 * 0xf4 + 0x40);
      puVar8[7] = 0;
      puVar8[6] = uVar3;
    }
    SVar4 = 0xf;
    break;
  case 4:
    iVar7 = uVar5 * 0x50 + iVar7 * 0xf4;
    Creep::Hurt(param_2,*(float *)(PTR_m_Info_0001807c + iVar7 + 0x38));
    if (m_BoltCount < 0x32) {
      local_34 = 0xd0;
      local_32 = 0xff;
      local_31 = 0xff;
      local_2e = 0xff;
      local_2d = 0xff;
      local_2c = 0xff;
      local_2b = 0xff;
      local_2a = 0xff;
      local_29 = 0xff;
      local_33 = 0xe0;
      local_30 = 0xe0;
      local_2f = 0xf0;
      puVar8 = *(undefined4 **)(m_Bolts + m_BoltCount * 4);
      m_BoltCount = m_BoltCount + 1;
      *puVar8 = *(undefined4 *)(&local_34 + (uint)*(ushort *)(puVar2 + iVar7 + 0x34) * 4);
      puVar8[2] = *(undefined4 *)
                   (&_boltInnerSize_26867 + (uint)*(ushort *)(puVar2 + iVar7 + 0x34) * 4);
      puVar8[3] = *(undefined4 *)
                   (&_boltOuterSize_26868 + (uint)*(ushort *)(puVar2 + iVar7 + 0x34) * 4);
      puVar8[1] = 0x437f0000;
      bVar9 = param_1[0x14] == (Tower)0x0;
      if (bVar9) {
        in_s14 = *(float *)(param_1 + 4);
      }
      if (!bVar9) {
        in_s14 = *(float *)(param_1 + 4);
      }
      fVar10 = in_s14 - 15.0;
      if (bVar9) {
        in_s14 = *(float *)(param_1 + 8);
      }
      if (bVar9) {
        fVar11 = 30.0;
      }
      else {
        in_s14 = *(float *)(param_1 + 8);
        fVar11 = 51.0;
      }
      puVar8[4] = fVar10;
      fVar10 = *(float *)(param_2 + 0x18);
      puVar8[5] = in_s14 - fVar11;
      fVar10 = fVar10 - s_CreepOffset;
      fVar11 = *(float *)(param_2 + 0x1c) - DAT_0001d03c;
      puVar8[0x21] = fVar11;
      puVar8[0x20] = fVar10;
      if ((*(int *)(param_2 + 0x14) == 3) ||
         (PTR_m_Info_00018054[*(int *)(param_2 + 0x10) * 0x6c + 0x40] != '\0')) {
        puVar8[0x20] = fVar10 - s_FlyingCreepOffset;
        puVar8[0x21] = fVar11 - DAT_0001d04c;
      }
      Zap((Bolt *)puVar8,0,0xe);
    }
    iVar7 = Core::Math::Rand(2);
    SVar4 = iVar7 + 0x10;
    break;
  default:
    goto switchD_00014470_caseD_4;
  }
  bVar9 = false;
LAB_00014844:
  Sounds::Play(SVar4,bVar9);
switchD_00014470_caseD_4:
  return;
}



void _AudioServicesAddSystemSoundCompletion(void)

{
                    // WARNING: Could not recover jumptable at 0x000148a8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000180fc)();
  return;
}



void _AudioServicesCreateSystemSoundID(void)

{
                    // WARNING: Could not recover jumptable at 0x000148b4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018100)();
  return;
}



void _AudioServicesPlaySystemSound(void)

{
                    // WARNING: Could not recover jumptable at 0x000148c0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018104)();
  return;
}



void _AudioServicesRemoveSystemSoundCompletion(void)

{
                    // WARNING: Could not recover jumptable at 0x000148cc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018108)();
  return;
}



void _CFDataGetBytePtr(void)

{
                    // WARNING: Could not recover jumptable at 0x000148d8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001810c)();
  return;
}



void _CFRelease(void)

{
                    // WARNING: Could not recover jumptable at 0x000148e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018110)();
  return;
}



void _CGAffineTransformMakeRotation(void)

{
                    // WARNING: Could not recover jumptable at 0x000148f0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018114)();
  return;
}



void _CGAffineTransformTranslate(void)

{
                    // WARNING: Could not recover jumptable at 0x000148fc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018118)();
  return;
}



void _CGColorSpaceGetModel(void)

{
                    // WARNING: Could not recover jumptable at 0x00014908. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001811c)();
  return;
}



void _CGContextDrawImage(void)

{
                    // WARNING: Could not recover jumptable at 0x00014914. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018120)();
  return;
}



void _CGContextScaleCTM(void)

{
                    // WARNING: Could not recover jumptable at 0x00014920. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018124)();
  return;
}



void _CGContextTranslateCTM(void)

{
                    // WARNING: Could not recover jumptable at 0x0001492c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018128)();
  return;
}



void _CGDataProviderCopyData(void)

{
                    // WARNING: Could not recover jumptable at 0x00014938. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001812c)();
  return;
}



void _CGDataProviderCreateWithFilename(void)

{
                    // WARNING: Could not recover jumptable at 0x00014944. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018130)();
  return;
}



void _CGDataProviderRelease(void)

{
                    // WARNING: Could not recover jumptable at 0x00014950. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018134)();
  return;
}



void _CGImageCreateWithJPEGDataProvider(void)

{
                    // WARNING: Could not recover jumptable at 0x0001495c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018138)();
  return;
}



void _CGImageCreateWithPNGDataProvider(void)

{
                    // WARNING: Could not recover jumptable at 0x00014968. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001813c)();
  return;
}



void _CGImageGetBitmapInfo(void)

{
                    // WARNING: Could not recover jumptable at 0x00014974. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018140)();
  return;
}



void _CGImageGetBitsPerPixel(void)

{
                    // WARNING: Could not recover jumptable at 0x00014980. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018144)();
  return;
}



void _CGImageGetBytesPerRow(void)

{
                    // WARNING: Could not recover jumptable at 0x0001498c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018148)();
  return;
}



void _CGImageGetColorSpace(void)

{
                    // WARNING: Could not recover jumptable at 0x00014998. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001814c)();
  return;
}



void _CGImageGetDataProvider(void)

{
                    // WARNING: Could not recover jumptable at 0x000149a4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018150)();
  return;
}



void _CGImageGetHeight(void)

{
                    // WARNING: Could not recover jumptable at 0x000149b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018154)();
  return;
}



void _CGImageGetWidth(void)

{
                    // WARNING: Could not recover jumptable at 0x000149bc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018158)();
  return;
}



void _CGImageRelease(void)

{
                    // WARNING: Could not recover jumptable at 0x000149c8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001815c)();
  return;
}



void _CGRectGetMaxY(void)

{
                    // WARNING: Could not recover jumptable at 0x000149d4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018160)();
  return;
}



void _CGRectOffset(void)

{
                    // WARNING: Could not recover jumptable at 0x000149e0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018164)();
  return;
}



void _NSLog(void)

{
                    // WARNING: Could not recover jumptable at 0x000149ec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018168)();
  return;
}



void _UIApplicationMain(void)

{
                    // WARNING: Could not recover jumptable at 0x000149f8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001816c)();
  return;
}



void _UIGraphicsGetCurrentContext(void)

{
                    // WARNING: Could not recover jumptable at 0x00014a04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018170)();
  return;
}



void __Unwind_SjLj_Register(void)

{
                    // WARNING: Could not recover jumptable at 0x00014a10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018174)();
  return;
}



void __Unwind_SjLj_Resume(void)

{
                    // WARNING: Could not recover jumptable at 0x00014a1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018178)();
  return;
}



void __Unwind_SjLj_Unregister(void)

{
                    // WARNING: Could not recover jumptable at 0x00014a28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001817c)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// operator delete[](void*)

void operator_delete__(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00014a34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018180)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// operator delete(void*)

void operator_delete(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00014a40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018184)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// operator new[](unsigned long)

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014a4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR_dyld_stub_binding_helper_00018188)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// operator new(unsigned long)

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014a58. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR_dyld_stub_binding_helper_0001818c)();
  return pvVar1;
}



void ___cxa_guard_abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00014a64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018190)();
  return;
}



void ___cxa_guard_acquire(void)

{
                    // WARNING: Could not recover jumptable at 0x00014a70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018194)();
  return;
}



void ___cxa_guard_release(void)

{
                    // WARNING: Could not recover jumptable at 0x00014a7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018198)();
  return;
}



void ___divsi3(void)

{
                    // WARNING: Could not recover jumptable at 0x00014a88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001819c)();
  return;
}



void ___modsi3(void)

{
                    // WARNING: Could not recover jumptable at 0x00014a94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181a0)();
  return;
}



void ___udivsi3(void)

{
                    // WARNING: Could not recover jumptable at 0x00014aa0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181a4)();
  return;
}



void ___umodsi3(void)

{
                    // WARNING: Could not recover jumptable at 0x00014aac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181a8)();
  return;
}



void _atan2(void)

{
                    // WARNING: Could not recover jumptable at 0x00014ab8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181ac)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _atof(char *param_1)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014ac4. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR_dyld_stub_binding_helper_000181b0)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014ad0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR_dyld_stub_binding_helper_000181b4)();
  return iVar1;
}



void _cosf(void)

{
                    // WARNING: Could not recover jumptable at 0x00014adc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181b8)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014ae8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR_dyld_stub_binding_helper_000181bc)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetpos(FILE *param_1,fpos_t *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014af4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR_dyld_stub_binding_helper_000181c0)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014b00. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR_dyld_stub_binding_helper_000181c4)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014b0c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR_dyld_stub_binding_helper_000181c8)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fseek(FILE *param_1,long param_2,int param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014b18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR_dyld_stub_binding_helper_000181cc)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _gettimeofday(timeval *param_1,void *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014b24. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR_dyld_stub_binding_helper_000181d0)();
  return iVar1;
}



void _glAlphaFunc(void)

{
                    // WARNING: Could not recover jumptable at 0x00014b30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181d4)();
  return;
}



void _glBindFramebufferOES(void)

{
                    // WARNING: Could not recover jumptable at 0x00014b3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181d8)();
  return;
}



void _glBindRenderbufferOES(void)

{
                    // WARNING: Could not recover jumptable at 0x00014b48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181dc)();
  return;
}



void _glBindTexture(void)

{
                    // WARNING: Could not recover jumptable at 0x00014b54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181e0)();
  return;
}



void _glBlendFunc(void)

{
                    // WARNING: Could not recover jumptable at 0x00014b60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181e4)();
  return;
}



void _glCheckFramebufferStatusOES(void)

{
                    // WARNING: Could not recover jumptable at 0x00014b6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181e8)();
  return;
}



void _glClear(void)

{
                    // WARNING: Could not recover jumptable at 0x00014b78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181ec)();
  return;
}



void _glClearColor(void)

{
                    // WARNING: Could not recover jumptable at 0x00014b84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181f0)();
  return;
}



void _glClearDepthf(void)

{
                    // WARNING: Could not recover jumptable at 0x00014b90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181f4)();
  return;
}



void _glColor4f(void)

{
                    // WARNING: Could not recover jumptable at 0x00014b9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181f8)();
  return;
}



void _glColor4ub(void)

{
                    // WARNING: Could not recover jumptable at 0x00014ba8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000181fc)();
  return;
}



void _glCullFace(void)

{
                    // WARNING: Could not recover jumptable at 0x00014bb4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018200)();
  return;
}



void _glDeleteFramebuffersOES(void)

{
                    // WARNING: Could not recover jumptable at 0x00014bc0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018204)();
  return;
}



void _glDeleteRenderbuffersOES(void)

{
                    // WARNING: Could not recover jumptable at 0x00014bcc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018208)();
  return;
}



void _glDeleteTextures(void)

{
                    // WARNING: Could not recover jumptable at 0x00014bd8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001820c)();
  return;
}



void _glDepthFunc(void)

{
                    // WARNING: Could not recover jumptable at 0x00014be4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018210)();
  return;
}



void _glDisable(void)

{
                    // WARNING: Could not recover jumptable at 0x00014bf0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018214)();
  return;
}



void _glDisableClientState(void)

{
                    // WARNING: Could not recover jumptable at 0x00014bfc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018218)();
  return;
}



void _glDrawArrays(void)

{
                    // WARNING: Could not recover jumptable at 0x00014c08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001821c)();
  return;
}



void _glEnable(void)

{
                    // WARNING: Could not recover jumptable at 0x00014c14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018220)();
  return;
}



void _glEnableClientState(void)

{
                    // WARNING: Could not recover jumptable at 0x00014c20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018224)();
  return;
}



void _glFramebufferRenderbufferOES(void)

{
                    // WARNING: Could not recover jumptable at 0x00014c2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018228)();
  return;
}



void _glGenFramebuffersOES(void)

{
                    // WARNING: Could not recover jumptable at 0x00014c38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001822c)();
  return;
}



void _glGenRenderbuffersOES(void)

{
                    // WARNING: Could not recover jumptable at 0x00014c44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018230)();
  return;
}



void _glGenTextures(void)

{
                    // WARNING: Could not recover jumptable at 0x00014c50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018234)();
  return;
}



void _glGetIntegerv(void)

{
                    // WARNING: Could not recover jumptable at 0x00014c5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018238)();
  return;
}



void _glGetRenderbufferParameterivOES(void)

{
                    // WARNING: Could not recover jumptable at 0x00014c68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001823c)();
  return;
}



void _glGetString(void)

{
                    // WARNING: Could not recover jumptable at 0x00014c74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018240)();
  return;
}



void _glHint(void)

{
                    // WARNING: Could not recover jumptable at 0x00014c80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018244)();
  return;
}



void _glLineWidth(void)

{
                    // WARNING: Could not recover jumptable at 0x00014c8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018248)();
  return;
}



void _glLoadIdentity(void)

{
                    // WARNING: Could not recover jumptable at 0x00014c98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001824c)();
  return;
}



void _glMatrixMode(void)

{
                    // WARNING: Could not recover jumptable at 0x00014ca4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018250)();
  return;
}



void _glMultMatrixf(void)

{
                    // WARNING: Could not recover jumptable at 0x00014cb0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018254)();
  return;
}



void _glPopMatrix(void)

{
                    // WARNING: Could not recover jumptable at 0x00014cbc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018258)();
  return;
}



void _glPushMatrix(void)

{
                    // WARNING: Could not recover jumptable at 0x00014cc8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001825c)();
  return;
}



void _glRenderbufferStorageOES(void)

{
                    // WARNING: Could not recover jumptable at 0x00014cd4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018260)();
  return;
}



void _glRotatef(void)

{
                    // WARNING: Could not recover jumptable at 0x00014ce0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018264)();
  return;
}



void _glScalef(void)

{
                    // WARNING: Could not recover jumptable at 0x00014cec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018268)();
  return;
}



void _glScissor(void)

{
                    // WARNING: Could not recover jumptable at 0x00014cf8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001826c)();
  return;
}



void _glShadeModel(void)

{
                    // WARNING: Could not recover jumptable at 0x00014d04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018270)();
  return;
}



void _glTexCoordPointer(void)

{
                    // WARNING: Could not recover jumptable at 0x00014d10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018274)();
  return;
}



void _glTexImage2D(void)

{
                    // WARNING: Could not recover jumptable at 0x00014d1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018278)();
  return;
}



void _glTexParameteri(void)

{
                    // WARNING: Could not recover jumptable at 0x00014d28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001827c)();
  return;
}



void _glTranslatef(void)

{
                    // WARNING: Could not recover jumptable at 0x00014d34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018280)();
  return;
}



void _glVertexPointer(void)

{
                    // WARNING: Could not recover jumptable at 0x00014d40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018284)();
  return;
}



void _glViewport(void)

{
                    // WARNING: Could not recover jumptable at 0x00014d4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_00018288)();
  return;
}



void _lroundf(void)

{
                    // WARNING: Could not recover jumptable at 0x00014d58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001828c)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014d64. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR_dyld_stub_binding_helper_00018290)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014d70. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR_dyld_stub_binding_helper_00018294)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014d7c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR_dyld_stub_binding_helper_00018298)();
  return pvVar1;
}



void _objc_enumerationMutation(void)

{
                    // WARNING: Could not recover jumptable at 0x00014d88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_0001829c)();
  return;
}



void _objc_msgSend(void)

{
                    // WARNING: Could not recover jumptable at 0x00014d94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000182a0)();
  return;
}



void _objc_msgSendSuper2(void)

{
                    // WARNING: Could not recover jumptable at 0x00014da0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000182a4)();
  return;
}



void _objc_msgSend_stret(void)

{
                    // WARNING: Could not recover jumptable at 0x00014dac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000182a8)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014db8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR_dyld_stub_binding_helper_000182ac)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014dc4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR_dyld_stub_binding_helper_000182b0)();
  return iVar1;
}



void _sinf(void)

{
                    // WARNING: Could not recover jumptable at 0x00014dd0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_dyld_stub_binding_helper_000182b4)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sprintf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014ddc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR_dyld_stub_binding_helper_000182b8)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strcat(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014de8. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR_dyld_stub_binding_helper_000182bc)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014df4. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR_dyld_stub_binding_helper_000182c0)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014e00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR_dyld_stub_binding_helper_000182c4)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strcpy(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014e0c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR_dyld_stub_binding_helper_000182c8)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014e18. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR_dyld_stub_binding_helper_000182cc)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strstr(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014e24. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR_dyld_stub_binding_helper_000182d0)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _wcscmp(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014e30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR_dyld_stub_binding_helper_000182d4)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

wchar_t * _wcscpy(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014e3c. Too many branches
                    // WARNING: Treating indirect jump as call
  pwVar1 = (wchar_t *)(*(code *)PTR_dyld_stub_binding_helper_000182d8)();
  return pwVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _wcslen(wchar_t *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014e48. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR_dyld_stub_binding_helper_000182dc)();
  return sVar1;
}


