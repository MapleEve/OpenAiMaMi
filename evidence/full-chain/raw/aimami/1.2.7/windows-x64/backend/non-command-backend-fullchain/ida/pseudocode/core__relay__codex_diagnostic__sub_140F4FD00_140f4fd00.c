// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140f4fd00 | name sub_140F4FD00
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140F4FD00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  __int128 v9; // xmm6
  __int64 v10; // rdi
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+30h] [rbp-50h]
  _QWORD *v13; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall *v14)(_QWORD, _QWORD); // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h]
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]
  _QWORD v19[2]; // [rsp+70h] [rbp-10h] BYREF

  v19[1] = -2;
  sub_140E99260(&v16, a4);
  if ( (_QWORD)v16 == -1 )
  {
    v19[0] = *((_QWORD *)&v16 + 1);
    v13 = v19;
    v14 = sub_14163CE40;
    sub_1416ABFD0(&v11, &unk_141A57FB9, &v13);
    v9 = v11;
    v10 = v12;
    sub_14002F910(v19);
    *(_OWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 24) = v10;
    *(_QWORD *)a1 = 10;
    return;
  }
  v15 = *((_QWORD *)&v16 + 1);
  v18 = v16;
  if ( (sub_140222E10(a2, a3, *((_QWORD *)&v16 + 1), v17) & 1) == 0 )
  {
    sub_1401BD710(v7, v7);
    *(_QWORD *)a1 = -1;
    v8 = v18;
    if ( !v18 )
      return;
    goto LABEL_10;
  }
  v19[0] = v7;
  *(_QWORD *)&v16 = v19;
  *((_QWORD *)&v16 + 1) = sub_1416BB0B0;
  sub_1416ABFD0(&v11, &unk_141A57FD4, &v16);
  v16 = v11;
  v17 = v12;
  if ( (v19[0] & 3) - 2 >= 2 && (v19[0] & 3) != 0 )
  {
    v14 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v19[0] - 1LL);
    LOBYTE(v13) = 3;
    sub_1416BCB00(&v14);
  }
  *(_QWORD *)a1 = 10;
  *(_OWORD *)(a1 + 8) = v16;
  *(_QWORD *)(a1 + 24) = v17;
  v8 = v18;
  if ( v18 )
LABEL_10:
    sub_140001660(v15, v8, 1);
}
