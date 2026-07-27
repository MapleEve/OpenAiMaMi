// module: codexmate_lib/core/voice/workspace
// addr: 0x1407a0ee0
// name: sub_1407A0EE0
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1407A0EE0(_QWORD *a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rdx
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // r14
  _QWORD *v11; // r15
  __int64 result; // rax
  __int64 v13; // rbx
  __int64 v14; // r14
  _QWORD *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // r14
  _QWORD *v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rbx
  _QWORD *v21; // rbx
  _QWORD *v22; // rbx
  _QWORD *v23; // rbx
  _QWORD *v24; // rdi
  _QWORD *v25; // rsi
  unsigned __int64 v26; // [rsp+28h] [rbp-18h]
  char v27; // [rsp+37h] [rbp-9h] BYREF
  _QWORD v28[7]; // [rsp+38h] [rbp-8h] BYREF

  v28[1] = -2;
  v1 = a1[1];
  v2 = a1[2];
  v28[0] = &v27;
  if ( v2 >= 2 )
  {
    if ( v2 >= 0x15 )
    {
      v21 = a1;
      result = sub_140B59A80(v1, v2, v28);
      a1 = v21;
    }
    else
    {
      v9 = 112 * v2;
      v10 = 112;
      do
      {
        v11 = a1;
        result = sub_140551A70(v1, v1 + v10);
        a1 = v11;
        v10 += 112;
      }
      while ( v9 != v10 );
    }
  }
  v3 = a1[4];
  v4 = a1[5];
  v28[0] = &v27;
  if ( v4 >= 2 )
  {
    if ( v4 >= 0x15 )
    {
      v22 = a1;
      result = sub_140B59C20(v3, v4, v28);
      a1 = v22;
    }
    else
    {
      v13 = 160 * v4;
      v14 = 160;
      do
      {
        v15 = a1;
        result = sub_140551C20(v3, v3 + v14);
        a1 = v15;
        v14 += 160;
      }
      while ( v13 != v14 );
    }
  }
  v5 = a1[7];
  v6 = a1[8];
  v28[0] = &v27;
  if ( v6 >= 2 )
  {
    if ( v6 >= 0x15 )
    {
      v23 = a1;
      result = sub_140B59EC0(v5, v6, v28);
      a1 = v23;
    }
    else
    {
      v16 = 72 * v6;
      v17 = 72;
      do
      {
        v18 = a1;
        result = sub_140551DF0(v5, v5 + v17);
        a1 = v18;
        v17 += 72;
      }
      while ( v16 != v17 );
    }
  }
  v7 = a1[10];
  v8 = a1[11];
  v28[0] = &v27;
  if ( v8 >= 2 )
  {
    if ( v8 > 0x14 )
    {
      v24 = a1;
      result = sub_140B597E0(v7, v8, v28);
      if ( v8 >= 0x28 )
      {
        v26 = v8 - 40;
        v25 = (_QWORD *)(v7 + 17600);
        v24[11] = 40;
        while ( v26 )
        {
          --v26;
          result = sub_1402C61B0(v25);
          v25 += 55;
        }
      }
    }
    else
    {
      v19 = 440 * v8;
      v20 = 440;
      do
      {
        result = sub_140551900(v7, v7 + v20);
        v20 += 440;
      }
      while ( v19 != v20 );
    }
  }
  return result;
}