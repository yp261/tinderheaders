//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface TNDRInstagramShareContainerView : UIView
{
    UILabel *_shareLabel;
    UIButton *_connectButton;
}

@property(retain, nonatomic) UIButton *connectButton; // @synthesize connectButton=_connectButton;
@property(retain, nonatomic) UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) double buttonHeight;
@property(readonly, nonatomic) double connectButtonWidth;
@property(readonly, nonatomic) NSString *connectText;
@property(readonly, nonatomic) NSString *shareText;
- (void)setupHorizontalAlignmentConstraints;
- (void)setupConstraints;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

