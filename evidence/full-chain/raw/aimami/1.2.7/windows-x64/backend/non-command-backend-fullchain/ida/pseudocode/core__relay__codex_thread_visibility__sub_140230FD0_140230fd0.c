// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140230fd0 | name sub_140230FD0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_OWORD *__fastcall sub_140230FD0(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rbx
  __int128 v12; // [rsp+28h] [rbp-58h] BYREF
  __int128 v13; // [rsp+38h] [rbp-48h]
  __int64 v14; // [rsp+48h] [rbp-38h]
  __int64 v15; // [rsp+A0h] [rbp+20h]
  char v16; // [rsp+A8h] [rbp+28h]
  __int64 v17; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+38h]
  __int64 v19; // [rsp+C0h] [rbp+40h]
  __int64 v20; // [rsp+C8h] [rbp+48h]

  v20 = -2;
  sub_140282430(&v12);
  if ( v14 == -1 )
  {
    v7 = v12 & 3;
    if ( (unsigned int)(v7 - 2) >= 2 && (v12 & 3) != 0 )
    {
      v17 = v12 - 1;
      v16 = 3;
      sub_1416BCB00(&v17);
    }
  }
  else if ( (_DWORD)v14 != 2 )
  {
    v7 = *((_QWORD *)&v12 + 1);
    v8 = v12;
    v3 = v13;
    goto LABEL_8;
  }
  v8 = -1;
LABEL_8:
  v19 = v8;
  if ( v8 == -1 )
    v3 = a3;
  v18 = v7;
  if ( v8 != -1 )
    a2 = v7;
  sub_141695230(&v12, a2, v3);
  if ( (_QWORD)v12 == -1 )
  {
    v10 = *((_QWORD *)&v12 + 1);
    v15 = *((_QWORD *)&v12 + 1);
    sub_141681D30(a1, a2, v3);
    if ( (unsigned int)(v10 & 3) - 2 >= 2 && (v10 & 3) != 0 )
    {
      v17 = v10 - 1;
      v16 = 3;
      sub_1416BCB00(&v17);
    }
  }
  else
  {
    v9 = v12;
    a1[1] = v13;
    *a1 = v9;
  }
  if ( (unsigned __int64)(v19 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v18, v19, 1);
  return a1;
}
