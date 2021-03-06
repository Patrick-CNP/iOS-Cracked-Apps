//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSGStockDataParam;

@interface CSGBaseConverter : NSObject
{
    CSGStockDataParam *_stockParam;
}

@property(readonly, nonatomic) CSGStockDataParam *stockParam; // @synthesize stockParam=_stockParam;
- (void)dealloc;
- (void)displayDefaultValue:(struct TSGData *)arg1;
- (long long)getReletiveIndexAtPoint:(struct CGPoint)arg1 bySDData:(struct TSGData *)arg2;
- (void)convertCursor:(struct CGPoint)arg1 toSGData:(struct TSGData *)arg2;
- (struct TSGData *)convert;
- (unsigned long long)computeHighestLowestPrice:(float)arg1 hPrice:(CDStruct_2b56ed6f *)arg2 lPrice:(CDStruct_2b56ed6f *)arg3 maxRowCount:(unsigned long long)arg4 minRowCount:(unsigned long long)arg5;
- (void)computeHighestLowestPrice:(BOOL)arg1 hPrice:(CDStruct_2b56ed6f *)arg2 lPrice:(CDStruct_2b56ed6f *)arg3 cPrice:(CDStruct_2b56ed6f)arg4 rowCount:(int)arg5;
- (long long)computePriceValidDotLength:(CDStruct_2b56ed6f)arg1;
- (double)computePercentByFirst:(double)arg1 secondValue:(double)arg2;
- (unsigned long long)colorCompareFisrt:(CDStruct_2b56ed6f)arg1 second:(CDStruct_2b56ed6f)arg2;
- (unsigned long long)regionCursorEuqalColor;
- (unsigned long long)regionDecreaseColor;
- (unsigned long long)regionIncreaseColor;
- (float)regionFloatingLayerFontSize;
- (float)regionGridMarginBottom;
- (float)regionGridMarginTop;
- (float)regionCursorFontSize;
- (float)regionFooterFontSize;
- (float)regionHeaderFontSize;
- (float)regionLeftMinFontSize;
- (float)regionLeftMaxFontSize;
- (float)regionMaxLeftMargin;
- (float)regionBottomPadding;
- (float)regionTopPadding;
- (float)regionLeftRightPading;
- (float)regionBoundPadding;
- (float)regionGridLineWidth;
- (float)region2HeightPercent;
- (float)region1HeightPercent;
- (_Bool)getSGColor:(unsigned long long *)arg1 withUIColor:(id)arg2;
- (_Bool)getRed:(float *)arg1 green:(float *)arg2 blue:(float *)arg3 alpha:(float *)arg4 withUIColor:(id)arg5;
- (CDStruct_dda89b6c)sgRectFromCGRect:(struct CGRect)arg1;
- (id)stringWithTNumberPrice:(CDStruct_2b56ed6f)arg1;
- (id)stringWithTTime:(CDStruct_1ed7117a)arg1 newTimeFlag:(int)arg2;
- (id)stringWithTTime:(CDStruct_1ed7117a)arg1;
- (id)colorWithSGColor:(unsigned long long)arg1;
- (id)fontWithSize:(float)arg1;
- (void)setStockParam:(id)arg1;
- (id)initWithStockDataParam:(id)arg1;

@end

