// __ZN13codexmate_lib8platform5paths10CodexPaths18ensure_directories @ 0x1005418e0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int16 v3; // [rsp+0h] [rbp-Ch] BYREF
  char v4; // [rsp+2h] [rbp-Ah]
  char v5; // [rsp+3h] [rbp-9h]

  v5 = HIBYTE(v1); /*0x1005418e5*/
  v3 = 511; /*0x1005418e9*/
  v4 = 1; /*0x1005418ef*/
  result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[25], a1[26]); /*0x100541905*/
  if ( !result ) /*0x10054190d*/
  {
    v3 = 511; /*0x100541916*/
    v4 = 1; /*0x10054191c*/
    result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[31], a1[32]); /*0x100541932*/
    if ( !result ) /*0x10054193a*/
    {
      v3 = 511; /*0x10054193c*/
      v4 = 1; /*0x100541942*/
      result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[34], a1[35]); /*0x100541958*/
      if ( !result ) /*0x100541960*/
      {
        v3 = 511; /*0x100541962*/
        v4 = 1; /*0x100541968*/
        result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[37], a1[38]); /*0x10054197e*/
        if ( !result ) /*0x100541986*/
        {
          v3 = 511; /*0x100541988*/
          v4 = 1; /*0x10054198e*/
          result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[43], a1[44]); /*0x1005419a4*/
          if ( !result ) /*0x1005419ac*/
          {
            v3 = 511; /*0x1005419b2*/
            v4 = 1; /*0x1005419b8*/
            result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[46], a1[47]); /*0x1005419ce*/
            if ( !result ) /*0x1005419d6*/
            {
              v3 = 511; /*0x1005419dc*/
              v4 = 1; /*0x1005419e2*/
              result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[85], a1[86]); /*0x1005419f8*/
              if ( !result ) /*0x100541a00*/
              {
                v3 = 511; /*0x100541a06*/
                v4 = 1; /*0x100541a0c*/
                result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[88], a1[89]); /*0x100541a22*/
                if ( !result ) /*0x100541a2a*/
                {
                  v3 = 511; /*0x100541a30*/
                  v4 = 1; /*0x100541a36*/
                  return std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[73], a1[74]); /*0x100541a4c*/
                }
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x100541913*/
}