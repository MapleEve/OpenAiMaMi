// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_usage_analytics node 0x1004d5860 depth=1
_UNKNOWN **__fastcall codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557(_BYTE **a1)
{
  __int64 v1; // rax
  _UNKNOWN **result; // rax
  __int16 v3; // [rsp+0h] [rbp-Ch] BYREF
  char v4; // [rsp+2h] [rbp-Ah]
  char v5; // [rsp+3h] [rbp-9h]

  v5 = HIBYTE(v1); /*0x1004d5865*/
  v3 = 511; /*0x1004d5869*/
  v4 = 1; /*0x1004d586f*/
  result = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v3, a1[25], a1[26]); /*0x1004d5885*/
  if ( !result ) /*0x1004d588d*/
  {
    v3 = 511; /*0x1004d5896*/
    v4 = 1; /*0x1004d589c*/
    result = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v3, a1[31], a1[32]); /*0x1004d58b2*/
    if ( !result ) /*0x1004d58ba*/
    {
      v3 = 511; /*0x1004d58bc*/
      v4 = 1; /*0x1004d58c2*/
      result = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v3, a1[34], a1[35]); /*0x1004d58d8*/
      if ( !result ) /*0x1004d58e0*/
      {
        v3 = 511; /*0x1004d58e2*/
        v4 = 1; /*0x1004d58e8*/
        result = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v3, a1[37], a1[38]); /*0x1004d58fe*/
        if ( !result ) /*0x1004d5906*/
        {
          v3 = 511; /*0x1004d5908*/
          v4 = 1; /*0x1004d590e*/
          result = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v3, a1[43], a1[44]); /*0x1004d5924*/
          if ( !result ) /*0x1004d592c*/
          {
            v3 = 511; /*0x1004d5932*/
            v4 = 1; /*0x1004d5938*/
            result = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v3, a1[46], a1[47]); /*0x1004d594e*/
            if ( !result ) /*0x1004d5956*/
            {
              v3 = 511; /*0x1004d595c*/
              v4 = 1; /*0x1004d5962*/
              result = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v3, a1[85], a1[86]); /*0x1004d5978*/
              if ( !result ) /*0x1004d5980*/
              {
                v3 = 511; /*0x1004d5986*/
                v4 = 1; /*0x1004d598c*/
                result = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v3, a1[88], a1[89]); /*0x1004d59a2*/
                if ( !result ) /*0x1004d59aa*/
                {
                  v3 = 511; /*0x1004d59b0*/
                  v4 = 1; /*0x1004d59b6*/
                  return std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v3, a1[73], a1[74]); /*0x1004d59cc*/
                }
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x1004d5893*/
}