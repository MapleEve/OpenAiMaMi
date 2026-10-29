// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140f70980 | name sub_140F70980
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F70980(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  int v10; // eax
  void *v11; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // [rsp+20h] [rbp-60h] BYREF
  __int128 v22; // [rsp+30h] [rbp-50h]
  __int128 v23; // [rsp+40h] [rbp-40h]
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int128 v25; // [rsp+60h] [rbp-20h]
  __int128 v26; // [rsp+70h] [rbp-10h]
  __int64 v27; // [rsp+80h] [rbp+0h]
  __int64 v28; // [rsp+88h] [rbp+8h]
  __int64 v29; // [rsp+90h] [rbp+10h]

  v29 = -2;
  sub_140F70370(&v21, a3);
  if ( (_DWORD)v21 == -1 )
  {
    v10 = *(_DWORD *)(a3 + 360);
    if ( v10 > 16 || v10 <= 14 && *(_BYTE *)(a3 + 365) )
    {
      nullsub_1(v6);
      v11 = (void *)sub_140001650(62, 1);
      if ( !v11 )
        sub_141938D2B(1, 62);
      qmemcpy(v11, "relay state schema cannot represent this router commit receipt", 62);
      *(_QWORD *)a1 = 9;
      *(_QWORD *)(a1 + 8) = 62;
      *(_QWORD *)(a1 + 16) = v11;
      *(_QWORD *)(a1 + 24) = 62;
    }
    else
    {
      v13 = sub_1401B6D70(a2);
      if ( v13 )
      {
        *(_QWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v13;
      }
      else
      {
        sub_140E99A20(&v21, a3);
        v14 = *((_QWORD *)&v21 + 1);
        if ( (_QWORD)v21 == -1 )
        {
          *(_QWORD *)a1 = 3;
          *(_QWORD *)(a1 + 8) = v14;
        }
        else
        {
          v28 = v21;
          v15 = a2[101];
          v16 = a2[102];
          v27 = *((_QWORD *)&v21 + 1);
          if ( sub_140222E10(v15, v16, *((_QWORD *)&v21 + 1), v22) == 1 )
          {
            sub_140EBCD50(&v21);
            *(_OWORD *)(a1 + 80) = v26;
            *(_OWORD *)(a1 + 64) = v25;
            v18 = v21;
            v19 = v22;
            v20 = v23;
            *(_OWORD *)(a1 + 48) = v24;
            *(_OWORD *)(a1 + 32) = v20;
            *(_OWORD *)(a1 + 16) = v19;
            *(_OWORD *)a1 = v18;
          }
          else
          {
            *(_QWORD *)(a1 + 8) = v17;
            *(_QWORD *)a1 = -1;
          }
          if ( v28 )
            sub_140001660(v27, v28, 1);
        }
      }
    }
  }
  else
  {
    *(_OWORD *)(a1 + 80) = v26;
    *(_OWORD *)(a1 + 64) = v25;
    v7 = v21;
    v8 = v22;
    v9 = v23;
    *(_OWORD *)(a1 + 48) = v24;
    *(_OWORD *)(a1 + 32) = v9;
    *(_OWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v7;
  }
  return a1;
}
