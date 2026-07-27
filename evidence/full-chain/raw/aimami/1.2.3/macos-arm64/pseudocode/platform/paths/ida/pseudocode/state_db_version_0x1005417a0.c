// __ZN13codexmate_lib8platform5paths10CodexPaths16state_db_version @ 0x1005417a0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::paths::CodexPaths::state_db_version::ha9566e9da440a76a(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  _BYTE *v6; // rdi
  int v7; // eax
  _BOOL8 v8; // rdx
  unsigned __int64 v9; // rsi
  _BYTE *v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // r8d
  __int64 v14; // r8
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // kr00_4
  unsigned int v18; // r10d
  bool v19; // cf
  int v20; // [rsp+0h] [rbp-20h] BYREF
  __int64 v21; // [rsp+8h] [rbp-18h]
  unsigned __int64 v22; // [rsp+10h] [rbp-10h]

  v2 = std::path::Path::file_name::hf6c2daad91e50ebf(a1, a2); /*0x1005417a9*/
  v4 = 0; /*0x1005417ae*/
  if ( v2 ) /*0x1005417b3*/
  {
    core::str::converts::from_utf8::hb32deb9559450f6e(&v20, v2, v3); /*0x1005417bc*/
    if ( v20 != 1 /*0x1005417f2*/
      && v22 >= 6
      && !(*(_DWORD *)v21 ^ 0x74617473 | *(unsigned __int16 *)(v21 + 4) ^ 0x5F65)
      && v22 - 6 >= 7 )
    {
      v6 = (_BYTE *)(v21 + 6); /*0x1005417ff*/
      if ( !(*(_DWORD *)(v21 + 6 + v22 - 13) ^ 0x6C71732E | *(_DWORD *)(v21 + 6 + v22 - 10) ^ 0x6574696C) ) /*0x100541815*/
      {
        if ( v22 == 13 ) /*0x10054181f*/
          return 0; /*0x100541836*/
        if ( v22 == 14 ) /*0x100541825*/
        {
          v7 = (unsigned __int8)*v6; /*0x100541827*/
          if ( v7 == 43 || v7 == 45 ) /*0x100541832*/
            return 0; /*0x100541832*/
        }
        else
        {
          LOBYTE(v7) = *v6; /*0x100541838*/
        }
        v8 = (_BYTE)v7 == 43; /*0x100541843*/
        v9 = v22 - 13 - v8; /*0x100541846*/
        v10 = &v6[v8]; /*0x100541849*/
        if ( v9 < 9 ) /*0x100541850*/
        {
          v4 = 1; /*0x100541852*/
          if ( !v9 ) /*0x10054185a*/
            return v4; /*0x10054185a*/
          v11 = 0; /*0x10054185e*/
          v12 = 0; /*0x100541860*/
          while ( 1 ) /*0x100541867*/
          {
            v13 = (unsigned __int8)v10[v11] - 48; /*0x100541867*/
            if ( v13 > 9 ) /*0x10054186f*/
              break; /*0x10054186f*/
            v12 = v13 + 10 * v12; /*0x100541874*/
            if ( v9 == ++v11 ) /*0x10054187e*/
              return v4; /*0x10054187e*/
          }
          return 0; /*0x10054186f*/
        }
        v14 = 0; /*0x100541887*/
        v15 = 0; /*0x100541890*/
        v4 = 0; /*0x100541892*/
        while ( v9 != v14 ) /*0x10054189a*/
        {
          v17 = v15; /*0x10054189e*/
          v16 = 10 * v15; /*0x10054189e*/
          if ( !is_mul_ok(0xAu, v17) ) /*0x10054189e*/
            return 0; /*0x10054189e*/
          v18 = (unsigned __int8)v10[v14] - 48; /*0x1005418a8*/
          v19 = __CFADD__(v18, v16); /*0x1005418ac*/
          v15 = v18 + v16; /*0x1005418ac*/
          if ( v18 > 9 ) /*0x1005418b6*/
            return 0; /*0x1005418b6*/
          ++v14; /*0x1005418bc*/
          if ( v19 ) /*0x1005418c1*/
            return v4; /*0x1005418c1*/
        }
        return 1; /*0x1005418c8*/
      }
    }
  }
  return v4; /*0x1005417f8*/
}