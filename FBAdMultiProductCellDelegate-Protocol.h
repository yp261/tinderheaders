//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdMultiProductCell;

@protocol FBAdMultiProductCellDelegate <NSObject>
- (void)multiProductCellClicked:(FBAdMultiProductCell *)arg1 withPosition:(struct CGPoint)arg2 inRect:(struct CGRect)arg3;
- (void)multiProductCellVisible:(FBAdMultiProductCell *)arg1;
- (void)multiProductCellLoaded:(FBAdMultiProductCell *)arg1;
@end

