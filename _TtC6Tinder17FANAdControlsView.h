//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel, UIScrollView, _TtC6Tinder19FANAdCarouselButton;

@interface _TtC6Tinder17FANAdControlsView : UIView
{
    // Error parsing type: , name: itemLabel
    // Error parsing type: , name: leftArrowButton
    // Error parsing type: , name: leftArrowButtonWidthConstraint
    // Error parsing type: , name: rightArrowButton
    // Error parsing type: , name: rightArrowButtonWidthConstraint
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: currentPage
    // Error parsing type: , name: furthestPageSeen
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)scrollToPageWithPage:(long long)arg1 animated:(_Bool)arg2;
- (void)rightArrowTapped:(id)arg1;
- (void)leftArrowTapped:(id)arg1;
- (void)hideButtons;
- (void)updateItem;
@property(nonatomic, readonly) long long numberOfPages;
@property(nonatomic) long long furthestPageSeen; // @synthesize furthestPageSeen;
@property(nonatomic) long long currentPage; // @synthesize currentPage;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) __weak NSLayoutConstraint *rightArrowButtonWidthConstraint; // @synthesize rightArrowButtonWidthConstraint;
@property(nonatomic) __weak _TtC6Tinder19FANAdCarouselButton *rightArrowButton; // @synthesize rightArrowButton;
@property(nonatomic) __weak NSLayoutConstraint *leftArrowButtonWidthConstraint; // @synthesize leftArrowButtonWidthConstraint;
@property(nonatomic) __weak _TtC6Tinder19FANAdCarouselButton *leftArrowButton; // @synthesize leftArrowButton;
@property(nonatomic) __weak UILabel *itemLabel; // @synthesize itemLabel;

@end

