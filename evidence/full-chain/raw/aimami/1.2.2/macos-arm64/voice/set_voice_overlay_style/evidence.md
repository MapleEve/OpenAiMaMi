# evidence — set_voice_overlay_style (mac 1.2.2) NEW delta

## Confirmed
- owner 0x10049bea0; call-tree depth=8 节点=38(真实decompile, 截断守卫)。
- 关键字符串: `
           `, `
               `, ` /*0x10049bf1c*/
           `, `;
  v16[1] = 20; /*0x10049bf23*/
  v16[2] = `, `capacity overflowLayoutError`, `codexmate_lib::core::voice::workspaceimage_url`, `resolver consumedinvalid IPC request URL`, `src/core/voice/workspace.rs`
- 副作用: `Command`, `File`, `emit`, `reqwest`, `serde_json`, `std::fs`

## Inferred
- 设置语音 overlay 样式。
- 

## Delta
- 1.1.8→1.2.2 新增命令。
