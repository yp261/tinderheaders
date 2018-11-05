//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class FLAnimatedImageView, NSIndexPath, NSString, TNDRSlackChatViewController, UIImageView;

@interface TNDRGIFPreviewViewerAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
    FLAnimatedImageView *_animatedImageView;
    NSIndexPath *_indexPathOfGIFSelected;
    FLAnimatedImageView *_movingImageView;
    TNDRSlackChatViewController *_chatViewController;
    UIImageView *_leftBubbleWithTailImageView;
    UIImageView *_rightBubbleWithTailImageView;
    double _yOffsetPosition;
    struct CGRect _previewFrame;
}

@property(nonatomic) double yOffsetPosition; // @synthesize yOffsetPosition=_yOffsetPosition;
@property(retain, nonatomic) UIImageView *rightBubbleWithTailImageView; // @synthesize rightBubbleWithTailImageView=_rightBubbleWithTailImageView;
@property(retain, nonatomic) UIImageView *leftBubbleWithTailImageView; // @synthesize leftBubbleWithTailImageView=_leftBubbleWithTailImageView;
@property(retain, nonatomic) TNDRSlackChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
@property(nonatomic) struct CGRect previewFrame; // @synthesize previewFrame=_previewFrame;
@property(retain, nonatomic) FLAnimatedImageView *movingImageView; // @synthesize movingImageView=_movingImageView;
@property(retain, nonatomic) NSIndexPath *indexPathOfGIFSelected; // @synthesize indexPathOfGIFSelected=_indexPathOfGIFSelected;
@property(retain, nonatomic) FLAnimatedImageView *animatedImageView; // @synthesize animatedImageView=_animatedImageView;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void).cxx_destruct;
- (void)extractAndCacheYOffsetFromCollectionView:(id)arg1;
- (void)setupMaskImageViews;
- (id)maskForCell:(id)arg1;
- (void)handleDismissal:(id)arg1;
- (void)handlePresentation:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
