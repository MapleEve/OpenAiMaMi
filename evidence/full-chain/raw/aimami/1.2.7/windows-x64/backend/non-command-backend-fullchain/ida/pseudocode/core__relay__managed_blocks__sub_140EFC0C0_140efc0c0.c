// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140efc0c0 | name sub_140EFC0C0
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EFC0C0(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v10; // rax
  char v11; // r8
  char v12; // r9
  __int64 v13; // [rsp+28h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-50h]
  __int64 v15; // [rsp+38h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h]
  __int64 v18; // [rsp+58h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h]
  __int64 v21; // [rsp+70h] [rbp-10h]
  __int64 v22; // [rsp+78h] [rbp-8h] BYREF
  __int64 v23; // [rsp+80h] [rbp+0h]
  unsigned __int64 v24; // [rsp+88h] [rbp+8h]
  __int64 v25; // [rsp+90h] [rbp+10h]
  __int64 v26; // [rsp+98h] [rbp+18h]
  __int64 v27; // [rsp+A0h] [rbp+20h]

  v27 = -2;
  sub_140EFC2F0(&v22, a3, a4);
  sub_1416828D0((unsigned int)&v13, a1, a2, (unsigned int)&unk_141A6F681, 25);
  v25 = v14;
  sub_1416AB5A0(&v19, v14, v15);
  v26 = v20;
  sub_140EFC2F0(&v16, v20, v21);
  if ( v19 > 0 )
    sub_140001660(v26, v19, 1);
  if ( v13 )
    sub_140001660(v25, v13, 1);
  v7 = v23;
  v8 = v17;
  if ( v24 == v18 )
  {
    if ( v24 <= 0xF )
    {
      v10 = 0;
      do
      {
        LOBYTE(v4) = v24 == v10;
        if ( v24 == v10 )
          break;
        v11 = *(_BYTE *)(v23 + v10) | (32 * ((unsigned __int8)(*(_BYTE *)(v23 + v10) - 65) < 0x1Au));
        v12 = *(_BYTE *)(v17 + v10) | (32 * ((unsigned __int8)(*(_BYTE *)(v17 + v10) - 65) < 0x1Au));
        ++v10;
      }
      while ( v11 == v12 );
    }
    else
    {
      v4 = sub_140E939A0(v23, v24, v17, v24);
    }
  }
  else
  {
    v4 = 0;
  }
  if ( v16 )
    sub_140001660(v8, v16, 1);
  if ( v22 )
    sub_140001660(v7, v22, 1);
  return v4;
}
