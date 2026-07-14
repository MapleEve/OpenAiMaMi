// mac 1.1.8 cancel_chatgpt_oauth_login node va=0x100f47ce0 depth=2
// tokio4sync7oneshot5State12set_complete
signed __int64 __fastcall tokio::sync::oneshot::State::set_complete::h59099fb12c33618f(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  signed __int64 v2; // rcx

  v1 = *a1; /*0x100f47ce4*/
  do /*0x100f47d07*/
  {
    v2 = v1; /*0x100f47cf0*/
    if ( (v1 & 4) != 0 ) /*0x100f47cf6*/
      break; /*0x100f47cf6*/
    v1 = _InterlockedCompareExchange64(a1, v1 | 2, v1); /*0x100f47d02*/
  }
  while ( v2 != v1 ); /*0x100f47d07*/
  return v2; /*0x100f47d0c*/
}