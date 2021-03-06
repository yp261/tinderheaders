//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, UIViewController;
@protocol TNDRURLNavigableProtocol, UIViewControllerAnimatedTransitioning;

@protocol TNDRURLNavigableProtocol <NSObject>
+ (NSString *)viewControllerNavigationKey;

@optional
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController;
- (NSArray *)containedViewControllers;
- (void)transitionTo:(NSString *)arg1 viewController:(UIViewController<TNDRURLNavigableProtocol> *)arg2 optionsDict:(NSDictionary *)arg3 animated:(_Bool)arg4 completion:(void (^)(void))arg5;
@end

