// mac 1.2.2 NEW codexmate_lib8platform7process21open_macos_app_bun 0x1013eeef0 d=2
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17ha4ac61c7a0de5f7bE'
__int64 __fastcall alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hba190b810e68ac72(__int64 *a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // [rsp+8h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-20h]

  v1 = 4; /*0x1013eef09*/
  if ( (unsigned __int64)(2 * *a1) >= 5 ) /*0x1013eef0f*/
    v1 = 2 * *a1; /*0x1013eef0f*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::hf89b1e9445b8948e(&v3, *a1, a1[1], v1, 8, 8); /*0x1013eef2a*/
  if ( v3 == 1 ) /*0x1013eef33*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4); /*0x1013eef51*/
  result = v4; /*0x1013eef35*/
  a1[1] = v4; /*0x1013eef39*/
  *a1 = v1; /*0x1013eef3d*/
  return result; /*0x1013eef40*/
}