//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TNDRGoingOutBannerViewV2, UIButton;

@protocol TNDRGoingOutBannerViewDelegate <NSObject>
- (void)didTapSendButton:(UIButton *)arg1 generatedText:(NSString *)arg2;
- (void)didTapOnGoingOutBannerView:(TNDRGoingOutBannerViewV2 *)arg1 generatedText:(NSString *)arg2 shouldPopulateText:(_Bool)arg3;
@end

