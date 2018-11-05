//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTAuthViewDelegate-Protocol.h"
#import "TNDRURLNavigableProtocol-Protocol.h"

@class NSString, SPTAuthViewController, TNDRSpotifyAuthenticator, TNDRToSpotifyLoginAnimationController, TNDRURLManager, UIView;
@protocol TNDRURLNavigableProtocol;

@interface TNDRSpotifyLoginViewController : UIViewController <SPTAuthViewDelegate, TNDRURLNavigableProtocol>
{
    SPTAuthViewController *_authController;
    UIViewController<TNDRURLNavigableProtocol> *_whoPresentedMe;
    UIView *_lightBoxView;
    TNDRToSpotifyLoginAnimationController *_animationController;
}

+ (id)viewControllerNavigationKey;
@property(retain, nonatomic) TNDRToSpotifyLoginAnimationController *animationController; // @synthesize animationController=_animationController;
@property(retain, nonatomic) UIView *lightBoxView; // @synthesize lightBoxView=_lightBoxView;
@property(retain, nonatomic) UIViewController<TNDRURLNavigableProtocol> *whoPresentedMe; // @synthesize whoPresentedMe=_whoPresentedMe;
@property(readonly, nonatomic) SPTAuthViewController *authController; // @synthesize authController=_authController;
- (void).cxx_destruct;
- (void)navigateBack;
- (void)authenticationViewControllerDidCancelLogin:(id)arg1;
- (void)authenticationViewController:(id)arg1 didFailToLogin:(id)arg2;
- (void)authenticationViewController:(id)arg1 didLoginWithSession:(id)arg2;
- (void)addViewController:(id)arg1 inViewController:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSPTAuth:(id)arg1;
@property(readonly, nonatomic) TNDRURLManager *sharedURLManager;
@property(readonly, nonatomic) TNDRSpotifyAuthenticator *spotifyAuthenticator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

