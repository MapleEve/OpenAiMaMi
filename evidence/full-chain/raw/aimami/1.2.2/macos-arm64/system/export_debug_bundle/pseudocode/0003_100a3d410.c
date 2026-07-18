// mac 1.2.2 NEW export_debug_bundle 0x100a3d410 d=1
__int64 __fastcall codexmate_lib::platform::paths::CodexPaths::ensure_directories::ha5d7c5d48ce19d43(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int16 v3; // [rsp+0h] [rbp-Ch] BYREF
  char v4; // [rsp+2h] [rbp-Ah]
  char v5; // [rsp+3h] [rbp-9h]

  v5 = HIBYTE(v1); /*0x100a3d415*/
  v3 = 511; /*0x100a3d419*/
  v4 = 1; /*0x100a3d41f*/
  result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[25]); /*0x100a3d435*/
  if ( !result ) /*0x100a3d43d*/
  {
    v3 = 511; /*0x100a3d446*/
    v4 = 1; /*0x100a3d44c*/
    result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[31]); /*0x100a3d462*/
    if ( !result ) /*0x100a3d46a*/
    {
      v3 = 511; /*0x100a3d46c*/
      v4 = 1; /*0x100a3d472*/
      result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[34]); /*0x100a3d488*/
      if ( !result ) /*0x100a3d490*/
      {
        v3 = 511; /*0x100a3d492*/
        v4 = 1; /*0x100a3d498*/
        result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[37]); /*0x100a3d4ae*/
        if ( !result ) /*0x100a3d4b6*/
        {
          v3 = 511; /*0x100a3d4b8*/
          v4 = 1; /*0x100a3d4be*/
          result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[43]); /*0x100a3d4d4*/
          if ( !result ) /*0x100a3d4dc*/
          {
            v3 = 511; /*0x100a3d4e2*/
            v4 = 1; /*0x100a3d4e8*/
            result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[46]); /*0x100a3d4fe*/
            if ( !result ) /*0x100a3d506*/
            {
              v3 = 511; /*0x100a3d50c*/
              v4 = 1; /*0x100a3d512*/
              result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[85]); /*0x100a3d528*/
              if ( !result ) /*0x100a3d530*/
              {
                v3 = 511; /*0x100a3d536*/
                v4 = 1; /*0x100a3d53c*/
                result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[88]); /*0x100a3d552*/
                if ( !result ) /*0x100a3d55a*/
                {
                  v3 = 511; /*0x100a3d560*/
                  v4 = 1; /*0x100a3d566*/
                  return std::fs::DirBuilder::_create::h099c6e2853c95452(&v3, a1[73]); /*0x100a3d57c*/
                }
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x100a3d443*/
}