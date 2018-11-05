//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdMultiProductCellDelegate-Protocol.h"
#import "FBAdScrollViewDelegate-Protocol.h"
#import "FBAdUpdatableView-Protocol.h"

@class FBAdScrollView, NSArray, NSString;
@protocol FBAdMultiProductViewDelegate;

@interface FBAdMultiProductView : UIView <FBAdMultiProductCellDelegate, FBAdScrollViewDelegate, FBAdUpdatableView>
{
    _Bool _loadedWasCalled;
    id <FBAdMultiProductViewDelegate> _delegate;
    NSArray *_multiProductAds;
    FBAdScrollView *_scrollView;
    CDUnknownBlockType _impressionBlock;
    CDUnknownBlockType _clickBlock;
}

@property(nonatomic) _Bool loadedWasCalled; // @synthesize loadedWasCalled=_loadedWasCalled;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(copy, nonatomic) CDUnknownBlockType impressionBlock; // @synthesize impressionBlock=_impressionBlock;
@property(nonatomic) __weak FBAdScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSArray *multiProductAds; // @synthesize multiProductAds=_multiProductAds;
@property(nonatomic) __weak id <FBAdMultiProductViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)multiProductCellClicked:(id)arg1 withPosition:(struct CGPoint)arg2 inRect:(struct CGRect)arg3;
- (void)multiProductCellVisible:(id)arg1;
- (void)multiProductCellLoaded:(id)arg1;
- (void)updateView:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setMultiProductAds:(id)arg1 withImpressionHandler:(CDUnknownBlockType)arg2 withClickHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
