#ifndef AppDefine_h
#define AppDefine_h

// 是否是iPhone X
#define kIPHONEX ((kScreenW == 375.0f) && (kScreenH == 812.0f)) ? YES : NO
#define kDevice_Is_iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
// iPhone X底部的返回按钮高度
#define kIPHONEXBOTTOM ((kIPHONEX) ? 34.0 : 0.0)
// iPhone X导航栏高度
#define kIPHONEXNAVHEIGHT ((kIPHONEX) ? 88.0f : 64.0f)
// iPhone X状态栏高度
#define kIPHONEXSTAUSHEIGHT ((kIPHONEX) ? 44.0f : 20.0f)

#endif
