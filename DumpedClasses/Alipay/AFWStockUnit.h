//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AFWStockUnit : NSObject
{
    _Bool _isLoading;
    CDUnknownBlockType _backBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (void)backStockId:(id)arg1;
- (void)stockIdByStockCode:(id)arg1 market:(id)arg2;

@end

