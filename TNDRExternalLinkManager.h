//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIWindow;

@interface TNDRExternalLinkManager : NSObject
{
    _Bool _requiresSpecialWindowForActionSheet;
    UIWindow *_windowAboveKeyboard;
}

+ (_Bool)isSupportedInstagramLink:(id)arg1;
+ (_Bool)isScheme:(id)arg1 inSupportedSchemes:(id)arg2;
+ (_Bool)isSupportedWebSchemeForURL:(id)arg1;
+ (_Bool)isSupportedSchemeForURL:(id)arg1;
+ (_Bool)supportsSafariViewController;
+ (_Bool)canOpenURLInSVC:(id)arg1;
+ (id)addressStringFromComponents:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) UIWindow *windowAboveKeyboard; // @synthesize windowAboveKeyboard=_windowAboveKeyboard;
@property(nonatomic) _Bool requiresSpecialWindowForActionSheet; // @synthesize requiresSpecialWindowForActionSheet=_requiresSpecialWindowForActionSheet;
- (void).cxx_destruct;
- (void)openExternalUrlWithChrome:(id)arg1 withCallbackUrl:(id)arg2;
- (_Bool)openExternalURL:(id)arg1;
- (void)cleanupExtraWindow;
- (void)didSelectToOpenInstagramWithUser:(id)arg1 shownFrom:(id)arg2;
- (void)openSafariViewControllerWithURL:(id)arg1 fromViewController:(id)arg2;
- (void)didSelectLinkWithURL:(id)arg1 withTitle:(id)arg2 shownInView:(id)arg3 completionForSVC:(CDUnknownBlockType)arg4;
- (void)didSelectLinkWithURL:(id)arg1 withTitle:(id)arg2 shownInView:(id)arg3;
- (void)didSelectLinkWithURL:(id)arg1 shownInView:(id)arg2;
- (void)openLinkInGoogleChrome:(id)arg1;
- (void)didSelectLinkWithPhoneNumber:(id)arg1 shownInView:(id)arg2;
- (void)didSelectLinkWithAddress:(id)arg1 shownInView:(id)arg2;
- (_Bool)userHasGoogleChromeInstalled;
- (id)addressStringFromComponents:(id)arg1;
- (void)openAppleMapsWithAddress:(id)arg1;
- (void)openWazeMapsWithAddress:(id)arg1;
- (void)openGoogleMapsWithAddress:(id)arg1;
- (_Bool)userHasWazeMapsInstalled;
- (_Bool)userHasGoogleMapsInstalled;
- (id)actionItemsForAddress:(id)arg1;
- (void)setup;

@end

