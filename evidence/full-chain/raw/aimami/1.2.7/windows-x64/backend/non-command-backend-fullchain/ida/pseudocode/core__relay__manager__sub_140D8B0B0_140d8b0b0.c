// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d8b0b0 | name sub_140D8B0B0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D8B0B0(int a1, __int64 a2, int a3)
{
  unsigned int v4; // esi
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v11; // [rsp+28h] [rbp-80h] BYREF
  __int64 v12; // [rsp+30h] [rbp-78h]
  __int64 v13; // [rsp+38h] [rbp-70h]

  v4 = a2;
  sub_1410261E0(&v11, a2);
  if ( v11 != -1 || (_BYTE)v12 )
  {
    if ( (_DWORD)v11 != -1 )
      sub_140D1BEA0(&v11);
    return 0;
  }
  else
  {
    sub_140D8FC20((unsigned int)&v11, a1, v4, a3, 0);
    v6 = v12;
    LOBYTE(v4) = v13 == 0;
    if ( v13 )
    {
      v7 = 32 * v13;
      v8 = 0;
      do
      {
        v9 = *(_QWORD *)(v6 + v8);
        if ( v9 )
          sub_140001660(*(_QWORD *)(v6 + v8 + 8), v9, 1);
        v8 += 32;
      }
      while ( v7 != v8 );
    }
    if ( v11 )
      sub_140001660(v6, 32 * v11, 8);
  }
  return v4;
}
