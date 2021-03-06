//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class AKFActionController, AKFAppEventsLogger, NSArray, NSMutableArray, NSString;
@protocol AKFLoginController, AKFUIManager, AKFViewControllerDelegate;

@interface AKFNavigationController : UINavigationController
{
    AKFActionController *_actionController;
    AKFAppEventsLogger *_appEventsLogger;
    NSMutableArray *_blocks;
    id <AKFLoginController> _loginController;
    _Bool _enableSendToFacebook;
    id <AKFUIManager> _uiManager;
    id <AKFViewControllerDelegate> _delegate;
    NSArray *_blacklistedCountryCodes;
    NSString *_defaultCountryCode;
    NSArray *_whitelistedCountryCodes;
}

@property(copy, nonatomic) NSArray *whitelistedCountryCodes; // @synthesize whitelistedCountryCodes=_whitelistedCountryCodes;
@property(nonatomic) _Bool enableSendToFacebook; // @synthesize enableSendToFacebook=_enableSendToFacebook;
@property(copy, nonatomic) NSString *defaultCountryCode; // @synthesize defaultCountryCode=_defaultCountryCode;
@property(copy, nonatomic) NSArray *blacklistedCountryCodes; // @synthesize blacklistedCountryCodes=_blacklistedCountryCodes;
@property(nonatomic) __weak id <AKFViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyDelegateUsingBlock:(CDUnknownBlockType)arg1 fallbackBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateViewControllers:(id)arg1 conformingToProtocol:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateAllViewControllersConformingToProtocol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_cancel:(id)arg1;
- (void)_back;
- (void)_applyConfiguringToViewViewController:(id)arg1;
- (void)_applyUIManager:(id)arg1 toViewController:(id)arg2;
- (void)_applyUIManager:(id)arg1;
- (void)performBlockAfterPresented:(CDUnknownBlockType)arg1;
- (void)failWithError:(id)arg1 errorViewController:(id)arg2 removeViewControllersTo:(Class)arg3;
- (void)enumerateViewControllersConformingToProtocol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)completeWithAccessToken:(id)arg1 state:(id)arg2;
- (void)completeWithAuthorizationCode:(id)arg1 state:(id)arg2;
- (unsigned long long)indexOfChildViewControllerOfClass:(Class)arg1;
- (id)childViewControllerOfClass:(Class)arg1;
- (void)cancel;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (id)childViewControllerForStatusBarStyle;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)addChildViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setTheme:(id)arg1;
- (void)setAdvancedUIManager:(id)arg1;
- (id)theme;
@property(readonly, nonatomic) unsigned long long loginType;
@property(retain, nonatomic) id <AKFUIManager> uiManager; // @synthesize uiManager=_uiManager;
- (id)initWithRootViewController:(id)arg1 loginController:(id)arg2 appEventsLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

