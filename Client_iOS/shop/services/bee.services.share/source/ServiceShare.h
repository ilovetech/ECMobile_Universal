//
//	 ______    ______    ______
//	/\  __ \  /\  ___\  /\  ___\
//	\ \  __<  \ \  __\_ \ \  __\_
//	 \ \_____\ \ \_____\ \ \_____\
//	  \/_____/  \/_____/  \/_____/
//
//
//	Copyright (c) 2014-2015, Geek Zoo Studio
//	http://www.bee-framework.com
//
//
//	Permission is hereby granted, free of charge, to any person obtaining a
//	copy of this software and associated documentation files (the "Software"),
//	to deal in the Software without restriction, including without limitation
//	the rights to use, copy, modify, merge, publish, distribute, sublicense,
//	and/or sell copies of the Software, and to permit persons to whom the
//	Software is furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//	IN THE SOFTWARE.
//

#import "Bee.h"
#import "ServiceShare_Window.h"

#if (TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR)

#pragma mark -

@interface ServiceShare : BeeService

AS_SINGLETON( ServiceShare )

AS_INT( STATE_IDLE )
AS_INT( STATE_AUTHORIZING )
AS_INT( STATE_SHARING )

@property (nonatomic, assign) NSUInteger				state;
@property (nonatomic, readonly) BOOL					authorizing;
@property (nonatomic, readonly) BOOL					sharing;

@property (nonatomic, copy) BeeServiceBlock				whenAuthBegin;
@property (nonatomic, copy) BeeServiceBlock				whenAuthSucceed;
@property (nonatomic, copy) BeeServiceBlock				whenAuthFailed;
@property (nonatomic, copy) BeeServiceBlock				whenAuthCancelled;

@property (nonatomic, copy) BeeServiceBlock				whenShareBegin;
@property (nonatomic, copy) BeeServiceBlock				whenShareSucceed;
@property (nonatomic, copy) BeeServiceBlock				whenShareFailed;
@property (nonatomic, copy) BeeServiceBlock				whenShareCancelled;

@property (nonatomic, readonly) ServiceShare_Window *	window;

@end

#endif	// #if (TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR)
