//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSOperationQueue, UISwipeGestureRecognizer;

@interface _TtC6Tinder9CardStack : UIView
{
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: delegate
    // Error parsing type: , name: supportedDirections
    // Error parsing type: , name: currentIndex
    // Error parsing type: , name: cardCount.storage
    // Error parsing type: , name: cards.storage
    // Error parsing type: , name: animationQueue.storage
    // Error parsing type: , name: batchUpdates
    // Error parsing type: , name: batchVacantOffsets
    // Error parsing type: , name: currentSwipe
    // Error parsing type: , name: strayGestureRecognizer
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CATransform3D)nextCardInitialTransform;
- (void)sortSubviews;
- (void)rotateStackWithCompletion:(CDUnknownBlockType)arg1;
- (void)insertVisibleCardAt:(long long)arg1 withOffset:(long long)arg2 animated:(_Bool)arg3;
- (void)insertNextCardAt:(long long)arg1 animated:(_Bool)arg2;
- (void)insertCurrentCardAt:(long long)arg1 animated:(_Bool)arg2;
- (void)updateContentFor:(id)arg1 forUseAt:(long long)arg2;
- (id)cardViewAt:(long long)arg1;
- (id)makeCardViewAt:(long long)arg1;
- (_Bool)cardExistsAt:(long long)arg1;
- (id)currentContentView;
- (void)resetCurrentCardWithAnimated:(_Bool)arg1;
- (void)resetState;
- (void)loadCardsFrom:(long long)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) UISwipeGestureRecognizer *currentSwipe; // @synthesize currentSwipe;
@property(nonatomic, readonly) _Bool isAnimating;
@property(nonatomic, copy) NSArray *batchVacantOffsets; // @synthesize batchVacantOffsets;
@property(nonatomic, retain) NSOperationQueue *animationQueue;
@property(nonatomic) long long cardCount;
- (void)cancelAnimations;
- (void)resumeAnimations;
- (void)suspendAnimations;
- (id)makeAnimationQueue;
- (void)endUpdates;
- (void)removeCardAt:(long long)arg1;
- (void)insertCardAt:(long long)arg1;
- (void)beginUpdates;
- (void)notifyDelegatePostAnimation;

@end

