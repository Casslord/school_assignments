﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prov_uppgift_5
{
    class Arbetare : Anställd
    {
        private bool ledig;
        public Arbetare(string namn, int ålder, int lön, bool ledig) : base(namn, ålder, lön)
        {
            this.ledig = ledig;
        }
    }
}
