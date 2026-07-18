// win 1.2.1 NEW migrate_session_worktree 0x1408780b0 d=1
__int64 __fastcall sub_1408780B0(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 result; // rax

  v1 = (_QWORD *)a1; /*0x1408780c3*/
  if ( *(_QWORD *)(a1 + 64) != -1 ) /*0x1408780cb*/
  {
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 88)) ) /*0x1408780d5*/
      sub_141275D00(a1 + 88); /*0x1408780e3*/
    v1 = (_QWORD *)a1; /*0x1408780e9*/
    v2 = *(_QWORD *)(a1 + 64); /*0x1408780ed*/
    if ( v2 ) /*0x1408780f4*/
      sub_140001360(*(_QWORD *)(a1 + 72), v2, 1); /*0x140878100*/
  }
  sub_1408CAC00(v1 + 2); /*0x140878109*/
  v3 = v1[2]; /*0x14087810e*/
  if ( v3 ) /*0x140878115*/
    sub_140001360(v1[3], 56 * v3, 8); /*0x140878125*/
  sub_1408CAC00(v1 + 5); /*0x14087812e*/
  result = v1[5]; /*0x140878133*/
  if ( result ) /*0x14087813a*/
    return sub_140001360(v1[6], 56 * result, 8); /*0x140878150*/
  return result; /*0x14087814a*/
}