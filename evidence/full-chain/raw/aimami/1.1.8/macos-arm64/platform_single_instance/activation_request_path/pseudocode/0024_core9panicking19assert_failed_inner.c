// mac 1.1.8 BEHAVIORAL-BACKEND activation_request_path node 0x101130373 depth=3
// core9panicking19assert_failed_inner
void __fastcall __noreturn core::panicking::assert_failed_inner::h3b576599883d995c(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  _QWORD *v9; // [rsp+0h] [rbp-80h] BYREF
  __int64 (__fastcall *v10)(); // [rsp+8h] [rbp-78h]
  _QWORD *v11; // [rsp+10h] [rbp-70h]
  __int64 (__fastcall *v12)(); // [rsp+18h] [rbp-68h]
  _QWORD *v13; // [rsp+20h] [rbp-60h]
  __int64 (__fastcall *v14)(); // [rsp+28h] [rbp-58h]
  _QWORD *v15; // [rsp+30h] [rbp-50h]
  __int64 (__fastcall *v16)(); // [rsp+38h] [rbp-48h]
  _QWORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v20[2]; // [rsp+70h] [rbp-10h] BYREF

  v20[0] = a2; /*0x101130385*/
  v20[1] = a3; /*0x101130389*/
  v19[0] = a4; /*0x10113038d*/
  v19[1] = a5; /*0x101130391*/
  v8 = qword_101402B60[a1]; /*0x1011303ae*/
  v18[0] = (char *)dword_101402B50 + dword_101402B50[a1]; /*0x1011303b2*/
  v18[1] = v8; /*0x1011303b6*/
  if ( !a6 ) /*0x1011303bd*/
  {
    v9 = v18; /*0x1011303c7*/
    v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h905ab1bd6ee047e4; /*0x1011303d1*/
    v11 = v20; /*0x1011303d9*/
    v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h406c21ea6648dc25; /*0x1011303e4*/
    v13 = v19; /*0x1011303ec*/
    v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h406c21ea6648dc25; /*0x1011303f0*/
    core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_101259D00, (__int64)&v9, a8); /*0x1011303fb*/
  }
  v17[0] = a6; /*0x101130408*/
  v17[1] = a7; /*0x10113040b*/
  v9 = v18; /*0x101130417*/
  v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h905ab1bd6ee047e4; /*0x101130421*/
  v11 = v17; /*0x101130425*/
  v12 = _$LT$core..fmt..Arguments$u20$as$u20$core..fmt..Display$GT$::fmt::hb1fc4364025ed08a; /*0x101130430*/
  v13 = v20; /*0x101130438*/
  v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h406c21ea6648dc25; /*0x101130443*/
  v15 = v19; /*0x10113044b*/
  v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h406c21ea6648dc25; /*0x10113044f*/
  core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_101259D37, (__int64)&v9, a8); /*0x10113045a*/
}