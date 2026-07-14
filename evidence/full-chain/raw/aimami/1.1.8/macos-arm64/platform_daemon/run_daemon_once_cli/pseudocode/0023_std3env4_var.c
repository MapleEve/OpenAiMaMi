// mac 1.1.8 BEHAVIORAL-BACKEND run_daemon_once_cli node 0x10109e5e0 depth=2
// std3env4_var
__int64 *__fastcall std::env::_var::h5297a832922dea45(__int64 *a1, const void *a2, size_t a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v9[3]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v10; // [rsp+18h] [rbp-38h] BYREF
  __int64 v11; // [rsp+20h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-28h]

  std::env::_var_os::h174f31a71fef3df9((unsigned __int64 *)&v10, a2, a3); /*0x10109e5f6*/
  v3 = v10; /*0x10109e5fb*/
  if ( __OFSUB__(-v10, 1) ) /*0x10109e602*/
  {
    v4 = 0x8000000000000000LL; /*0x10109e607*/
    v5 = 1; /*0x10109e611*/
    v6 = 1; /*0x10109e616*/
  }
  else
  {
    v7 = v11; /*0x10109e61d*/
    v4 = v12; /*0x10109e621*/
    core::str::converts::from_utf8::hb32deb9559450f6e((__int64)v9, v11, v12); /*0x10109e62f*/
    v5 = v9[0]; /*0x10109e634*/
    a1[1] = v3; /*0x10109e638*/
    a1[2] = v7; /*0x10109e63c*/
    v6 = 3; /*0x10109e640*/
  }
  a1[v6] = v4; /*0x10109e645*/
  *a1 = v5; /*0x10109e649*/
  return a1; /*0x10109e64f*/
}