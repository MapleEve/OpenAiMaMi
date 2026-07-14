// mac 1.1.8 BACKEND-ONLY create_bootstrap_tray_menu node 0x10079d440 depth=1
// tauri4menu8builders4menu24MenuBuilder::separator
__int64 *__fastcall tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h03127775174186d9(
        __int64 *a1,
        __int64 *a2)
{
  bool v2; // of
  volatile signed __int64 *v3; // r12
  __int64 v4; // rt0
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  volatile signed __int64 *v8; // rdx
  __int64 v9; // rax
  volatile signed __int64 *v11; // [rsp+0h] [rbp-80h] BYREF
  volatile signed __int64 *v12; // [rsp+8h] [rbp-78h]
  volatile signed __int64 *v13; // [rsp+10h] [rbp-70h]
  __int64 v14; // [rsp+18h] [rbp-68h]
  __int64 v15; // [rsp+20h] [rbp-60h]
  __int64 v16; // [rsp+28h] [rbp-58h]
  volatile signed __int64 *v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h]
  volatile signed __int64 *v19; // [rsp+40h] [rbp-40h]
  __int64 v20; // [rsp+48h] [rbp-38h]
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+58h] [rbp-28h]

  tauri::menu::predefined::_$LT$impl$u20$tauri..menu..PredefinedMenuItem$LT$R$GT$$GT$::separator::h21b60fa17baf7654( /*0x10079d45d*/
    &v11,
    a2[6]);
  v2 = __OFSUB__(v11, 0x8000000000000025LL); /*0x10079d46c*/
  if ( v11 != (volatile signed __int64 *)0x8000000000000025LL ) /*0x10079d470*/
  {
    v22 = v16; /*0x10079d4b4*/
    v21 = v15; /*0x10079d4bc*/
    v20 = v14; /*0x10079d4c4*/
    v19 = v13; /*0x10079d4cc*/
    v18 = (__int64)v12; /*0x10079d4d8*/
    v17 = v11; /*0x10079d4dc*/
    v5 = a2[2]; /*0x10079d4e0*/
    if ( v5 != *a2 ) /*0x10079d4e7*/
      goto LABEL_9; /*0x10079d4e7*/
LABEL_8:
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d(a2); /*0x10079d4e9*/
    goto LABEL_9; /*0x10079d4ec*/
  }
  v3 = v12; /*0x10079d472*/
  v17 = v12; /*0x10079d476*/
  v4 = _InterlockedIncrement64(v12); /*0x10079d47a*/
  if ( (v4 < 0) ^ v2 | (v4 == 0) ) /*0x10079d47f*/
    BUG(); /*0x10079d57f*/
  if ( !_InterlockedDecrement64(v3) ) /*0x10079d485*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hd87358669b0a7548(&v17); /*0x10079d490*/
  v18 = 2; /*0x10079d495*/
  v19 = v3; /*0x10079d49d*/
  v17 = (volatile signed __int64 *)0x8000000000000025LL; /*0x10079d4a1*/
  v5 = a2[2]; /*0x10079d4a5*/
  if ( v5 == *a2 ) /*0x10079d4ac*/
    goto LABEL_8; /*0x10079d4ac*/
LABEL_9:
  v6 = a2[1]; /*0x10079d4f1*/
  v7 = 48 * v5; /*0x10079d4f9*/
  *(_QWORD *)(v6 + v7 + 40) = v22; /*0x10079d501*/
  *(_QWORD *)(v6 + v7 + 32) = v21; /*0x10079d50a*/
  *(_QWORD *)(v6 + v7 + 24) = v20; /*0x10079d513*/
  *(_QWORD *)(v6 + v7 + 16) = v19; /*0x10079d51c*/
  v8 = v17; /*0x10079d521*/
  *(_QWORD *)(v6 + v7 + 8) = v18; /*0x10079d529*/
  *(_QWORD *)(v6 + v7) = v8; /*0x10079d52e*/
  a2[2] = v5 + 1; /*0x10079d535*/
  a1[6] = a2[6]; /*0x10079d53d*/
  a1[5] = a2[5]; /*0x10079d545*/
  a1[4] = a2[4]; /*0x10079d54d*/
  a1[3] = a2[3]; /*0x10079d555*/
  a1[2] = a2[2]; /*0x10079d55d*/
  v9 = *a2; /*0x10079d561*/
  a1[1] = a2[1]; /*0x10079d568*/
  *a1 = v9; /*0x10079d56c*/
  return a1; /*0x10079d572*/
}