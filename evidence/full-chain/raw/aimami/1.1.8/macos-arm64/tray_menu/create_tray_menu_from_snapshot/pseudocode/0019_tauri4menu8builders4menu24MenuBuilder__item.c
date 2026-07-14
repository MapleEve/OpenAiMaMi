// mac 1.1.8 BACKEND-ONLY create_tray_menu_from_snapshot node 0x10079cc60 depth=1
// tauri4menu8builders4menu24MenuBuilder::item
__int64 *__fastcall tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::item::hd7acccfd486d9811(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+10h] [rbp-40h]
  __int64 v11; // [rsp+18h] [rbp-38h]
  __int64 v12; // [rsp+20h] [rbp-30h]
  __int64 v13; // [rsp+28h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-20h]

  v10 = (*(__int64 (__fastcall **)(__int64))(a4 + 32))(a3); /*0x10079cc79*/
  v11 = v4; /*0x10079cc7d*/
  v5 = a2[2]; /*0x10079cc8f*/
  if ( v5 == *a2 ) /*0x10079cc96*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d(a2); /*0x10079cc9b*/
  v6 = a2[1]; /*0x10079cca0*/
  v7 = 48 * v5; /*0x10079cca8*/
  *(_QWORD *)(v6 + v7 + 40) = v14; /*0x10079ccb0*/
  *(_QWORD *)(v6 + v7 + 32) = v13; /*0x10079ccb9*/
  *(_QWORD *)(v6 + v7 + 24) = v12; /*0x10079ccc2*/
  *(_QWORD *)(v6 + v7 + 16) = v11; /*0x10079cccb*/
  *(_QWORD *)(v6 + v7 + 8) = v10; /*0x10079ccd8*/
  *(_QWORD *)(v6 + v7) = 0x8000000000000025LL; /*0x10079ccdd*/
  a2[2] = v5 + 1; /*0x10079cce4*/
  a1[6] = a2[6]; /*0x10079ccec*/
  a1[5] = a2[5]; /*0x10079ccf4*/
  a1[4] = a2[4]; /*0x10079ccfc*/
  a1[3] = a2[3]; /*0x10079cd04*/
  a1[2] = a2[2]; /*0x10079cd0c*/
  v8 = *a2; /*0x10079cd10*/
  a1[1] = a2[1]; /*0x10079cd17*/
  *a1 = v8; /*0x10079cd1b*/
  return a1; /*0x10079cd21*/
}