// mac 1.2.2 NEW codexmate_lib8platform17voice_permissions16has_val 0x1013df450 d=2
void __fastcall __noreturn objc2::__macro_helpers::retain_semantics::none_fail::hda1150934f8bd705(
        void *a1,
        __int64 a2,
        __int64 a3)
{
  objc_class *Class; // rax
  BOOL isMetaClass; // al
  void *v6; // rcx
  objc_class *v7; // [rsp+0h] [rbp-60h] BYREF
  _QWORD *v8; // [rsp+8h] [rbp-58h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+10h] [rbp-50h]
  objc_class **v10; // [rsp+18h] [rbp-48h]
  __int64 (__fastcall *v11)(); // [rsp+20h] [rbp-40h]
  _QWORD *v12; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall *v13)(); // [rsp+30h] [rbp-30h]
  _QWORD v14[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-18h] BYREF

  v15[0] = a2; /*0x1013df45b*/
  if ( !a1 ) /*0x1013df462*/
  {
    v8 = v15; /*0x1013df468*/
    v9 = _$LT$objc2..runtime..Sel$u20$as$u20$core..fmt..Display$GT$::fmt::h2d4d78f9cd988cce; /*0x1013df473*/
    core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&anon_a6ae5c8018ffc3e74c1ec954bd12687b_14, (__int64)&v8, a3); /*0x1013df482*/
  }
  Class = object_getClass(a1); /*0x1013df48d*/
  if ( Class ) /*0x1013df495*/
  {
    v7 = Class; /*0x1013df497*/
    isMetaClass = class_isMetaClass(Class); /*0x1013df49e*/
    v6 = &anon_a6ae5c8018ffc3e74c1ec954bd12687b_20; /*0x1013df4ac*/
    if ( !isMetaClass ) /*0x1013df4b3*/
      v6 = &anon_a6ae5c8018ffc3e74c1ec954bd12687b_19; /*0x1013df4b3*/
    v14[0] = v6; /*0x1013df4b7*/
    v14[1] = 1; /*0x1013df4bb*/
    v8 = v14; /*0x1013df4c7*/
    v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf4fd4bc271549ce0; /*0x1013df4d2*/
    v10 = &v7; /*0x1013df4da*/
    v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1053fe6a72a5ecca; /*0x1013df4e5*/
    v12 = v15; /*0x1013df4ed*/
    v13 = _$LT$objc2..runtime..Sel$u20$as$u20$core..fmt..Display$GT$::fmt::h2d4d78f9cd988cce; /*0x1013df4f8*/
    core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&anon_a6ae5c8018ffc3e74c1ec954bd12687b_21, (__int64)&v8, a3); /*0x1013df50a*/
  }
  v14[0] = a1; /*0x1013df50f*/
  v8 = v14; /*0x1013df517*/
  v9 = _$LT$$BP$const$u20$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h0f0bc77f2201b28f; /*0x1013df522*/
  core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1013df538*/
    (__int64)&anon_a6ae5c8018ffc3e74c1ec954bd12687b_31,
    (__int64)&v8,
    (__int64)&anon_a6ae5c8018ffc3e74c1ec954bd12687b_32);
}