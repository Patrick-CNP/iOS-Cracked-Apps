//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FTSNetBaseParser : NSObject
{
    unsigned int _busitype;
}

@property(nonatomic) unsigned int busitype; // @synthesize busitype=_busitype;
- (void)ftsParseRespBody:(char *)arg1 bufflen:(int)arg2;

@end

