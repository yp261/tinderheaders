//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, TNDRInstagramPhotoData, TNDRInstagramThumbnailCell, TNDRProfilePreviewViewController;

@interface TNDRInstagramProfileToPhotoViewerAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
    TNDRProfilePreviewViewController *_presenter;
    TNDRInstagramPhotoData *_photoData;
    TNDRInstagramThumbnailCell *_cellToTransition;
    struct CGPoint _contentOffset;
    struct CGSize _startingSize;
    struct CGPoint _centerPointOfStartAnimation;
}

@property(retain, nonatomic) TNDRInstagramThumbnailCell *cellToTransition; // @synthesize cellToTransition=_cellToTransition;
@property(nonatomic) struct CGPoint centerPointOfStartAnimation; // @synthesize centerPointOfStartAnimation=_centerPointOfStartAnimation;
@property(nonatomic) struct CGSize startingSize; // @synthesize startingSize=_startingSize;
@property(retain, nonatomic) TNDRInstagramPhotoData *photoData; // @synthesize photoData=_photoData;
@property(nonatomic) __weak TNDRProfilePreviewViewController *presenter; // @synthesize presenter=_presenter;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
- (void).cxx_destruct;
- (void)executeDismissalAnimation:(id)arg1;
- (void)executePresentationAnimation:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

