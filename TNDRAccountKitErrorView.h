//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TNDRAccountKitErrorView : UIView
{
    UILabel *_errorMessageLabel;
    double _intrinsicHeight;
}

@property(nonatomic) double intrinsicHeight; // @synthesize intrinsicHeight=_intrinsicHeight;
@property(retain, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateErrorMessage:(id)arg1;
- (void)layoutSubviews;
- (void)addSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

