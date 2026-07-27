// module: codexmate_lib/core/relay/models
// addr: 0x140ae5ee0
// name: sub_140AE5EE0
// win 1.2.1 | module src/core/relay/models.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140AE5EE0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rbx
  __int64 v8; // rdi
  char *v9; // rcx
  unsigned int v10; // edx
  int v11; // r8d
  int v12; // r10d
  int v13; // edx
  unsigned __int8 v14; // r9
  __int64 v15; // rdi
  void *v16; // rax
  void *v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r15
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = sub_14033BC10(a2, a3);
  if ( !v5 )
  {
    nullsub_1(v6);
    v15 = 1;
    v17 = (void *)sub_140001650(30, 1);
    if ( !v17 )
      sub_1416C2D4B(1, 30);
    qmemcpy(v17, "relay model id cannot be empty", 30);
    a1[1] = 30;
    a1[2] = (__int64)v17;
    a1[3] = 30;
    goto LABEL_28;
  }
  v7 = (char *)v4;
  v8 = v5;
  if ( v5 < 0x20 )
  {
    if ( (unsigned __int64)sub_1414A3BD0(v4, v5) <= 0x100 )
      goto LABEL_4;
LABEL_22:
    v21[0] = &unk_1417B0628;
    v21[1] = sub_1414AC520;
    sub_14149C0F0(a1 + 1, &unk_1417B0630, v21);
    v15 = 1;
    goto LABEL_28;
  }
  if ( (unsigned __int64)sub_1414A35B0(v4, v5) > 0x100 )
    goto LABEL_22;
LABEL_4:
  v9 = v7;
  do
  {
    if ( v9 == &v7[v8] )
    {
      if ( v8 >= 0 )
      {
        nullsub_1(v9);
        v18 = 1;
        v19 = sub_140001650(v8, 1);
        if ( v19 )
        {
          v20 = v19;
          sub_141684120(v19, v7, v8);
          a1[1] = v8;
          a1[2] = v20;
          a1[3] = v8;
          v15 = 0;
          goto LABEL_28;
        }
      }
      else
      {
        v18 = 0;
      }
      sub_1416C2D4B(v18, v8);
    }
    v10 = (unsigned __int8)*v9;
    if ( *v9 < 0 )
    {
      v11 = v10 & 0x1F;
      v12 = v9[1] & 0x3F;
      if ( (unsigned __int8)v10 <= 0xDFu )
      {
        v9 += 2;
        v10 = v12 | (v11 << 6);
        if ( v10 < 0x20 )
          break;
      }
      else
      {
        v13 = (v12 << 6) | v9[2] & 0x3F;
        if ( (unsigned __int8)*v9 < 0xF0u )
        {
          v9 += 3;
          v10 = (v11 << 12) | v13;
          if ( v10 < 0x20 )
            break;
        }
        else
        {
          v14 = v9[3];
          v9 += 4;
          v10 = ((v11 & 7) << 18) | (v13 << 6) | v14 & 0x3F;
          if ( v10 < 0x20 )
            break;
        }
      }
    }
    else
    {
      ++v9;
      if ( v10 < 0x20 )
        break;
    }
  }
  while ( v10 - 127 >= 0x21 );
  nullsub_1(v9);
  v15 = 1;
  v16 = (void *)sub_140001650(42, 1);
  if ( !v16 )
    sub_1416C2D4B(1, 42);
  qmemcpy(v16, "relay model id contains control characters", 42);
  a1[1] = 42;
  a1[2] = (__int64)v16;
  a1[3] = 42;
LABEL_28:
  *a1 = v15;
}