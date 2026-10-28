# Coway XSF Demo – AquaPure-X1 제어 펌웨어 (가상)

3DEXPERIENCE **Connected Software Engineer (XSF)** 데모용 가상 프로젝트입니다. 실제 코웨이 제품 · 소스와 무관합니다.

```
Coway_XSF/
├ firmware/          ← 소스  → XSF "Software Logical Item"
│  ├ include/        config.h · sensors.h · filter.h · controller.h
│  ├ src/            main.c · sensors.c · filter.c · controller.c
│  └ Makefile
├ release/           ← 빌드 결과물 → XSF "Physical Product" (SW BOM)
│  └ v1.0.0/         AquaPure_X1_FW_v1.0.0.hex · .bin · checksum.sha256 · release_note.md
├ docs/SW_BOM.md     ← SW BOM 정리
└ VERSION
```

빌드: `cd firmware && make release` (gcc · make 필요)
