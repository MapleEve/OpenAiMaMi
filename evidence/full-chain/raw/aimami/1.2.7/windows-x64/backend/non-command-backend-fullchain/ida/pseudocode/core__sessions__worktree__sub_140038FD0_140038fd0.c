// win 1.2.7 | module src/core/sessions/worktree.rs | ea 0x140038fd0 | name sub_140038FD0
// win 1.2.7 | module src/core/sessions/worktree.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140038FD0(__int64 a1, void *a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  __m128i v8[512]; // [rsp+30h] [rbp-50h] BYREF
  HANDLE hObject; // [rsp+2030h] [rbp+1FB0h] BYREF
  __int128 v10; // [rsp+2038h] [rbp+1FB8h] BYREF
  unsigned __int64 v11; // [rsp+2048h] [rbp+1FC8h]
  __int64 v12; // [rsp+2050h] [rbp+1FD0h]

  v12 = -2;
  hObject = a2;
  *(_QWORD *)&v10 = 0;
  *((_QWORD *)&v10 + 1) = 1;
  v11 = 0;
  v3 = 0;
  sub_1418F4C70(v8, 0, 0x2000);
  while ( sub_1416A0B80(&hObject, v8, 0x2000) != 1 )
  {
    if ( !v4 )
    {
      *(_QWORD *)(a1 + 16) = v11;
      *(_OWORD *)a1 = v10;
      goto LABEL_18;
    }
    v5 = 0;
    if ( v3 <= 0x100000 )
      v5 = 0x100000 - v3;
    if ( v5 >= v4 )
      v5 = v4;
    if ( v5 >= 0x2001 )
      sub_1419392D0(0, v5, 0x2000, &off_14193E1B8);
    v6 = v3;
    if ( v5 <= (unsigned __int64)v10 - v3 )
    {
      if ( v3 > 0xFFFFF )
        goto LABEL_2;
LABEL_12:
      sub_1418F44E0((__m128i *)(v6 + *((_QWORD *)&v10 + 1)), v8, v5);
      goto LABEL_2;
    }
    sub_14190D590((unsigned int)&v10, v3, v5, 1, 1);
    v6 = v11;
    if ( v3 <= 0xFFFFF )
      goto LABEL_12;
LABEL_2:
    v11 = v5 + v6;
    v3 = v5 + v6;
  }
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = -1;
  if ( (_QWORD)v10 )
    sub_140001660(*((_QWORD *)&v10 + 1), v10, 1);
LABEL_18:
  CloseHandle(hObject);
  return a1;
}
