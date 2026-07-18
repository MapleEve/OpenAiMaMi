// win 1.2.1 NEW migrate_session_worktree 0x1415c9485 d=1
__int64 __fastcall sub_1415C9485(__int64 a1)
{
  __int64 result; // rax
  char v2; // [rsp+2Fh] [rbp-19h] BYREF
  _QWORD *v3; // [rsp+30h] [rbp-18h]
  _QWORD v4[2]; // [rsp+38h] [rbp-10h] BYREF

  result = *(unsigned int *)(a1 + 96); /*0x1415c9489*/
  if ( (_DWORD)result ) /*0x1415c948e*/
  {
    v4[0] = a1; /*0x1415c949a*/
    v4[1] = &v2; /*0x1415c94a6*/
    v3 = v4; /*0x1415c94af*/
    return sub_1415EF590((volatile void *)(a1 + 96), (__int64)&off_1416AFB40); /*0x1415c94c7*/
  }
  return result; /*0x1415c9490*/
}