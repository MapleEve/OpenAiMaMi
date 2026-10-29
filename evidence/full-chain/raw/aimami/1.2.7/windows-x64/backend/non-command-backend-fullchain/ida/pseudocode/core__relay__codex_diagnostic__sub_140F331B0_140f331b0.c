// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140f331b0 | name sub_140F331B0
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F331B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __m256i v10; // [rsp+28h] [rbp-58h] BYREF
  __m256i v11; // [rsp+48h] [rbp-38h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+70h] [rbp-10h]
  __int64 v14; // [rsp+78h] [rbp-8h]

  v14 = -2;
  v11.m256i_i64[0] = a1;
  v11.m256i_i64[1] = a2;
  *(_OWORD *)&v11.m256i_u64[2] = 0;
  v12 = a1;
  v13 = a2;
  sub_14062D280(&v10, &v11);
  if ( v10.m256i_i8[0] == -1 )
  {
    sub_14002F910(&v10.m256i_u64[1]);
    LOBYTE(v2) = 2;
  }
  else
  {
    v11 = v10;
    v3 = sub_1416419F0(aType_12, 4, &v11);
    LOBYTE(v2) = 2;
    if ( v3
      && *(_BYTE *)v3 == 3
      && *(_QWORD *)(v3 + 24) == 12
      && !(**(_QWORD **)(v3 + 16) ^ 0x5F6E6F6973736573LL | *(unsigned int *)(*(_QWORD *)(v3 + 16) + 8LL) ^ 0x6174656DLL) )
    {
      v5 = sub_141642800(&v11, aPayloadBaseIns_0, 31);
      v2 = 1;
      if ( v5 && *(_BYTE *)v5 == 3 )
      {
        v2 = *(_QWORD *)(v5 + 16);
        v6 = *(_QWORD *)(v5 + 24);
      }
      else
      {
        v6 = 0;
      }
      sub_140E91160(v2, v6);
      if ( v7 )
      {
        v8 = sub_140E91B30(v2, v6);
        LOBYTE(v2) = 2;
        if ( v9 >= 0x2F )
          LOBYTE(v2) = 2 - ((unsigned int)sub_1418F4B70(&unk_141A60627, v8) == 0);
      }
      else
      {
        LODWORD(v2) = 0;
      }
    }
    sub_14002F9D0(&v11);
  }
  return (unsigned int)v2;
}
