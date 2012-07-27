/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@protocol NSSerializerStream
-(void)copySerializationInto:(void*)into;
-(unsigned)writeAlignedDataSize:(unsigned)size;
-(unsigned)writeData:(const void*)data length:(unsigned)length;
-(void)writeDelayedInt:(unsigned)int for:(int)aFor;
-(unsigned)writeInt:(unsigned)int;
-(unsigned)writeRoomForInt:(int*)int;
@end

