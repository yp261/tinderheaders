//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, _TtC6Tinder18ChatViewController;
@protocol _TtP6Tinder24ChatBridgingPeekDelegate_;

@interface _TtC6Tinder10ChatBridge : NSObject
{
    // Error parsing type: , name: context
    // Error parsing type: , name: viewController
    // Error parsing type: , name: isForPeek
    // Error parsing type: , name: pushType
    // Error parsing type: , name: peekDelegate
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)previewItemsForAnalytics;
- (void)prepareViewControllerForPop;
- (id)createViewController;
- (id)initWith:(id)arg1 userID:(id)arg2 pushType:(id)arg3 forPeek:(_Bool)arg4 peekDelegate:(id)arg5;
@property(nonatomic) __weak id <_TtP6Tinder24ChatBridgingPeekDelegate_> peekDelegate; // @synthesize peekDelegate;
@property(nonatomic, retain) NSNumber *pushType; // @synthesize pushType;
@property(nonatomic) _Bool isForPeek; // @synthesize isForPeek;
@property(nonatomic, readonly) NSArray *panGestures;
@property(nonatomic, retain) _TtC6Tinder18ChatViewController *viewController; // @synthesize viewController;

@end
