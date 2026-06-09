# relay 模块测试边界

- 测试用户可见文案时读取 locale JSON 或 locale helper。
- 状态架构验收必须覆盖 stale、delayed、failure、concurrency、cancel 和 event replay。
- 无证据业务不得通过 mock 编造成真实实现。

## relay cache 竞态验证

- `npm run validate:frontend-relay-cache` 不依赖测试框架，直接验证 relay cache 与 mutation 的竞态合同。
- 该验证会检查 mutation payload 是否先写权威 cache，再做已知 query 扇出或失效；同时模拟 stale、delayed、event replay 的旧响应，确认它们不能覆盖已接受的 mutation 结果。
