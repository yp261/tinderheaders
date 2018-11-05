//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImagePickerController.h>

#import "TNDRURLNavigableProtocol-Protocol.h"

@class NSIndexPath, NSString, UICollectionViewCell, UICollectionViewLayoutAttributes, UITapGestureRecognizer;
@protocol UIViewControllerAnimatedTransitioning;

@interface TNDRImagePickerController : UIImagePickerController <TNDRURLNavigableProtocol>
{
    NSIndexPath *_indexPathForSelectedItem;
    UICollectionViewLayoutAttributes *_layoutAttributesForSelectedItem;
    UICollectionViewCell *_cellForSelectedItem;
    UITapGestureRecognizer *_tapGR;
    struct CGPoint _lastTouch;
}

+ (id)viewControllerNavigationKey;
@property(retain, nonatomic) UITapGestureRecognizer *tapGR; // @synthesize tapGR=_tapGR;
@property(nonatomic) struct CGPoint lastTouch; // @synthesize lastTouch=_lastTouch;
@property(readonly, nonatomic) UICollectionViewCell *cellForSelectedItem; // @synthesize cellForSelectedItem=_cellForSelectedItem;
@property(readonly, nonatomic) UICollectionViewLayoutAttributes *layoutAttributesForSelectedItem; // @synthesize layoutAttributesForSelectedItem=_layoutAttributesForSelectedItem;
@property(readonly, nonatomic) NSIndexPath *indexPathForSelectedItem; // @synthesize indexPathForSelectedItem=_indexPathForSelectedItem;
- (void).cxx_destruct;
- (void)detectTouchLocation:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setupOriginalNavigationBarBackButtonAppearance;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

