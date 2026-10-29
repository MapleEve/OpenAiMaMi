// win 1.2.7 | module src/core/relay/anthropic_trace.rs | ea 0x1401a7820 | name sub_1401A7820
// win 1.2.7 | module src/core/relay/anthropic_trace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401A7820(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int128 v9; // [rsp+30h] [rbp-50h]
  __int128 v10; // [rsp+40h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  __int128 v14; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int128 v15; // [rsp+80h] [rbp+0h]
  __int128 v16; // [rsp+90h] [rbp+10h]
  char v17; // [rsp+A7h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+28h]

  v18 = -2;
  *(_QWORD *)&v14 = -1;
  *((_QWORD *)&v15 + 1) = 0;
  *((_QWORD *)&v16 + 1) = 0;
  v17 = 1;
  v4 = sub_140BEBF90(
         &v14,
         "charsufffdNoAccountModelRestoreEntrythread_idoriginal_modelborrowed_modelversionentries",
         5,
         a2);
  if ( v4
    || (v17 = 1,
        (v4 = sub_140BEBF90(
                &v14,
                "ufffdNoAccountModelRestoreEntrythread_idoriginal_modelborrowed_modelversionentries",
                5,
                a2 + 8)) != 0) )
  {
    *(_QWORD *)(a1 + 8) = v4;
    *(_BYTE *)a1 = -1;
    if ( (_QWORD)v14 == -2 )
    {
      if ( BYTE8(v14) != 0xFF )
        sub_14002F9D0((char *)&v14 + 8);
    }
    else
    {
      if ( *((_QWORD *)&v15 + 1) )
      {
        v5 = *((_QWORD *)&v16 + 1);
        *((_QWORD *)&v8 + 1) = 0;
        v9 = __PAIR128__(v16, *((unsigned __int64 *)&v15 + 1));
        *((_QWORD *)&v10 + 1) = 0;
        v11 = *((_QWORD *)&v15 + 1);
        v12 = v16;
        v6 = 1;
      }
      else
      {
        v6 = 0;
        v5 = 0;
      }
      *(_QWORD *)&v8 = v6;
      *(_QWORD *)&v10 = v6;
      v13 = v5;
      sub_140DF2FD0(&v8);
      if ( (_QWORD)v14 != -1 && (_QWORD)v14 )
        sub_140001660(*((_QWORD *)&v14 + 1), v14, 1);
    }
  }
  else
  {
    v10 = v16;
    v9 = v15;
    v8 = v14;
    v17 = 0;
    sub_14163FE10(a1, &v8);
  }
  return a1;
}
