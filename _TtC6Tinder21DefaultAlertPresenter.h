//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TNDRAlertContext, UIViewController, UIWindow;

@interface _TtC6Tinder21DefaultAlertPresenter : NSObject
{
    // Error parsing type: , name: alertWindow
    // Error parsing type: , name: rootVC
    // Error parsing type: , name: alertStack
    // Error parsing type: , name: currentAlertContext
}

- (CDUnknownBlockType).cxx_destruct;
- (id)alertControllerForContext:(id)arg1;
- (id)init;
@property(nonatomic, retain) TNDRAlertContext *currentAlertContext; // @synthesize currentAlertContext;
@property(nonatomic, copy) NSArray *alertStack; // @synthesize alertStack;
@property(nonatomic, readonly) UIViewController *rootVC; // @synthesize rootVC;
@property(nonatomic, readonly) UIWindow *alertWindow; // @synthesize alertWindow;

@end

