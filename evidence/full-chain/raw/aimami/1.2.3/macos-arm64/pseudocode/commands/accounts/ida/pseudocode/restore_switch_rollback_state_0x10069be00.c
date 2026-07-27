// __ZN13codexmate_lib8commands8accounts29restore_switch_rollback_state28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10069be00
__int64 __fastcall codexmate_lib::commands::accounts::restore_switch_rollback_state::_$u7b$$u7b$closure$u7d$$u7d$::h9d66e0578c126999(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 result; // rax

  a1[2] = a2[5]; /*0x10069be12*/
  v2 = a2[3]; /*0x10069be16*/
  a1[1] = a2[4]; /*0x10069be1e*/
  *a1 = v2; /*0x10069be22*/
  v3 = a2[1]; /*0x10069be25*/
  v4 = a2[2]; /*0x10069be29*/
  if ( v4 ) /*0x10069be30*/
  {
    v5 = a2[1]; /*0x10069be32*/
    do /*0x10069be52*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v5); /*0x10069be43*/
      v5 += 424; /*0x10069be48*/
      --v4; /*0x10069be4f*/
    }
    while ( v4 ); /*0x10069be52*/
  }
  result = *a2; /*0x10069be54*/
  if ( *a2 ) /*0x10069be54*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 424 * result, 8); /*0x10069be73*/
  return result; /*0x10069be6b*/
}