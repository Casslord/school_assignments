﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Drawing;
using System.Drawing.Drawing2D;

namespace Christers_Paint
{
    class FigurRektangel : Figur
    {
        public FigurRektangel(Point position) : base(position) { }

        public FigurRektangel(Point position, Size size) : base(position, size) { }

        protected override void OnMouseUp(MouseEventArgs e)
        {
            if (drawing)
            {
                drawing = false;
                currentPos = e.Location;
                var rc = GetRectangle();

                if (rc.Width > 0 & rc.Height > 0)
                {
                    rectangles.Add(rc);
                }

                this.Invalidate(); // Rita om fönstret
            }
        }

        protected override void OnPaint(PaintEventArgs e)
        {
            if(rectangles.Count > 0)
            {
                e.Graphics.DrawRectangles(Pens.Black, rectangles.ToArray());
            }

            if (drawing)
            {
                e.Graphics.DrawRectangle(Pens.Red, GetRectangle());
            }
        }
    }
}
